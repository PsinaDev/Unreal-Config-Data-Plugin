#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ObjectPtr.h"
#include "HAL/Platform.h"
#include "Internationalization/Text.h"
#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "UObject/NameTypes.h"
#include "Runtime/Launch/Resources/Version.h"
#include "K2Node_CustomAsyncTask.generated.h"

class FBlueprintActionDatabaseRegistrar;
class FKismetCompilerContext;
class FMulticastDelegateProperty;
class UClass;
class UEdGraph;
class UEdGraphPin;
class UFunction;
class UK2Node_CallFunction;
class UK2Node_CustomEvent;
class UK2Node_TemporaryVariable;
#define UE_5_6 (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6)

UCLASS(Abstract)
class DATACONFIGNODES_API UK2Node_CustomAsyncTask : public UK2Node
{
	GENERATED_BODY()

public:
	UK2Node_CustomAsyncTask();

	virtual void AllocateDefaultPins() override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual bool IsCompatibleWithGraph(const UEdGraph* TargetGraph) const override;
	virtual void ValidateNodeDuringCompilation(class FCompilerResultsLog& MessageLog) const override;
	virtual bool HasExternalDependencies(TArray<class UStruct*>* OptionalOutput) const override;
#if UE_5_6
	virtual bool IsLatentForMacros() const override;
#endif
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual FName GetCornerIcon() const override;
	virtual FText GetToolTipHeading() const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;

	UFunction* GetProxyFactoryFunction() const;

protected:
	struct FOutputPinAndLocalVariable
	{
		UEdGraphPin* OutputPin;
		UK2Node_TemporaryVariable* TempVar;
		FOutputPinAndLocalVariable(UEdGraphPin* Pin, UK2Node_TemporaryVariable* Var) : OutputPin(Pin), TempVar(Var) {}
	};

	UPROPERTY()
	FName ProxyFactoryFunctionName;

	UPROPERTY()
	TObjectPtr<UClass> ProxyFactoryClass;

	UPROPERTY()
	TObjectPtr<UClass> ProxyClass;

	UPROPERTY()
	FName ProxyActivateFunctionName;

	virtual bool HandleDelegateBinding(
		const TArray<FOutputPinAndLocalVariable>& VariableOutputs,
		UEdGraphPin* ProxyObjectPin,
		UEdGraphPin*& InOutLastThenPin,
		UEdGraph* SourceGraph,
		FKismetCompilerContext& CompilerContext);

	virtual void ProcessOutputPin(UEdGraphPin* OutputPin, UK2Node_TemporaryVariable* TempVar, UEdGraphPin* EventOutputPin, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext);

private:
	static bool IsValidDataPin(const UEdGraphPin* Pin, EEdGraphPinDirection Direction);
	static bool CreateDelegateBinding(UEdGraphPin* DelegateInputPin, FName FunctionName, UK2Node* CurrentNode, UEdGraph* SourceGraph, FKismetCompilerContext& CompilerContext);
	static bool CopyEventSignatureFromFunction(UK2Node_CustomEvent* CENode, UFunction* Function, const UEdGraphSchema_K2* Schema);
	static bool ProcessDelegateProperty(
		FMulticastDelegateProperty* CurrentProperty,
		const TArray<FOutputPinAndLocalVariable>& VariableOutputs,
		UEdGraphPin* ProxyObjectPin,
		UEdGraphPin*& InOutLastThenPin,
		UEdGraphPin*& OutLastActivatedThenPin,
		UK2Node* CurrentNode,
		UEdGraph* SourceGraph,
		FKismetCompilerContext& CompilerContext);

	bool ExpandDefaultToSelfPin(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph, UK2Node_CallFunction* IntermediateProxyNode);

	static const FName GetAsyncTaskProxyName();
};