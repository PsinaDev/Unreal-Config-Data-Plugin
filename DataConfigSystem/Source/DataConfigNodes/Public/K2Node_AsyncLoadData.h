// Copyright PsinaDev 2025.

#pragma once

#include "CoreMinimal.h"
#include "K2Node_CustomAsyncTask.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "K2Node_AsyncLoadData.generated.h"

class FBlueprintActionDatabaseRegistrar;
class UEdGraphPin;
class UK2Node_AddDelegate;
class UK2Node_CustomEvent;
class UEdGraphSchema_K2;

UCLASS()
class DATACONFIGNODES_API UK2Node_AsyncLoadData : public UK2Node_CustomAsyncTask
{
	GENERATED_BODY()

public:
	UK2Node_AsyncLoadData();

	// UK2Node interface
	virtual void AllocateDefaultPins() override;
	virtual void ReconstructNode() override;
	virtual void PostReconstructNode() override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetMenuCategory() const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	// End UK2Node interface

protected:
	// UK2Node_CustomAsyncTask interface
	virtual bool HandleDelegateBinding(
		const TArray<FOutputPinAndLocalVariable>& VariableOutputs,
		UEdGraphPin* ProxyObjectPin,
		UEdGraphPin*& InOutLastThenPin,
		UEdGraph* SourceGraph,
		FKismetCompilerContext& CompilerContext) override;
	// End UK2Node_CustomAsyncTask interface

private:
	// Helper functions for pin management
	void UpdateOutputPinType();
	UEdGraphPin* GetDataTagPin() const;
	UEdGraphPin* GetLoadedObjectPin() const;
	
	// Helper functions for type resolution
	UClass* GetClassToSpawn() const;
	FGameplayTag GetTagFromPin() const;
	FGameplayTag ParseTagFromString(const FString& TagString) const;
	virtual FLinearColor GetNodeTitleColor() const override
	{
		return FLinearColor(0.68f, 0.16f, 0.34f); 
	}
	// Helper functions for delegate binding
	bool CreateDelegateForNode(UK2Node_AddDelegate* AddDelegateNode, UK2Node_CustomEvent* CurrentCENode, 
		FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph);
	bool CopySignatureForDelegate(UK2Node_CustomEvent* CENode, UFunction* DelegateSignature, 
		const UEdGraphSchema_K2* Schema);
	// Flag to prevent recursion during pin updates
	bool bIsUpdatingPins = false;
};