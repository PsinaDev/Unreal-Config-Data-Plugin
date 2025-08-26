// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DataConfigSubsystem.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LatentActions.h"
#include "Engine/LatentActionManager.h"
#include "AsyncLoadData.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncDataLoadCompleted, UObject*, LoadedObject);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAsyncDataLoadFailed);

UCLASS(BlueprintType) //*meta=(ExposedAsyncProxy=AsyncTask)*//
class DATACONFIGSYSTEM_API UAsyncLoadData : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncLoadData();

	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContext", DefaultToSelf="WorldContext", DisplayName="Async Load Data"), Category="Data Config")
	static UAsyncLoadData* AsyncLoadDataByTag(UObject* WorldContext, FGameplayTag DataTag);

	UPROPERTY(BlueprintAssignable)
	FOnAsyncDataLoadCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FOnAsyncDataLoadFailed OnFailed;

	virtual void Activate() override;

protected:
	UPROPERTY()
	FGameplayTag TargetTag;

	UPROPERTY()
	UObject* WorldContext;

	UPROPERTY()
	FOnDataLoadComplete InternalOnComplete;

	UPROPERTY()
	FOnDataLoadFailed InternalOnFailed;

	UFUNCTION()
	void OnLoadCompleted(UObject* LoadedObject);

	UFUNCTION()
	void OnLoadFailed();
};
