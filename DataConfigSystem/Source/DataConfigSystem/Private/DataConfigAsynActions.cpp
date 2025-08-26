// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#include "DataConfigAsynActions.h"
#include "ConfigSubsysLogCategory.h"
#include "DataDevSettings.h"
#include "Runtime/Launch/Resources/Version.h"
#define UE_5_6 (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6)

#if !UE_5_6
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#endif

UAsyncLoadDataAsset* UAsyncLoadDataAsset::AsyncLoadDataAssetByTag(UObject* WorldContext, FGameplayTag ItemTag)
{
	UAsyncLoadDataAsset* LoadDataAssetAction = NewObject<UAsyncLoadDataAsset>();
	LoadDataAssetAction->TargetItemTag = ItemTag;
	LoadDataAssetAction->World = WorldContext;
	
	return LoadDataAssetAction;
}

void UAsyncLoadDataAsset::Activate()
{
	Super::Activate();

	const UDataDevSettings* DevSettings = GetDefault<UDataDevSettings>();
	if (!DevSettings)
	{
		OnFailure.Broadcast();
		SetReadyToDestroy();
		return;
	}

	auto x = DevSettings->GetData().Find(TargetItemTag);
	TSoftObjectPtr FoundItem(x ? x->ToSoftObjectPath() : FSoftObjectPath());
	
	if (FoundItem)
	{
#if UE_5_6
		FoundItem.LoadAsync(FLoadSoftObjectPathAsyncDelegate::CreateLambda([this](const FSoftObjectPath& AssetPath, UObject* Object)
		{
			OnAsyncLoadComplete(AssetPath, Object);
		}));
#else
		FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
		StreamableManager.RequestAsyncLoad(FoundItem.ToSoftObjectPath(), 
			FStreamableDelegate::CreateLambda([this, FoundItem]()
			{
				OnAsyncLoadComplete(FoundItem.ToSoftObjectPath(), FoundItem.Get());
			}));
#endif
	}
	else
	{
		UE_LOG(LogDataConfig, Warning, TEXT("Fail to find data asset with tag %s in %s"), *TargetItemTag.ToString(), *World->GetName());
		OnFailure.Broadcast();
		SetReadyToDestroy();
	}
}

void UAsyncLoadDataAsset::OnAsyncLoadComplete(const FSoftObjectPath& AssetPath, UObject* Object)
{
	if (Object)
	{
		OnCompleted.Broadcast(Cast<UPrimaryDataAsset>(Object));
	}
	else
	{
		OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

UAsyncLoadTable* UAsyncLoadTable::AsyncLoadDataTableByTag(UObject* WorldContext, FGameplayTag ItemTag)
{
	UAsyncLoadTable* LoadDataAssetAction = NewObject<UAsyncLoadTable>();
	LoadDataAssetAction->TargetItemTag = ItemTag;
	LoadDataAssetAction->World = WorldContext;
	
	return LoadDataAssetAction;
}

void UAsyncLoadTable::Activate()
{
	Super::Activate();

	const UDataDevSettings* DevSettings = GetDefault<UDataDevSettings>();
	if (!DevSettings)
	{
		OnFailure.Broadcast();
		SetReadyToDestroy();
		return;
	}
	
	auto x = DevSettings->GetData().Find(TargetItemTag);
	TSoftObjectPtr FoundItem(x ? x->ToSoftObjectPath() : FSoftObjectPath());
	
	if (FoundItem)
	{
#if UE_5_6
		FoundItem.LoadAsync(FLoadSoftObjectPathAsyncDelegate::CreateLambda([this](const FSoftObjectPath& AssetPath, UObject* Object)
		{
			OnAsyncLoadComplete(AssetPath, Object);
		}));
#else
		FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
		StreamableManager.RequestAsyncLoad(FoundItem.ToSoftObjectPath(), 
			FStreamableDelegate::CreateLambda([this, FoundItem]()
			{
				OnAsyncLoadComplete(FoundItem.ToSoftObjectPath(), FoundItem.Get());
			}));
#endif
	}
	else
	{
		UE_LOG(LogDataConfig, Warning, TEXT("Fail to find data table with tag %s in %s"), *TargetItemTag.ToString(), *World->GetName());
		OnFailure.Broadcast();
		SetReadyToDestroy();
	}
}

void UAsyncLoadTable::OnAsyncLoadComplete(const FSoftObjectPath& AssetPath, UObject* Object)
{
	if (Object)
	{
		OnCompleted.Broadcast(Cast<UDataTable>(Object));
	}
	else
	{
		OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}