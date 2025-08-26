// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#include "DataConfigSubsystem.h"
#include "ConfigSubsysLogCategory.h"
#include "DataDevSettings.h"
#include "Engine/AssetManager.h"
#include "LatentActions.h"
#include "Engine/LatentActionManager.h"

DEFINE_LOG_CATEGORY(LogDataConfig)

class FLoadDataAsyncLatentAction : public FPendingLatentAction
{
public:
    FGameplayTag TargetTag;
    TSoftObjectPtr<UObject> Asset;
    UObject*& LoadedObj;
    FName ExecutionFunction;
    int32 OutputLink;
    FWeakObjectPtr CallbackTarget;
    TSharedPtr<FStreamableHandle> StreamableHandle;

    FLoadDataAsyncLatentAction(FGameplayTag InTag, const TSoftObjectPtr<UObject>& SoftObject, UObject*& LoadedObject, const FLatentActionInfo& LatentInfo)
        : TargetTag(InTag)
        , Asset(SoftObject)
        , LoadedObj(LoadedObject)
        , ExecutionFunction(LatentInfo.ExecutionFunction)
        , OutputLink(LatentInfo.Linkage)
        , CallbackTarget(LatentInfo.CallbackTarget)
    {
        if (!Asset.IsNull())
        {
            if (Asset.IsValid())
            {
                LoadedObj = Asset.Get();
            }
            else
            {
                FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
                TArray<FSoftObjectPath> AssetsToLoad;
                AssetsToLoad.Add(Asset.ToSoftObjectPath());
                
                StreamableHandle = StreamableManager.RequestAsyncLoad(
                    AssetsToLoad,
                    FStreamableDelegate::CreateRaw(this, &FLoadDataAsyncLatentAction::OnAssetLoaded),
                    FStreamableManager::DefaultAsyncLoadPriority,
                    false
                );
            }
        }
    }

    void OnAssetLoaded() const
    {
        LoadedObj = Asset.Get();
        UE_LOG(LogDataConfig, Verbose, TEXT("Latent async load completed for tag %s"), *TargetTag.ToString());
    }

    virtual void UpdateOperation(FLatentResponse& Response) override
    {
        bool bIsComplete = LoadedObj != nullptr || Asset.IsNull();
        Response.FinishAndTriggerIf(bIsComplete, ExecutionFunction, OutputLink, CallbackTarget);
    }
};

void UDataConfigSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    if (const UDataDevSettings* Settings = GetDefault<UDataDevSettings>())
    {
        Data = Settings->GetData();
        UE_LOG(LogDataConfig, Log, TEXT("DataConfigSubsystem initialized with %d data entries"), Data.Num());
    }
    else
    {
        UE_LOG(LogDataConfig, Error, TEXT("Failed to get DataDevSettings"));
    }
}

void UDataConfigSubsystem::Deinitialize()
{
    // Clear active handles
    ActiveHandles.Empty();
    LoadedObjectsCache.Empty();
    
    Super::Deinitialize();
    UE_LOG(LogDataConfig, Log, TEXT("DataConfigSubsystem deinitialized"));
}

UObject* UDataConfigSubsystem::GetDataSync(FGameplayTag DataTag)
{
    if (!DataTag.IsValid())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("GetDataSync called with invalid GameplayTag"));
        return nullptr;
    }

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    if (!FoundData)
    {
        UE_LOG(LogDataConfig, Warning, TEXT("No data found for tag %s"), *DataTag.ToString());
        return nullptr;
    }

    if (FoundData->IsNull())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("Data for tag %s is null"), *DataTag.ToString());
        return nullptr;
    }

    UObject* LoadedObject = FoundData->LoadSynchronous();
    if (LoadedObject)
    {
        LoadedObjectsCache.Add(DataTag, LoadedObject);
        UE_LOG(LogDataConfig, Verbose, TEXT("Successfully loaded %s for tag %s"), 
            *LoadedObject->GetName(), *DataTag.ToString());
    }
    else
    {
        UE_LOG(LogDataConfig, Warning, TEXT("Failed to load synchronously for tag %s"), *DataTag.ToString());
    }

    return LoadedObject;
}

void UDataConfigSubsystem::GetDataAsync(FLatentActionInfo LatentInfo, FGameplayTag DataTag, UObject*& LoadedObject)
{
    if (!DataTag.IsValid())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("GetDataAsync called with invalid GameplayTag"));
        LoadedObject = nullptr;
        return;
    }

    // Check cache first
    if (TWeakObjectPtr<UObject>* CachedObject = LoadedObjectsCache.Find(DataTag))
    {
        if (CachedObject->IsValid())
        {
            LoadedObject = CachedObject->Get();
            return;
        }
    }

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    if (!FoundData || FoundData->IsNull())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("No data found for tag %s"), *DataTag.ToString());
        LoadedObject = nullptr;
        return;
    }

    GetWorld()->GetLatentActionManager().AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID,
        new FLoadDataAsyncLatentAction(DataTag, *FoundData, LoadedObject, LatentInfo));
}

void UDataConfigSubsystem::LoadDataAsync(FGameplayTag DataTag, FOnDataLoadComplete OnComplete, FOnDataLoadFailed OnFailed)
{
    if (!DataTag.IsValid())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("LoadDataAsync called with invalid GameplayTag"));
        OnFailed.ExecuteIfBound();
        return;
    }

    // Check cache first
    if (TWeakObjectPtr<UObject>* CachedObject = LoadedObjectsCache.Find(DataTag))
    {
        if (CachedObject->IsValid())
        {
            UE_LOG(LogDataConfig, Verbose, TEXT("Returning cached object for tag %s"), *DataTag.ToString());
            OnComplete.ExecuteIfBound(CachedObject->Get());
            return;
        }
    }

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    if (!FoundData || FoundData->IsNull())
    {
        UE_LOG(LogDataConfig, Warning, TEXT("No data found for tag %s"), *DataTag.ToString());
        OnFailed.ExecuteIfBound();
        return;
    }

    // Check if already loaded
    if (FoundData->IsValid())
    {
        UObject* LoadedObject = FoundData->Get();
        LoadedObjectsCache.Add(DataTag, LoadedObject);
        UE_LOG(LogDataConfig, Verbose, TEXT("Object already loaded for tag %s"), *DataTag.ToString());
        OnComplete.ExecuteIfBound(LoadedObject);
        return;
    }

    FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
    TArray<FSoftObjectPath> AssetsToLoad;
    AssetsToLoad.Add(FoundData->ToSoftObjectPath());

    TSharedPtr<FStreamableHandle> Handle = StreamableManager.RequestAsyncLoad(
        AssetsToLoad,
        FStreamableDelegate::CreateUObject(this, &UDataConfigSubsystem::OnAsyncLoadCompleteInternal, DataTag, OnComplete, OnFailed),
        FStreamableManager::DefaultAsyncLoadPriority,
        false
    );

    if (Handle.IsValid())
    {
        ActiveHandles.Add(DataTag, Handle);
        UE_LOG(LogDataConfig, Verbose, TEXT("Started async load for tag %s"), *DataTag.ToString());
    }
    else
    {
        UE_LOG(LogDataConfig, Error, TEXT("Failed to start async load for tag %s"), *DataTag.ToString());
        OnFailed.ExecuteIfBound();
    }
}

UClass* UDataConfigSubsystem::GetExpectedClassForTag(FGameplayTag DataTag) const
{
    if (!DataTag.IsValid())
    {
        return UObject::StaticClass();
    }

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    if (!FoundData || FoundData->IsNull())
    {
        return UObject::StaticClass();
    }

    // Try to get class from asset path
    const FSoftObjectPath& AssetPath = FoundData->ToSoftObjectPath();
    if (AssetPath.IsValid())
    {
        // For DataTable
        if (AssetPath.GetAssetPathString().Contains(TEXT("DataTable")))
        {
            return UDataTable::StaticClass();
        }
        // For DataAsset
        if (AssetPath.GetAssetPathString().Contains(TEXT("DataAsset")))
        {
            return UPrimaryDataAsset::StaticClass();
        }
    }

    return UObject::StaticClass();
}

bool UDataConfigSubsystem::HasDataForTag(FGameplayTag DataTag) const
{
    if (!DataTag.IsValid())
    {
        return false;
    }

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    return FoundData && !FoundData->IsNull();
}

UWorld* UDataConfigSubsystem::GetWorld() const
{
    return GetGameInstance() ? GetGameInstance()->GetWorld() : nullptr;
}

void UDataConfigSubsystem::OnAsyncLoadCompleteInternal(FGameplayTag DataTag, FOnDataLoadComplete OnComplete, FOnDataLoadFailed OnFailed)
{
    // Remove from active handles
    ActiveHandles.Remove(DataTag);

    const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
    if (!FoundData)
    {
        UE_LOG(LogDataConfig, Error, TEXT("Data disappeared during async load for tag %s"), *DataTag.ToString());
        OnFailed.ExecuteIfBound();
        return;
    }

    UObject* LoadedObject = FoundData->Get();
    if (LoadedObject)
    {
        LoadedObjectsCache.Add(DataTag, LoadedObject);
        UE_LOG(LogDataConfig, Verbose, TEXT("Successfully completed async load for tag %s"), *DataTag.ToString());
        OnComplete.ExecuteIfBound(LoadedObject);
    }
    else
    {
        UE_LOG(LogDataConfig, Warning, TEXT("Async load completed but object is null for tag %s"), *DataTag.ToString());
        OnFailed.ExecuteIfBound();
    }
}
