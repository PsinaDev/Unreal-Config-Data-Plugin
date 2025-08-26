#include "K2Node_CustomAsyncTask.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "Engine/Blueprint.h"
#include "Engine/MemberReference.h"
#include "K2Node_AddDelegate.h"
#include "K2Node_CallFunction.h"
#include "K2Node_CreateDelegate.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_Self.h"
#include "K2Node_TemporaryVariable.h"
#include "K2Node_AssignmentStatement.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "KismetCompiler.h"
#if UE_5_6
#include "ObjectTools.h"
#endif

#define LOCTEXT_NAMESPACE "K2Node_CustomAsyncTask"

UK2Node_CustomAsyncTask::UK2Node_CustomAsyncTask()
	: ProxyFactoryFunctionName(NAME_None)
	, ProxyFactoryClass(nullptr)
	, ProxyClass(nullptr)
	, ProxyActivateFunctionName(NAME_None)
{
	OrphanedPinSaveMode = ESaveOrphanPinMode::SaveAll;
}

FText UK2Node_CustomAsyncTask::GetTooltipText() const
{
	FFormatNamedArguments Args;
	FText Tooltip;
#if UE_5_6
	Tooltip = FText::FromString(ObjectTools::GetDefaultTooltipForFunction(GetProxyFactoryFunction()));
#else
	Tooltip = GetProxyFactoryFunction() ? GetProxyFactoryFunction()->GetDisplayNameText() : FText::GetEmpty();
#endif
	Args.Add(TEXT("FunctionTooltip"), Tooltip);
	Args.Add(TEXT("LatentString"), NSLOCTEXT("K2Node", "LatentFunction", "Latent. This node will complete at a later time. Latent nodes can only be placed in event graphs."));
	
	return FText::Format(LOCTEXT("CustomAsyncTaskTooltip", "{FunctionTooltip}\n\n{LatentString}"), Args);
}

FText UK2Node_CustomAsyncTask::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (GetProxyFactoryFunction() == nullptr)
	{
		return LOCTEXT("CustomAsyncTaskGetNodeTitle", "Custom Async Task: Missing Function");
	}
#if UE_5_6
	return ObjectTools::GetUserFacingFunctionName(GetProxyFactoryFunction());
#else
	UFunction* Function = GetProxyFactoryFunction();
	return Function ? FText::FromString(Function->GetName()) : FText::GetEmpty();
#endif 
}

bool UK2Node_CustomAsyncTask::IsCompatibleWithGraph(const UEdGraph* TargetGraph) const
{
	bool bIsCompatible = false;
	EGraphType GraphType = TargetGraph->GetSchema()->GetGraphType(TargetGraph);
	if (GraphType == EGraphType::GT_Ubergraph || GraphType == EGraphType::GT_Macro)
	{
		bIsCompatible = true;
	}
	return bIsCompatible && Super::IsCompatibleWithGraph(TargetGraph);
}

void UK2Node_CustomAsyncTask::AllocateDefaultPins()
{
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);

	bool bExposeProxy = false;
	bool bHideThen = false;
	FText ExposeProxyDisplayName;
	for (const UStruct* TestStruct = ProxyClass; TestStruct; TestStruct = TestStruct->GetSuperStruct())
	{
		bExposeProxy |= TestStruct->HasMetaData(TEXT("ExposedAsyncProxy"));
		bHideThen |= TestStruct->HasMetaData(TEXT("HideThen"));
		if (ExposeProxyDisplayName.IsEmpty())
		{
			ExposeProxyDisplayName = TestStruct->GetMetaDataText(TEXT("ExposedAsyncProxy"));
		}
	}

	if (!bHideThen)
	{
		CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	}

	if (bExposeProxy)
	{
		UEdGraphPin* ProxyPin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Object, ProxyClass, GetAsyncTaskProxyName());
		if (!ExposeProxyDisplayName.IsEmpty())
		{
			ProxyPin->PinFriendlyName = ExposeProxyDisplayName;
		}
	}

	UFunction* Function = GetProxyFactoryFunction();
	if (!bHideThen && Function)
	{
		for (TFieldIterator<FProperty> PropIt(Function); PropIt && (PropIt->PropertyFlags & CPF_Parm); ++PropIt)
		{
			FProperty* Param = *PropIt;
			const bool bIsFunctionOutput = Param->HasAnyPropertyFlags(CPF_OutParm) && !Param->HasAnyPropertyFlags(CPF_ReferenceParm) && !Param->HasAnyPropertyFlags(CPF_ReturnParm);
			if (bIsFunctionOutput)
			{
				UEdGraphPin* Pin = CreatePin(EGPD_Output, NAME_None, Param->GetFName());
				K2Schema->ConvertPropertyToPinType(Param, Pin->PinType);
			}
		}
	}

	UFunction* DelegateSignatureFunction = nullptr;
	for (TFieldIterator<FProperty> PropertyIt(ProxyClass); PropertyIt; ++PropertyIt)
	{
		if (FMulticastDelegateProperty* Property = CastField<FMulticastDelegateProperty>(*PropertyIt))
		{
			UEdGraphPin* ExecPin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, Property->GetFName());
			ExecPin->PinToolTip = Property->GetToolTipText().ToString();
			ExecPin->PinFriendlyName = Property->GetDisplayNameText();

			if (!DelegateSignatureFunction)
			{
				DelegateSignatureFunction = Property->SignatureFunction;
			}
		}
	}

	if (DelegateSignatureFunction)
	{
		for (TFieldIterator<FProperty> PropIt(DelegateSignatureFunction); PropIt && (PropIt->PropertyFlags & CPF_Parm); ++PropIt)
		{
			FProperty* Param = *PropIt;
			const bool bIsFunctionInput = !Param->HasAnyPropertyFlags(CPF_OutParm) || Param->HasAnyPropertyFlags(CPF_ReferenceParm);
			if (bIsFunctionInput)
			{
				UEdGraphPin* Pin = CreatePin(EGPD_Output, NAME_None, Param->GetFName());
				K2Schema->ConvertPropertyToPinType(Param, Pin->PinType);
			}
		}
	}

	bool bAllPinsGood = true;
	if (Function)
	{
		TSet<FName> PinsToHide;
		FBlueprintEditorUtils::GetHiddenPinsForFunction(GetGraph(), Function, PinsToHide);
		for (TFieldIterator<FProperty> PropIt(Function); PropIt && (PropIt->PropertyFlags & CPF_Parm); ++PropIt)
		{
			FProperty* Param = *PropIt;
			const bool bIsFunctionInput = !Param->HasAnyPropertyFlags(CPF_OutParm) || Param->HasAnyPropertyFlags(CPF_ReferenceParm);
			if (!bIsFunctionInput)
			{
				continue;
			}

			UEdGraphNode::FCreatePinParams PinParams;
			PinParams.bIsReference = Param->HasAnyPropertyFlags(CPF_ReferenceParm) && bIsFunctionInput;
			UEdGraphPin* Pin = CreatePin(EGPD_Input, NAME_None, Param->GetFName(), PinParams);
			const bool bPinGood = (Pin && K2Schema->ConvertPropertyToPinType(Param, Pin->PinType));

			if (bPinGood)
			{
				const FString& PinDisplayName = Param->GetMetaData(FBlueprintMetadata::MD_DisplayName);
				if (!PinDisplayName.IsEmpty())
				{
					Pin->PinFriendlyName = FText::FromString(PinDisplayName);
				}
				
				Pin->bDefaultValueIsIgnored = Param->HasAllPropertyFlags(CPF_ConstParm | CPF_ReferenceParm) && (!Function->HasMetaData(FBlueprintMetadata::MD_AutoCreateRefTerm) || Pin->PinType.IsContainer());

				const bool bAdvancedPin = Param->HasAllPropertyFlags(CPF_AdvancedDisplay);
				Pin->bAdvancedView = bAdvancedPin;
				if(bAdvancedPin && (ENodeAdvancedPins::NoPins == AdvancedPinDisplay))
				{
					AdvancedPinDisplay = ENodeAdvancedPins::Hidden;
				}

				FString ParamValue;
				if (K2Schema->FindFunctionParameterDefaultValue(Function, Param, ParamValue))
				{
					K2Schema->SetPinAutogeneratedDefaultValue(Pin, ParamValue);
				}
				else
				{
					K2Schema->SetPinAutogeneratedDefaultValueBasedOnType(Pin);
				}

				if (PinsToHide.Contains(Pin->PinName))
				{
					Pin->bHidden = true;
				}
			}

			bAllPinsGood = bAllPinsGood && bPinGood;
		}
	}

	Super::AllocateDefaultPins();
}

const FName UK2Node_CustomAsyncTask::GetAsyncTaskProxyName()
{
	static const FName Name(TEXT("AsyncTaskProxy"));
	return Name;
}

bool UK2Node_CustomAsyncTask::IsValidDataPin(const UEdGraphPin* Pin, EEdGraphPinDirection Direction)
{
	const bool bValidDataPin = Pin
		&& !Pin->bOrphanedPin
		&& (Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec);

	const bool bProperDirection = Pin && (Pin->Direction == Direction);

	return bValidDataPin && bProperDirection;
}

bool UK2Node_CustomAsyncTask::CreateDelegateBinding(UEdGraphPin* DelegateInputPin, FName FunctionName, UK2Node* CurrentNode, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext)
{
	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();
	check(DelegateInputPin && Schema && CurrentNode && SourceGraph && (FunctionName != NAME_None));
	bool bResult = true;

	UK2Node_Self* SelfNode = CompilerContext.SpawnIntermediateNode<UK2Node_Self>(CurrentNode, SourceGraph);
	SelfNode->AllocateDefaultPins();

	UK2Node_CreateDelegate* CreateDelegateNode = CompilerContext.SpawnIntermediateNode<UK2Node_CreateDelegate>(CurrentNode, SourceGraph);
	CreateDelegateNode->AllocateDefaultPins();
	bResult &= Schema->TryCreateConnection(DelegateInputPin, CreateDelegateNode->GetDelegateOutPin());
	bResult &= Schema->TryCreateConnection(SelfNode->FindPinChecked(UEdGraphSchema_K2::PN_Self), CreateDelegateNode->GetObjectInPin());
	CreateDelegateNode->SetFunction(FunctionName);

	return bResult;
}

bool UK2Node_CustomAsyncTask::CopyEventSignatureFromFunction(UK2Node_CustomEvent* CENode, UFunction* Function, const UEdGraphSchema_K2* Schema)
{
	check(CENode && Function && Schema);

	bool bResult = true;
	for (TFieldIterator<FProperty> PropIt(Function); PropIt && (PropIt->PropertyFlags & CPF_Parm); ++PropIt)
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

bool UK2Node_CustomAsyncTask::ProcessDelegateProperty(
	FMulticastDelegateProperty* CurrentProperty, const TArray<FOutputPinAndLocalVariable>& VariableOutputs,
	UEdGraphPin* ProxyObjectPin, UEdGraphPin*& InOutLastThenPin, UEdGraphPin*& OutLastActivatedThenPin,
	UK2Node* CurrentNode, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext)
{
	bool bIsErrorFree = true;
	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();
	check(CurrentProperty && ProxyObjectPin && InOutLastThenPin && CurrentNode && SourceGraph && Schema);

	UEdGraphPin* PinForCurrentDelegateProperty = CurrentNode->FindPin(CurrentProperty->GetFName());
	if (!PinForCurrentDelegateProperty || (UEdGraphSchema_K2::PC_Exec != PinForCurrentDelegateProperty->PinType.PinCategory))
	{
		FText ErrorMessage = FText::Format(LOCTEXT("WrongDelegateProperty", "CustomAsyncTask: Cannot find execution pin for delegate "), FText::FromString(CurrentProperty->GetName()));
		CompilerContext.MessageLog.Error(*ErrorMessage.ToString(), CurrentNode);
		return false;
	}

	UK2Node_CustomEvent* CurrentCENode = CompilerContext.SpawnIntermediateNode<UK2Node_CustomEvent>(CurrentNode, SourceGraph);
	CurrentCENode->CustomFunctionName = *FString::Printf(TEXT("%s_%s"), *CurrentProperty->GetName(), *CompilerContext.GetGuid(CurrentNode));
	CurrentCENode->AllocateDefaultPins();

	UK2Node_AddDelegate* AddDelegateNode = CompilerContext.SpawnIntermediateNode<UK2Node_AddDelegate>(CurrentNode, SourceGraph);
	AddDelegateNode->SetFromProperty(CurrentProperty, false, CurrentProperty->GetOwnerClass());
	AddDelegateNode->AllocateDefaultPins();
	
	bIsErrorFree &= Schema->TryCreateConnection(AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Self), ProxyObjectPin);
	bIsErrorFree &= Schema->TryCreateConnection(InOutLastThenPin, AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute));
	InOutLastThenPin = AddDelegateNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);

	bIsErrorFree &= CreateDelegateBinding(AddDelegateNode->GetDelegatePin(), CurrentCENode->GetFunctionName(), CurrentNode, SourceGraph, CompilerContext);
	bIsErrorFree &= CopyEventSignatureFromFunction(CurrentCENode, AddDelegateNode->GetDelegateSignature(), Schema);

	OutLastActivatedThenPin = CurrentCENode->FindPinChecked(UEdGraphSchema_K2::PN_Then);
	
	for (const FOutputPinAndLocalVariable& OutputPair : VariableOutputs)
	{
		UEdGraphPin* PinWithData = CurrentCENode->FindPin(OutputPair.OutputPin->PinName);
		if (PinWithData == nullptr)
		{
			continue;
		}

		UK2Node_CustomAsyncTask* CustomAsyncTaskNode = static_cast<UK2Node_CustomAsyncTask*>(CurrentNode);
		CustomAsyncTaskNode->ProcessOutputPin(OutputPair.OutputPin, OutputPair.TempVar, PinWithData, SourceGraph, CompilerContext);

		UK2Node_AssignmentStatement* AssignNode = CompilerContext.SpawnIntermediateNode<UK2Node_AssignmentStatement>(CurrentNode, SourceGraph);
		AssignNode->AllocateDefaultPins();
		bIsErrorFree &= Schema->TryCreateConnection(OutLastActivatedThenPin, AssignNode->GetExecPin());
		bIsErrorFree &= Schema->TryCreateConnection(OutputPair.TempVar->GetVariablePin(), AssignNode->GetVariablePin());
		AssignNode->NotifyPinConnectionListChanged(AssignNode->GetVariablePin());
		bIsErrorFree &= Schema->TryCreateConnection(AssignNode->GetValuePin(), PinWithData);
		AssignNode->NotifyPinConnectionListChanged(AssignNode->GetValuePin());

		OutLastActivatedThenPin = AssignNode->GetThenPin();
	}

	bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*PinForCurrentDelegateProperty, *OutLastActivatedThenPin).CanSafeConnect();
	return bIsErrorFree;
}

bool UK2Node_CustomAsyncTask::HandleDelegateBinding(const TArray<FOutputPinAndLocalVariable>& VariableOutputs, UEdGraphPin* ProxyObjectPin, UEdGraphPin*& InOutLastThenPin, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext)
{
	bool bIsErrorFree = true;
	for (TFieldIterator<FMulticastDelegateProperty> PropertyIt(ProxyClass); PropertyIt && bIsErrorFree; ++PropertyIt)
	{
		UEdGraphPin* LastActivatedThenPin = nullptr;
		bIsErrorFree &= ProcessDelegateProperty(*PropertyIt, VariableOutputs, ProxyObjectPin, InOutLastThenPin, LastActivatedThenPin, this, SourceGraph, CompilerContext);
	}
	return bIsErrorFree;
}

void UK2Node_CustomAsyncTask::ProcessOutputPin(UEdGraphPin* OutputPin, UK2Node_TemporaryVariable* TempVar, UEdGraphPin* EventOutputPin, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext)
{
}

bool UK2Node_CustomAsyncTask::ExpandDefaultToSelfPin(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph, UK2Node_CallFunction* IntermediateProxyNode)
{
	if(SourceGraph && IntermediateProxyNode)
	{
		if (const UFunction* TargetFunc = IntermediateProxyNode->GetTargetFunction())
		{
			const FString& MetaData = TargetFunc->GetMetaData(FBlueprintMetadata::MD_DefaultToSelf);
			if (!MetaData.IsEmpty())
			{
				if (UEdGraphPin* DefaultToSelfPin = IntermediateProxyNode->FindPinChecked(MetaData, EGPD_Input))
				{
					if (DefaultToSelfPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Interface && DefaultToSelfPin->LinkedTo.Num() == 0)
					{
						const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();

						UK2Node_Self* SelfNode = CompilerContext.SpawnIntermediateNode<UK2Node_Self>(this, SourceGraph);
						SelfNode->AllocateDefaultPins();
						UEdGraphPin* SelfPin = SelfNode->FindPinChecked(UEdGraphSchema_K2::PSC_Self);
						return Schema->TryCreateConnection(DefaultToSelfPin, SelfPin);
					}
				}
			}
		}	
	}
	return true;
}

void UK2Node_CustomAsyncTask::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    Super::ExpandNode(CompilerContext, SourceGraph);

	const UEdGraphSchema_K2* Schema = CompilerContext.GetSchema();
	check(SourceGraph && Schema);
	bool bIsErrorFree = true;

	UK2Node_CallFunction* const CallCreateProxyObjectNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	CallCreateProxyObjectNode->FunctionReference.SetExternalMember(ProxyFactoryFunctionName, ProxyFactoryClass);
	CallCreateProxyObjectNode->AllocateDefaultPins();
	if (CallCreateProxyObjectNode->GetTargetFunction() == nullptr)
	{
		const FText ClassName = ProxyFactoryClass ? FText::FromString(ProxyFactoryClass->GetName()) : LOCTEXT("MissingClassString", "Unknown Class");
		const FString FormattedMessage = FText::Format(
			LOCTEXT("AsyncTaskErrorFmt", "CustomAsyncTask: Missing function {0} from class {1} for async task @@"),
			FText::FromString(ProxyFactoryFunctionName.GetPlainNameString()),
			ClassName
		).ToString();

		CompilerContext.MessageLog.Error(*FormattedMessage, this);
		return;
	}

	bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*FindPinChecked(UEdGraphSchema_K2::PN_Execute), *CallCreateProxyObjectNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute)).CanSafeConnect();

	for (UEdGraphPin* CurrentPin : Pins)
	{
		if (IsValidDataPin(CurrentPin, EGPD_Input))
		{
			UEdGraphPin* DestPin = CallCreateProxyObjectNode->FindPin(CurrentPin->PinName);
			if (DestPin)
			{
				bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*CurrentPin, *DestPin).CanSafeConnect();
			}
		}
	}

	UEdGraphPin* const ProxyObjectPin = CallCreateProxyObjectNode->GetReturnValuePin();
	check(ProxyObjectPin);
	UEdGraphPin* OutputAsyncTaskProxy = FindPin(GetAsyncTaskProxyName());
	if (OutputAsyncTaskProxy)
	{
		bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*OutputAsyncTaskProxy, *ProxyObjectPin).CanSafeConnect();
	}

	bIsErrorFree &= ExpandDefaultToSelfPin(CompilerContext, SourceGraph, CallCreateProxyObjectNode);		

	TArray<FOutputPinAndLocalVariable> VariableOutputs;
	bool bPassedFactoryOutputs = false;
	for (UEdGraphPin* CurrentPin : Pins)
	{
		if ((OutputAsyncTaskProxy != CurrentPin) && IsValidDataPin(CurrentPin, EGPD_Output))
		{
			if (!bPassedFactoryOutputs)
			{
				UEdGraphPin* DestPin = CallCreateProxyObjectNode->FindPin(CurrentPin->PinName);
				if (DestPin)
				{
					bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*CurrentPin, *DestPin).CanSafeConnect();
				}
			}
			else
			{
				const FEdGraphPinType& PinType = CurrentPin->PinType;
				UK2Node_TemporaryVariable* TempVarOutput = CompilerContext.SpawnInternalVariable(
					this, PinType.PinCategory, PinType.PinSubCategory, PinType.PinSubCategoryObject.Get(), PinType.ContainerType, PinType.PinValueType);
				if (TempVarOutput->GetVariablePin())
				{
					bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*CurrentPin, *TempVarOutput->GetVariablePin()).CanSafeConnect();
					VariableOutputs.Add(FOutputPinAndLocalVariable(CurrentPin, TempVarOutput));
				}
			}
		}
		else if (!bPassedFactoryOutputs && CurrentPin && CurrentPin->Direction == EGPD_Output)
		{
			bPassedFactoryOutputs = (CurrentPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec) && (CurrentPin->PinName != UEdGraphSchema_K2::PN_Then);
		}
	}

	UEdGraphPin* LastThenPin = CallCreateProxyObjectNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);

	UK2Node_CallFunction* IsValidFuncNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	const FName IsValidFuncName = GET_FUNCTION_NAME_CHECKED(UKismetSystemLibrary, IsValid);
	IsValidFuncNode->FunctionReference.SetExternalMember(IsValidFuncName, UKismetSystemLibrary::StaticClass());
	IsValidFuncNode->AllocateDefaultPins();
	UEdGraphPin* IsValidInputPin = IsValidFuncNode->FindPinChecked(TEXT("Object"));

	bIsErrorFree &= Schema->TryCreateConnection(ProxyObjectPin, IsValidInputPin);

	UK2Node_IfThenElse* ValidateProxyNode = CompilerContext.SpawnIntermediateNode<UK2Node_IfThenElse>(this, SourceGraph);
	ValidateProxyNode->AllocateDefaultPins();
	bIsErrorFree &= Schema->TryCreateConnection(IsValidFuncNode->GetReturnValuePin(), ValidateProxyNode->GetConditionPin());

	bIsErrorFree &= Schema->TryCreateConnection(LastThenPin, ValidateProxyNode->GetExecPin());
	LastThenPin = ValidateProxyNode->GetThenPin();

	bIsErrorFree &= HandleDelegateBinding(VariableOutputs, ProxyObjectPin, LastThenPin, SourceGraph, CompilerContext);

	if (ProxyActivateFunctionName != NAME_None)
	{
		UK2Node_CallFunction* const CallActivateProxyObjectNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
		CallActivateProxyObjectNode->FunctionReference.SetExternalMember(ProxyActivateFunctionName, ProxyClass);
		CallActivateProxyObjectNode->AllocateDefaultPins();

		UEdGraphPin* ActivateCallSelfPin = Schema->FindSelfPin(*CallActivateProxyObjectNode, EGPD_Input);
		check(ActivateCallSelfPin);

		bIsErrorFree &= Schema->TryCreateConnection(ProxyObjectPin, ActivateCallSelfPin);

		UEdGraphPin* ActivateExecPin = CallActivateProxyObjectNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute);
		UEdGraphPin* ActivateThenPin = CallActivateProxyObjectNode->FindPinChecked(UEdGraphSchema_K2::PN_Then);

		bIsErrorFree &= Schema->TryCreateConnection(LastThenPin, ActivateExecPin);

		LastThenPin = ActivateThenPin;
	}

    if (UEdGraphPin* OriginalThenPin = FindPin(UEdGraphSchema_K2::PN_Then))
	{
		bIsErrorFree &= CompilerContext.MovePinLinksToIntermediate(*OriginalThenPin, *LastThenPin).CanSafeConnect();
	}
	
	if (ValidateProxyNode->GetElsePin())
	{
		bIsErrorFree &= CompilerContext.CopyPinLinksToIntermediate(*LastThenPin, *ValidateProxyNode->GetElsePin()).CanSafeConnect();
	}

	if (!bIsErrorFree)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("InternalConnectionError", "CustomAsyncTask: Internal connection error. @@").ToString(), this);
	}

	BreakAllNodeLinks();
}

bool UK2Node_CustomAsyncTask::HasExternalDependencies(TArray<class UStruct*>* OptionalOutput) const
{
	const UBlueprint* SourceBlueprint = GetBlueprint();

	const bool bProxyFactoryResult = (ProxyFactoryClass != NULL) && (ProxyFactoryClass->ClassGeneratedBy.Get() != SourceBlueprint);
	if (bProxyFactoryResult && OptionalOutput)
	{
		OptionalOutput->AddUnique(ProxyFactoryClass);
	}

	const bool bProxyResult = (ProxyClass != NULL) && (ProxyClass->ClassGeneratedBy.Get() != SourceBlueprint);
	if (bProxyResult && OptionalOutput)
	{
		OptionalOutput->AddUnique(ProxyClass);
	}

	const bool bSuperResult = Super::HasExternalDependencies(OptionalOutput);
	return bProxyFactoryResult || bProxyResult || bSuperResult;
}
#if ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION >= 6
bool UK2Node_CustomAsyncTask::IsLatentForMacros() const
{
	return true;
}
#endif
FName UK2Node_CustomAsyncTask::GetCornerIcon() const
{
	return TEXT("Graph.Latent.LatentIcon");
}

FText UK2Node_CustomAsyncTask::GetToolTipHeading() const
{
	return LOCTEXT("LatentFunc", "Latent");
}

FText UK2Node_CustomAsyncTask::GetMenuCategory() const
{	
	UFunction* TargetFunction = GetProxyFactoryFunction();
	return UK2Node_CallFunction::GetDefaultCategoryForFunction(TargetFunction, FText::GetEmpty());
}

void UK2Node_CustomAsyncTask::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		check(NodeSpawner != nullptr);

		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

UFunction* UK2Node_CustomAsyncTask::GetProxyFactoryFunction() const
{
	if (ProxyFactoryClass == nullptr)
	{
		return nullptr;
	}
	
	FMemberReference FunctionReference;
	FunctionReference.SetExternalMember(ProxyFactoryFunctionName, ProxyFactoryClass);

	UFunction* FactoryFunction = FunctionReference.ResolveMember<UFunction>(GetBlueprint());
	
	if (FactoryFunction == nullptr)
	{
		FactoryFunction = ProxyFactoryClass->FindFunctionByName(ProxyFactoryFunctionName);
	}

	return FactoryFunction;
}

void UK2Node_CustomAsyncTask::ValidateNodeDuringCompilation(class FCompilerResultsLog& MessageLog) const
{
	Super::ValidateNodeDuringCompilation(MessageLog);
}

#undef LOCTEXT_NAMESPACE