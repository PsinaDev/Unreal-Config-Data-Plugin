// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#include "AsyncLoadData.h"
#include "DataConfigSubsystem.h"
#include "ConfigSubsysLogCategory.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"

UAsyncLoadData::UAsyncLoadData()
{
	WorldContext = nullptr;
}

UAsyncLoadData* UAsyncLoadData::AsyncLoadDataByTag(UObject* InWorldContext, FGameplayTag DataTag)
{
	if (!InWorldContext)
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadDataByTag: WorldContext is null"));
		return nullptr;
	}
	if (!DataTag.IsValid())
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadDataByTag: Invalid GameplayTag provided"));
		return nullptr;
	}

	UAsyncLoadData* LoadAction = NewObject<UAsyncLoadData>(InWorldContext);
	LoadAction->WorldContext = InWorldContext;
	LoadAction->TargetTag = DataTag;
	LoadAction->RegisterWithGameInstance(InWorldContext);
	return LoadAction;
}

void UAsyncLoadData::Activate()
{
	Super::Activate();

	if (!WorldContext)
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadData: WorldContext is null"));
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}
	if (!TargetTag.IsValid())
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadData: Invalid GameplayTag"));
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World)
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadData: Failed to get world from context"));
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UGameInstance* GI = World->GetGameInstance();
	if (!GI)
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadData: GameInstance is null"));
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UDataConfigSubsystem* DataSubsystem = GI->GetSubsystem<UDataConfigSubsystem>();
	if (!DataSubsystem)
	{
		UE_LOG(LogDataConfig, Error, TEXT("AsyncLoadData: Failed to get DataConfigSubsystem"));
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}

	if (!DataSubsystem->HasDataForTag(TargetTag))
	{
		UE_LOG(LogDataConfig, Warning, TEXT("AsyncLoadData: No data found for tag %s"), *TargetTag.ToString());
		OnFailed.Broadcast();
		SetReadyToDestroy();
		return;
	}

	InternalOnComplete.Unbind();
	InternalOnFailed.Unbind();
	InternalOnComplete.BindDynamic(this, &UAsyncLoadData::OnLoadCompleted);
	InternalOnFailed.BindDynamic(this, &UAsyncLoadData::OnLoadFailed);

	DataSubsystem->LoadDataAsync(TargetTag, InternalOnComplete, InternalOnFailed);
}

void UAsyncLoadData::OnLoadCompleted(UObject* LoadedObject)
{
	if (LoadedObject)
	{
		UE_LOG(LogDataConfig, Verbose, TEXT("AsyncLoadData: Successfully loaded %s for tag %s"), *LoadedObject->GetName(), *TargetTag.ToString());
		OnCompleted.Broadcast(LoadedObject);
	}
	else
	{
		UE_LOG(LogDataConfig, Warning, TEXT("AsyncLoadData: LoadedObject is null for tag %s"), *TargetTag.ToString());
		OnFailed.Broadcast();
	}
	SetReadyToDestroy();
}

void UAsyncLoadData::OnLoadFailed()
{
	UE_LOG(LogDataConfig, Warning, TEXT("AsyncLoadData: Failed to load data for tag %s"), *TargetTag.ToString());
	OnFailed.Broadcast();
	SetReadyToDestroy();
}
