// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "DataDevSettings.generated.h"


UCLASS(config=Game, DefaultConfig, DisplayName="Data Configuration Settings")
class DATACONFIGSYSTEM_API UDataDevSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UDataDevSettings(const FObjectInitializer& ObjectInitializer);

protected:
	// Main data configuration map
	UPROPERTY(Config, EditAnywhere, Category="Data Configuration",
		meta=(GetAllowedClasses="GetAllowedClassNames", AllowAbstract,
			  ToolTip="Map of GameplayTags to data assets filtered by ClassFilters"))
	TMap<FGameplayTag, TSoftObjectPtr<UObject>> Data;

	// Class filters for asset validation
	UPROPERTY(Config, EditAnywhere, Category="Data Configuration",
		meta=(ToolTip="Only assets of these classes (or their subclasses) will be allowed in the Data map"))
	TArray<UClass*> ClassFilters = {UDataAsset::StaticClass(),UDataTable::StaticClass()};

	// Validation settings
	UPROPERTY(Config, EditAnywhere, Category="Validation Settings",
		meta=(ToolTip="Enable automatic validation of assets against class filters"))
	bool bEnableStrictValidation = true;

	UPROPERTY(Config, EditAnywhere, Category="Validation Settings",
		meta=(ToolTip="Automatically remove invalid assets during validation"))
	bool bAutoRemoveInvalidAssets = true;

	UPROPERTY(Config, EditAnywhere, Category="Validation Settings",
		meta=(ToolTip="Show detailed validation logs"))
	bool bVerboseValidationLogging = false;

#if WITH_EDITOR
public:
	// Editor validation functions
	UFUNCTION(Category="Data Configuration")
	void ValidateAllAssets();
	
	UFUNCTION(Category="Data Configuration")
	void ClearInvalidAssets();

	UFUNCTION(Category="Data Configuration")
	void RefreshAssetValidation();

protected:
	// Override for property change validation
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	// Validation implementation
	void PerformAssetValidation();
	bool IsAssetClassValid(UObject* Asset) const;
	void LogValidationResult(const FString& AssetName, const FString& TagName, bool bIsValid, const FString& Reason = TEXT("")) const;
	void ShowEditorNotification(const FString& Message, bool bIsWarning = false) const;
	int32 RemoveInvalidAssetsFromMap();

#endif // WITH_EDITOR

public:
	// Dynamic allowed classes function for UPROPERTY meta
	UFUNCTION()
	TArray<UClass*> GetAllowedClassNames() const;

	// Runtime data access functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	const TMap<FGameplayTag, TSoftObjectPtr<UObject>>& GetData() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	bool HasDataForTag(FGameplayTag DataTag) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	TSoftObjectPtr<UObject> GetSoftObjectForTag(FGameplayTag DataTag) const;

	UFUNCTION(BlueprintCallable, Category="Data Configuration")
	UObject* LoadObjectForTag(FGameplayTag DataTag) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	TArray<FGameplayTag> GetAllConfiguredTags() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	TArray<TSoftObjectPtr<UObject>> GetAllSoftObjects() const;

	// Class filter utilities
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	bool IsClassAllowed(UClass* TestClass) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	TArray<UClass*> GetClassFilters() const;

	// Advanced data queries
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	TArray<FGameplayTag> GetTagsForClass(UClass* TargetClass) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Configuration")
	int32 GetDataCount() const;
};
