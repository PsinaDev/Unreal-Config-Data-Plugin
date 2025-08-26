// Copyright Protocol:Terminate 2024 - 2025. All rights reserved.

#include "DataDevSettings.h"
#include "Engine/Engine.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "Logging/LogMacros.h"

#if WITH_EDITOR
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogDataDevSettings, Log, All);

UDataDevSettings::UDataDevSettings(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("Project");
	SectionName = TEXT("Data Configuration");
	
	bEnableStrictValidation = true;
	bAutoRemoveInvalidAssets = true;
	bVerboseValidationLogging = false;

}

TArray<UClass*> UDataDevSettings::GetAllowedClassNames() const
{
	if (ClassFilters.Num() == 0)
	{
		return { UObject::StaticClass() };
	}
	return ClassFilters;
}

const TMap<FGameplayTag, TSoftObjectPtr<UObject>>& UDataDevSettings::GetData() const
{
	return Data;
}

bool UDataDevSettings::HasDataForTag(FGameplayTag DataTag) const
{
	if (!DataTag.IsValid())
	{
		return false;
	}

	const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
	return FoundData && !FoundData->IsNull();
}

TSoftObjectPtr<UObject> UDataDevSettings::GetSoftObjectForTag(FGameplayTag DataTag) const
{
	if (!DataTag.IsValid())
	{
		return TSoftObjectPtr<UObject>();
	}

	const TSoftObjectPtr<UObject>* FoundData = Data.Find(DataTag);
	return FoundData ? *FoundData : TSoftObjectPtr<UObject>();
}

UObject* UDataDevSettings::LoadObjectForTag(FGameplayTag DataTag) const
{
	TSoftObjectPtr<UObject> SoftObjectPtr = GetSoftObjectForTag(DataTag);
	if (SoftObjectPtr.IsValid())
	{
		return SoftObjectPtr.LoadSynchronous();
	}
	return nullptr;
}

TArray<FGameplayTag> UDataDevSettings::GetAllConfiguredTags() const
{
	TArray<FGameplayTag> Tags;
	Data.GetKeys(Tags);
	return Tags;
}

TArray<TSoftObjectPtr<UObject>> UDataDevSettings::GetAllSoftObjects() const
{
	TArray<TSoftObjectPtr<UObject>> Objects;
	Data.GenerateValueArray(Objects);
	return Objects;
}

bool UDataDevSettings::IsClassAllowed(UClass* TestClass) const
{
	if (!TestClass)
	{
		return false;
	}

	if (ClassFilters.Num() == 0)
	{
		return true;
	}

	for (UClass* AllowedClass : ClassFilters)
	{
		if (AllowedClass && TestClass->IsChildOf(AllowedClass))
		{
			return true;
		}
	}

	return false;
}

TArray<UClass*> UDataDevSettings::GetClassFilters() const
{
	return ClassFilters;
}

TArray<FGameplayTag> UDataDevSettings::GetTagsForClass(UClass* TargetClass) const
{
	TArray<FGameplayTag> MatchingTags;
	
	if (!TargetClass)
	{
		return MatchingTags;
	}

	for (const auto& DataPair : Data)
	{
		if (DataPair.Value.IsValid())
		{
			if (UObject* LoadedObject = DataPair.Value.LoadSynchronous())
			{
				if (LoadedObject->GetClass()->IsChildOf(TargetClass))
				{
					MatchingTags.Add(DataPair.Key);
				}
			}
		}
	}

	return MatchingTags;
}

int32 UDataDevSettings::GetDataCount() const
{
	return Data.Num();
}

#if WITH_EDITOR

void UDataDevSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (!PropertyChangedEvent.Property)
	{
		return;
	}
	
	const FName PropertyName = PropertyChangedEvent.Property->GetFName();
	
	// Trigger validation when Data or ClassFilters are modified
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UDataDevSettings, Data) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(UDataDevSettings, ClassFilters))
	{
		if (bEnableStrictValidation)
		{
			PerformAssetValidation();
		}
	}
	
	// Save configuration after changes
	SaveConfig();
}

void UDataDevSettings::ValidateAllAssets()
{
	PerformAssetValidation();
}

void UDataDevSettings::ClearInvalidAssets()
{
	const bool bOriginalAutoRemove = bAutoRemoveInvalidAssets;
	bAutoRemoveInvalidAssets = true;
	
	PerformAssetValidation();
	
	bAutoRemoveInvalidAssets = bOriginalAutoRemove;
	SaveConfig();
	
	// Force refresh the property editor
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.NotifyCustomizationModuleChanged();
	}
}

void UDataDevSettings::RefreshAssetValidation()
{
	PerformAssetValidation();
}

void UDataDevSettings::PerformAssetValidation()
{
	if (!bEnableStrictValidation)
	{
		if (bVerboseValidationLogging)
		{
			UE_LOG(LogDataDevSettings, Log, TEXT("Asset validation is disabled"));
		}
		return;
	}

	TArray<FGameplayTag> InvalidTags;
	int32 ValidAssetCount = 0;
	int32 InvalidAssetCount = 0;
	int32 EmptySlotCount = 0;

	for (auto It = Data.CreateIterator(); It; ++It)
	{
		const FGameplayTag& Tag = It->Key;
		TSoftObjectPtr<UObject>& AssetPtr = It->Value;
		const FString TagString = Tag.ToString();
		
		// Skip null/empty entries
		if (AssetPtr.IsNull())
		{
			EmptySlotCount++;
			if (bVerboseValidationLogging)
			{
				LogValidationResult(TEXT("Empty Slot"), TagString, true, TEXT("Empty slot - no validation needed"));
			}
			continue;
		}
		
		// Attempt to load the asset
		UObject* LoadedAsset = AssetPtr.LoadSynchronous();
		if (!LoadedAsset)
		{
			LogValidationResult(AssetPtr.GetAssetName(), TagString, false, TEXT("Failed to load asset"));
			InvalidTags.Add(Tag);
			InvalidAssetCount++;
			continue;
		}
		
		// Validate asset class against filters
		if (!IsAssetClassValid(LoadedAsset))
		{
			const FString Reason = FString::Printf(TEXT("Asset class '%s' is not allowed by ClassFilters"), 
				*LoadedAsset->GetClass()->GetName());
			LogValidationResult(LoadedAsset->GetName(), TagString, false, Reason);
			
			if (bAutoRemoveInvalidAssets)
			{
				InvalidTags.Add(Tag);
			}
			InvalidAssetCount++;
			continue;
		}
		
		// Asset is valid
		LogValidationResult(LoadedAsset->GetName(), TagString, true);
		ValidAssetCount++;
	}
	
	// Remove invalid assets if auto-removal is enabled
	if (bAutoRemoveInvalidAssets && InvalidTags.Num() > 0)
	{
		for (const FGameplayTag& InvalidTag : InvalidTags)
		{
			Data.Remove(InvalidTag);
		}
		
		UE_LOG(LogDataDevSettings, Warning, TEXT("Removed %d invalid assets from Data map"), InvalidTags.Num());
	}
	
	// Log summary and show notification
	const FString SummaryMessage = FString::Printf(
		TEXT("Data Validation Complete: %d valid, %d invalid, %d empty slots"), 
		ValidAssetCount, InvalidAssetCount, EmptySlotCount
	);
	
	UE_LOG(LogDataDevSettings, Log, TEXT("%s"), *SummaryMessage);
	
	if (InvalidAssetCount > 0 || ValidAssetCount > 0)
	{
		ShowEditorNotification(SummaryMessage, InvalidAssetCount > 0);
	}
}

bool UDataDevSettings::IsAssetClassValid(UObject* Asset) const
{
	if (!Asset)
	{
		return false;
	}
	
	return IsClassAllowed(Asset->GetClass());
}

void UDataDevSettings::LogValidationResult(const FString& AssetName, const FString& TagName, bool bIsValid, const FString& Reason) const
{
	if (!bVerboseValidationLogging && bIsValid)
	{
		return;
	}
	
	if (bIsValid)
	{
		UE_LOG(LogDataDevSettings, Log, TEXT("✓ Asset '%s' for tag '%s' is valid"), *AssetName, *TagName);
	}
	else
	{
		FString LogMessage = FString::Printf(TEXT("✗ Asset '%s' for tag '%s' is invalid"), *AssetName, *TagName);
		if (!Reason.IsEmpty())
		{
			LogMessage += FString::Printf(TEXT(": %s"), *Reason);
		}
		UE_LOG(LogDataDevSettings, Warning, TEXT("%s"), *LogMessage);
	}
}

void UDataDevSettings::ShowEditorNotification(const FString& Message, bool bIsWarning) const
{
	if (!IsInGameThread())
	{
		return;
	}
	
	FNotificationInfo NotificationInfo(FText::FromString(Message));
	NotificationInfo.ExpireDuration = 5.0f;
	NotificationInfo.bUseSuccessFailIcons = true;
	
	if (bIsWarning)
	{
		NotificationInfo.Image = FAppStyle::GetBrush(TEXT("MessageLog.Warning"));
	}
	else
	{
		NotificationInfo.Image = FAppStyle::GetBrush(TEXT("MessageLog.Note"));
	}
	
	FSlateNotificationManager::Get().AddNotification(NotificationInfo);
}

int32 UDataDevSettings::RemoveInvalidAssetsFromMap()
{
	TArray<FGameplayTag> TagsToRemove;
	
	for (const auto& DataPair : Data)
	{
		if (DataPair.Value.IsValid())
		{
			UObject* LoadedAsset = DataPair.Value.LoadSynchronous();
			if (!LoadedAsset || !IsAssetClassValid(LoadedAsset))
			{
				TagsToRemove.Add(DataPair.Key);
			}
		}
	}
	
	for (const FGameplayTag& Tag : TagsToRemove)
	{
		Data.Remove(Tag);
	}
	
	return TagsToRemove.Num();
}

#endif // WITH_EDITOR