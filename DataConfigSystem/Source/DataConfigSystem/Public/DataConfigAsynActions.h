// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/StreamableManager.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DataConfigAsynActions.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataAssetAsyncLoadCompleted, UPrimaryDataAsset*, DataAsset);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataTableAsyncLoadCompleted, UDataTable*, DataTable);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAsyncLoadFailure);

/**
 * 
 */
UCLASS(BlueprintType)
class DATACONFIGSYSTEM_API UAsyncLoadDataAsset : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", CallInEditor = "true",
		HidePin="ReturnValue", WorldContext="WorldContext", DefaultToSelf="WorldContext"), Category = "Async Loading")
	static UAsyncLoadDataAsset* AsyncLoadDataAssetByTag(UObject* WorldContext, FGameplayTag ItemTag);

	UPROPERTY(BlueprintAssignable)
	FDataAssetAsyncLoadCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FOnAsyncLoadFailure OnFailure;

	virtual void Activate() override;

	void OnAsyncLoadComplete(const FSoftObjectPath& AssetPath, UObject* Object);

protected:
	UPROPERTY()
	FGameplayTag TargetItemTag;
	
	TSharedPtr<FStreamableHandle> StreamableHandle;
	
	TSoftObjectPtr<UObject> ItemToLoad;

	UPROPERTY()
	UObject* World;
};

UCLASS(BlueprintType)
class DATACONFIGSYSTEM_API UAsyncLoadTable : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", CallInEditor = "true",
		HidePin="ReturnValue", WorldContext="WorldContext", DefaultToSelf="WorldContext"), Category = "Async Loading")
	static UAsyncLoadTable* AsyncLoadDataTableByTag(UObject* WorldContext, FGameplayTag ItemTag);

	UPROPERTY(BlueprintAssignable)
	FDataTableAsyncLoadCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FOnAsyncLoadFailure OnFailure;

	virtual void Activate() override;
	void OnAsyncLoadComplete(const FSoftObjectPath& AssetPath, UObject* Object);

protected:
	UPROPERTY()
	FGameplayTag TargetItemTag;
	
	TSharedPtr<FStreamableHandle> StreamableHandle;
	
	TSoftObjectPtr<UObject> ItemToLoad;

	UPROPERTY()
	UObject* World;
};