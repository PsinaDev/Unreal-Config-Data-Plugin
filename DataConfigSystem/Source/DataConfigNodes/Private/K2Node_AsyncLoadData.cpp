#include "K2Node_AsyncLoadData.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "GameplayTagsManager.h"
#include "AsyncLoadData.h"
#include "DataConfigStyle.h"
#include "DataDevSettings.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_AddDelegate.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Modules/ModuleManager.h"
#include "K2Node_DynamicCast.h"
#include "K2Node_AssignmentStatement.h"
#include "K2Node_CreateDelegate.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_Self.h"
#include "K2Node_TemporaryVariable.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "KismetCompiler.h"
#include "EdGraphSchema_K2.h"
#include "Modules/ModuleManager.h"
#define LOCTEXT_NAMESPACE "K2Node_AsyncLoadData"

UK2Node_AsyncLoadData::UK2Node_AsyncLoadData()
{
	ProxyFactoryFunctionName = GET_FUNCTION_NAME_CHECKED(UAsyncLoadData, AsyncLoadDataByTag);
	ProxyFactoryClass = UAsyncLoadData::StaticClass();
	ProxyClass = UAsyncLoadData::StaticClass();
	ProxyActivateFunctionName = GET_FUNCTION_NAME_CHECKED(UAsyncLoadData, Activate);
}

void UK2Node_AsyncLoadData::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	UpdateOutputPinType();
}

void UK2Node_AsyncLoadData::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
	if (Pin && Pin->PinName == TEXT("DataTag") && !bIsUpdatingPins)
	{
		UpdateOutputPinType();
	}
}

void UK2Node_AsyncLoadData::PinDefaultValueChanged(UEdGraphPin* Pin)
{
	Super::PinDefaultValueChanged(Pin);
	if (Pin && Pin->PinName == TEXT("DataTag") && !bIsUpdatingPins)
	{
		UpdateOutputPinType();
	}
}

void UK2Node_AsyncLoadData::ReconstructNode()
{
	Super::ReconstructNode();
	UpdateOutputPinType();
}

void UK2Node_AsyncLoadData::PostReconstructNode()
{
	Super::PostReconstructNode();
	UpdateOutputPinType();
}

bool UK2Node_AsyncLoadData::HandleDelegateBinding(
	const TArray<FOutputPinAndLocalVariable>& VariableOutputs,
	UEdGraphPin* ProxyObjectPin,
	UEdGraphPin*& InOutLastThenPin,
	UEdGraph* SourceGraph,
	FKismetCompilerContext& CompilerContext)
{
	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();
	bool bIsErrorFree = true;
	
	// Process each delegate property
	for (TFieldIterator<FMulticastDelegateProperty> PropertyIt(ProxyClass); PropertyIt && bIsErrorFree; ++PropertyIt)
	{
		FMulticastDelegateProperty* DelegateProperty = *PropertyIt;
		
		UEdGraphPin* PinForCurrentDelegateProperty = FindPin(DelegateProperty->GetFName());
		if (!PinForCurrentDelegateProperty || (UEdGraphSchema_K2::PC_Exec != PinForCurrentDelegateProperty->PinType.PinCategory))
		{
			FText ErrorMessage = FText::Format(LOCTEXT("WrongDelegateProperty", "AsyncLoadData: Cannot find execution pin for delegate "), FText::FromString(DelegateProperty->GetName()));
			CompilerContext.MessageLog.Error(*ErrorMessage.ToString(), this);
			return false;
		}

		// Create custom event node
		UK2Node_CustomEvent* CurrentCENode = CompilerContext.SpawnIntermediateNode<UK2Node_CustomEvent>(this, SourceGraph);
		CurrentCENode->CustomFunctionName = *FString::Printf(TEXT("%s_%s"), *DelegateProperty->GetName(), *CompilerContext.GetGuid(this));
		CurrentCENode->AllocateDefaultPins();

		// Create add delegate node
		UK2Node_AddDelegate* AddDelegateNode = CompilerContext.SpawnIntermediateNode<UK2Node_AddDelegate>(this, SourceGraph);
		AddDelegateNode->SetFromProperty(DelegateProperty, false, DelegateProperty->GetOwnerClass());
		AddDelegateNode->AllocateDefaultPins();
		
		// Connect proxy object to add delegate
		bIsErrorFree &= Schema->TryCreateConnection(AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Self), ProxyObjectPin);
		bIsErrorFree &= Schema->TryCreateConnection(InOutLastThenPin, AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute));
		InOutLastThenPin = AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);

		// Create delegate binding
		bIsErrorFree &= CreateDelegateForNode(AddDelegateNode, CurrentCENode, CompilerContext, SourceGraph);
		bIsErrorFree &= CopySignatureForDelegate(CurrentCENode, AddDelegateNode->GetDelegateSignature(), Schema);

		UEdGraphPin* LastActivatedThenPin = CurrentCENode->FindPinChecked(UEdGraphSchema_K2::PN_Then);
		
		// Process output variables with special handling for LoadedObject
		for (const FOutputPinAndLocalVariable& OutputPair : VariableOutputs)
		{
			UEdGraphPin* PinWithData = CurrentCENode->FindPin(OutputPair.OutputPin->PinName);
			if (PinWithData == nullptr)
			{
				continue;
			}

			// Special handling for LoadedObject pin - add casting
			if (OutputPair.OutputPin->PinName == TEXT("LoadedObject"))
			{
				UClass* DesiredClass = GetClassToSpawn();
				if (DesiredClass && DesiredClass != UObject::StaticClass())
				{
					// Create dynamic cast node as pure (no exec pins)
					UK2Node_DynamicCast* CastNode = CompilerContext.SpawnIntermediateNode<UK2Node_DynamicCast>(this, SourceGraph);
					CastNode->TargetType = DesiredClass;
					CastNode->SetPurity(true); // Make it pure so it doesn't need exec pins
					CastNode->AllocateDefaultPins();
					
					// Connect event output to cast input
					bIsErrorFree &= Schema->TryCreateConnection(PinWithData, CastNode->GetCastSourcePin());
					
					// Create assignment for cast result
					UK2Node_AssignmentStatement* AssignNode = CompilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, SourceGraph);
					AssignNode->AllocateDefaultPins();
					
					// Connect execution
					bIsErrorFree &= Schema->TryCreateConnection(LastActivatedThenPin, AssignNode->GetExecPin());
					
					// Connect cast result to assignment value
					bIsErrorFree &= Schema->TryCreateConnection(CastNode->GetCastResultPin(), AssignNode->GetValuePin());
					AssignNode->NotifyPinConnectionListChanged(AssignNode->GetValuePin());
					
					// Connect temp variable to assignment variable
					bIsErrorFree &= Schema->TryCreateConnection(OutputPair.TempVar->GetVariablePin(), AssignNode->GetVariablePin());
					AssignNode->NotifyPinConnectionListChanged(AssignNode->GetVariablePin());
					
					LastActivatedThenPin = AssignNode->GetThenPin();
				}
				else
				{
					// No cast needed, standard assignment
					UK2Node_AssignmentStatement* AssignNode = CompilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, SourceGraph);
					AssignNode->AllocateDefaultPins();
					bIsErrorFree &= Schema->TryCreateConnection(LastActivatedThenPin, AssignNode->GetExecPin());
					bIsErrorFree &= Schema->TryCreateConnection(OutputPair.TempVar->GetVariablePin(), AssignNode->GetVariablePin());
					AssignNode->NotifyPinConnectionListChanged(AssignNode->GetVariablePin());
					bIsErrorFree &= Schema->TryCreateConnection(AssignNode->GetValuePin(), PinWithData);
					AssignNode->NotifyPinConnectionListChanged(AssignNode->GetValuePin());
					
					LastActivatedThenPin = AssignNode->GetThenPin();
				}
			}
			else
			{
				// Standard assignment for other pins
				UK2Node_AssignmentStatement* AssignNode = CompilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(this, SourceGraph);
				AssignNode->AllocateDefaultPins();
				bIsErrorFree &= Schema->TryCreateConnection(LastActivatedThenPin, AssignNode->GetExecPin());
				bIsErrorFree &= Schema->TryCreateConnection(OutputPair.TempVar->GetVariablePin(), AssignNode->GetVariablePin());
				AssignNode->NotifyPinConnectionListChanged(AssignNode->GetVariablePin());
				bIsErrorFree &= Schema->TryCreateConnection(AssignNode->GetValuePin(), PinWithData);
				AssignNode->NotifyPinConnectionListChanged(AssignNode->GetValuePin());
				
				LastActivatedThenPin = AssignNode->GetThenPin();
			}
		}

		// Move pin links from original delegate pin to last activated then pin
		bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*PinForCurrentDelegateProperty, *LastActivatedThenPin).CanSafeConnect();
	}
	
	return bIsErrorFree;
}

bool UK2Node_AsyncLoadData::CreateDelegateForNode(UK2Node_AddDelegate* AddDelegateNode, UK2Node_CustomEvent* CurrentCENode, FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();
	
	UK2Node_Self* SelfNode = CompilerContext.SpawnIntermediateNode<UK2Node_Self>(this, SourceGraph);
	SelfNode->AllocateDefaultPins();

	UK2Node_CreateDelegate* CreateDelegateNode = CompilerContext.SpawnIntermediateNode<UK2Node_CreateDelegate>(this, SourceGraph);
	CreateDelegateNode->AllocateDefaultPins();
	
	bool bResult = Schema->TryCreateConnection(AddDelegateNode->GetDelegatePin(), CreateDelegateNode->GetDelegateOutPin());
	bResult &= Schema->TryCreateConnection(SelfNode->FindPinChecked(UEdGraphSchema_K2::PN_Self), CreateDelegateNode->GetObjectInPin());
	CreateDelegateNode->SetFunction(CurrentCENode->GetFunctionName());
	
	return bResult;
}

bool UK2Node_AsyncLoadData::CopySignatureForDelegate(UK2Node_CustomEvent* CENode, UFunction* DelegateSignature, const UEdGraphSchema_K2* Schema)
{
	check(CENode && DelegateSignature && Schema);

	bool bResult = true;
	for (TFieldIterator<FProperty> PropIt(DelegateSignature); PropIt && (PropIt->PropertyFlags & CPF_Parm); ++PropIt)
	{
		const FProperty* Param = *PropIt;
		if (!Param->HasAnyPropertyFlags(CPF_OutParm) || Param->HasAnyPropertyFlags(CPF_ReferenceParm))
		{
			FEdGraphPinType PinType;
			bResult &= Schema->ConvertPropertyToPinType(Param, PinType);
			bResult &= (nullptr != CENode->CreateUserDefinedPin(Param->GetFName(), PinType, EGPD_Output));
		}
	}
	return bResult;
}

void UK2Node_AsyncLoadData::UpdateOutputPinType()
{
	if (bIsUpdatingPins)
	{
		return;
	}
	bIsUpdatingPins = true;

	UEdGraphPin* LoadedObjectPin = GetLoadedObjectPin();
	if (LoadedObjectPin)
	{
		UClass* Desired = GetClassToSpawn();
		if (!Desired)
		{
			Desired = UObject::StaticClass();
		}

		const bool bTypeChanged =
			LoadedObjectPin->PinType.PinCategory != UEdGraphSchema_K2::PC_Object ||
			LoadedObjectPin->PinType.PinSubCategoryObject.Get() != Desired;

		LoadedObjectPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
		LoadedObjectPin->PinType.PinSubCategory = NAME_None;
		LoadedObjectPin->PinType.PinSubCategoryObject = Desired;

		// Break incompatible connections
		TArray<UEdGraphPin*> ToBreak;
		for (UEdGraphPin* LinkedPin : LoadedObjectPin->LinkedTo)
		{
			if (LinkedPin && LoadedObjectPin->GetSchema()->CanCreateConnection(LoadedObjectPin, LinkedPin).Response == CONNECT_RESPONSE_DISALLOW)
			{
				ToBreak.Add(LinkedPin);
			}
		}
		for (UEdGraphPin* LinkedPin : ToBreak)
		{
			LoadedObjectPin->BreakLinkTo(LinkedPin);
		}

		LoadedObjectPin->PinToolTip = (Desired != UObject::StaticClass())
			? FString::Printf(TEXT("Loaded %s object"), *Desired->GetName())
			: TEXT("Loaded object (type determined by tag)");

		if (bTypeChanged)
		{
			if (UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForGraph(GetGraph()))
			{
				FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
			}
		}
	}

	bIsUpdatingPins = false;
}

UClass* UK2Node_AsyncLoadData::GetClassToSpawn() const
{
	const FGameplayTag Tag = GetTagFromPin();
	if (!Tag.IsValid())
	{
		return nullptr;
	}

	const UDataDevSettings* Settings = GetDefault<UDataDevSettings>();
	if (!Settings)
	{
		return nullptr;
	}

	const TMap<FGameplayTag, TSoftObjectPtr<UObject>>& Data = Settings->GetData();
	const TSoftObjectPtr<UObject>* Found = Data.Find(Tag);
	if (!Found || Found->IsNull())
	{
		return nullptr;
	}

	const FSoftObjectPath AssetPath = Found->ToSoftObjectPath();
	if (!AssetPath.IsValid())
	{
		return nullptr;
	}

	IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
	const FAssetData AssetData = AssetRegistry.GetAssetByObjectPath(AssetPath);
	if (!AssetData.IsValid())
	{
		return nullptr;
	}

	// Check for generated class (for Blueprints)
	FString GeneratedClassPath;
	if (AssetData.GetTagValue(TEXT("GeneratedClass"), GeneratedClassPath) && !GeneratedClassPath.IsEmpty())
	{
		FSoftClassPath SoftClassPath(GeneratedClassPath);
		if (UClass* GeneratedClass = SoftClassPath.ResolveClass())
		{
			return GeneratedClass;
		}
		return SoftClassPath.TryLoadClass<UObject>();
	}
	
	// Otherwise use native class
	const FString ClassPathStr = AssetData.AssetClassPath.ToString();
	if (!ClassPathStr.IsEmpty())
	{
		if (UClass* NativeClass = FindObject<UClass>(nullptr, *ClassPathStr))
		{
			return NativeClass;
		}
		return LoadClass<UObject>(nullptr, *ClassPathStr);
	}
	
	return nullptr;
}

FGameplayTag UK2Node_AsyncLoadData::GetTagFromPin() const
{
	UEdGraphPin* DataTagPin = GetDataTagPin();
	if (!DataTagPin || DataTagPin->LinkedTo.Num() > 0 || DataTagPin->DefaultValue.IsEmpty())
	{
		return FGameplayTag();
	}
	return ParseTagFromString(DataTagPin->DefaultValue);
}

FGameplayTag UK2Node_AsyncLoadData::ParseTagFromString(const FString& TagString) const
{
	FString CleanedString = TagString;
	if (CleanedString.StartsWith(TEXT("(")) && CleanedString.EndsWith(TEXT(")")))
	{
		CleanedString = CleanedString.Mid(1, CleanedString.Len() - 2);
	}
	FString Key, Value;
	if (CleanedString.Split(TEXT("="), &Key, &Value))
	{
		Value = Value.TrimQuotes();
		return UGameplayTagsManager::Get().RequestGameplayTag(FName(*Value), false);
	}
	CleanedString = CleanedString.TrimQuotes();
	return UGameplayTagsManager::Get().RequestGameplayTag(FName(*CleanedString), false);
}

UEdGraphPin* UK2Node_AsyncLoadData::GetDataTagPin() const
{
	return FindPin(TEXT("DataTag"));
}

UEdGraphPin* UK2Node_AsyncLoadData::GetLoadedObjectPin() const
{
	for (UEdGraphPin* Pin : Pins)
	{
		if (Pin && Pin->Direction == EGPD_Output && 
			Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Object &&
			(Pin->PinName == TEXT("LoadedObject") || Pin->PinName.ToString().Contains(TEXT("LoadedObject"))))
		{
			return Pin;
		}
	}
	return nullptr;
}

FText UK2Node_AsyncLoadData::GetTooltipText() const
{
	return LOCTEXT("AsyncLoadDataTooltip", "Asynchronously loads data by GameplayTag with automatic type casting.");
}

FText UK2Node_AsyncLoadData::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (TitleType == ENodeTitleType::ListView || TitleType == ENodeTitleType::MenuTitle)
	{
		return LOCTEXT("AsyncLoadDataNodeTitle_ListView", "Async Load Data");
	}
	UClass* SpawnClass = GetClassToSpawn();
	if (SpawnClass && SpawnClass != UObject::StaticClass())
	{
		FFormatNamedArguments Args;
		Args.Add(TEXT("ClassName"), FText::FromString(SpawnClass->GetName()));
		return FText::Format(LOCTEXT("AsyncLoadDataNodeTitle_Full", "Async Load Data\n{ClassName}"), Args);
	}
	return LOCTEXT("AsyncLoadDataNodeTitle_Default", "Async Load Data");
}

FText UK2Node_AsyncLoadData::GetMenuCategory() const
{
	return LOCTEXT("MenuCategory", "Data Config");
}

void UK2Node_AsyncLoadData::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		NodeSpawner->DefaultMenuSignature.MenuName = GetNodeTitle(ENodeTitleType::ListView);
		NodeSpawner->DefaultMenuSignature.Category = GetMenuCategory();
		NodeSpawner->DefaultMenuSignature.Tooltip = GetTooltipText();
		NodeSpawner->DefaultMenuSignature.Keywords = LOCTEXT("AsyncLoadDataKeywords", "async load data tag config");
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

FSlateIcon UK2Node_AsyncLoadData::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = FLinearColor::Green;
	static FSlateIcon Icon(FDataConfigStyle::GetStyleSetName(), "DataConfigSystem.AsyncLoadDataIcon");
	return Icon;
}

#undef LOCTEXT_NAMESPACE