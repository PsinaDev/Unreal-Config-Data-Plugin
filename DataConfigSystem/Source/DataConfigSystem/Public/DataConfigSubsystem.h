// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "Engine/StreamableManager.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "DataConfigSubsystem.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDataLoadComplete, UObject*, LoadedObject);
DECLARE_DYNAMIC_DELEGATE(FOnDataLoadFailed);

/**
 * Subsystem for managing and loading game data by GameplayTags
 */
UCLASS()
class DATACONFIGSYSTEM_API UDataConfigSubsystem : public UGameInstanceSubsystem 
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category="Data Config")
	UObject* GetDataSync(FGameplayTag DataTag);

	UFUNCTION(BlueprintCallable, Category="Data Config", meta = (Latent, LatentInfo = "LatentInfo"))
	void GetDataAsync(FLatentActionInfo LatentInfo, FGameplayTag DataTag, UObject*& LoadedObject);

	// New async method with delegates
	UFUNCTION(BlueprintCallable, Category="Data Config")
	void LoadDataAsync(FGameplayTag DataTag, FOnDataLoadComplete OnComplete, FOnDataLoadFailed OnFailed);

	// Get the expected class for a given tag (for auto casting)
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Config")
	UClass* GetExpectedClassForTag(FGameplayTag DataTag) const;

	// Check if tag exists in data
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Data Config")
	bool HasDataForTag(FGameplayTag DataTag) const;

	virtual UWorld* GetWorld() const override;

private:
	UPROPERTY()
	TMap<FGameplayTag, TSoftObjectPtr<UObject>> Data;

	// Cache for loaded objects
	UPROPERTY()
	TMap<FGameplayTag, TWeakObjectPtr<UObject>> LoadedObjectsCache;

	// Active streamable handles
	TMap<FGameplayTag, TSharedPtr<FStreamableHandle>> ActiveHandles;

	void OnAsyncLoadCompleteInternal(FGameplayTag DataTag, FOnDataLoadComplete OnComplete, FOnDataLoadFailed OnFailed);
};