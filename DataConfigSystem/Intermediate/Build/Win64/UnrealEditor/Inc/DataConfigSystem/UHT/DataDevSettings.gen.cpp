// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataDevSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataDevSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataDevSettings();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataDevSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DataConfigSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDataDevSettings Function ClearInvalidAssets *****************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "ClearInvalidAssets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDataDevSettings::execClearInvalidAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInvalidAssets();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UDataDevSettings Function ClearInvalidAssets *******************************

// ********** Begin Class UDataDevSettings Function GetAllConfiguredTags ***************************
struct Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics
{
	struct DataDevSettings_eventGetAllConfiguredTags_Parms
	{
		TArray<FGameplayTag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetAllConfiguredTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetAllConfiguredTags", Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::DataDevSettings_eventGetAllConfiguredTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::DataDevSettings_eventGetAllConfiguredTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetAllConfiguredTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetAllConfiguredTags();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetAllConfiguredTags *****************************

// ********** Begin Class UDataDevSettings Function GetAllowedClassNames ***************************
struct Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics
{
	struct DataDevSettings_eventGetAllowedClassNames_Parms
	{
		TArray<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic allowed classes function for UPROPERTY meta\n" },
#endif
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic allowed classes function for UPROPERTY meta" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetAllowedClassNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetAllowedClassNames", Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::DataDevSettings_eventGetAllowedClassNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::DataDevSettings_eventGetAllowedClassNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetAllowedClassNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UClass*>*)Z_Param__Result=P_THIS->GetAllowedClassNames();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetAllowedClassNames *****************************

// ********** Begin Class UDataDevSettings Function GetAllSoftObjects ******************************
struct Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics
{
	struct DataDevSettings_eventGetAllSoftObjects_Parms
	{
		TArray<TSoftObjectPtr<UObject>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetAllSoftObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetAllSoftObjects", Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::DataDevSettings_eventGetAllSoftObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::DataDevSettings_eventGetAllSoftObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetAllSoftObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSoftObjectPtr<UObject>>*)Z_Param__Result=P_THIS->GetAllSoftObjects();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetAllSoftObjects ********************************

// ********** Begin Class UDataDevSettings Function GetClassFilters ********************************
struct Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics
{
	struct DataDevSettings_eventGetClassFilters_Parms
	{
		TArray<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetClassFilters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetClassFilters", Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::DataDevSettings_eventGetClassFilters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::DataDevSettings_eventGetClassFilters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetClassFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetClassFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetClassFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UClass*>*)Z_Param__Result=P_THIS->GetClassFilters();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetClassFilters **********************************

// ********** Begin Class UDataDevSettings Function GetData ****************************************
struct Z_Construct_UFunction_UDataDevSettings_GetData_Statics
{
	struct DataDevSettings_eventGetData_Parms
	{
		TMap<FGameplayTag,TSoftObjectPtr<UObject>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime data access functions\n" },
#endif
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime data access functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetData", Z_Construct_UFunction_UDataDevSettings_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetData_Statics::DataDevSettings_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetData_Statics::DataDevSettings_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGameplayTag,TSoftObjectPtr<UObject>>*)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetData ******************************************

// ********** Begin Class UDataDevSettings Function GetDataCount ***********************************
struct Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics
{
	struct DataDevSettings_eventGetDataCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetDataCount", Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::DataDevSettings_eventGetDataCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::DataDevSettings_eventGetDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetDataCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDataCount();
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetDataCount *************************************

// ********** Begin Class UDataDevSettings Function GetSoftObjectForTag ****************************
struct Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics
{
	struct DataDevSettings_eventGetSoftObjectForTag_Parms
	{
		FGameplayTag DataTag;
		TSoftObjectPtr<UObject> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetSoftObjectForTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetSoftObjectForTag_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetSoftObjectForTag", Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::DataDevSettings_eventGetSoftObjectForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::DataDevSettings_eventGetSoftObjectForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetSoftObjectForTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetSoftObjectForTag(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetSoftObjectForTag ******************************

// ********** Begin Class UDataDevSettings Function GetTagsForClass ********************************
struct Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics
{
	struct DataDevSettings_eventGetTagsForClass_Parms
	{
		UClass* TargetClass;
		TArray<FGameplayTag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Advanced data queries\n" },
#endif
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advanced data queries" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetTagsForClass_Parms, TargetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventGetTagsForClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_TargetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "GetTagsForClass", Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::DataDevSettings_eventGetTagsForClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::DataDevSettings_eventGetTagsForClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_GetTagsForClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_GetTagsForClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execGetTagsForClass)
{
	P_GET_OBJECT(UClass,Z_Param_TargetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetTagsForClass(Z_Param_TargetClass);
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function GetTagsForClass **********************************

// ********** Begin Class UDataDevSettings Function HasDataForTag **********************************
struct Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics
{
	struct DataDevSettings_eventHasDataForTag_Parms
	{
		FGameplayTag DataTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventHasDataForTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataDevSettings_eventHasDataForTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataDevSettings_eventHasDataForTag_Parms), &Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "HasDataForTag", Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::DataDevSettings_eventHasDataForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::DataDevSettings_eventHasDataForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_HasDataForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_HasDataForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execHasDataForTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDataForTag(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function HasDataForTag ************************************

// ********** Begin Class UDataDevSettings Function IsClassAllowed *********************************
struct Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics
{
	struct DataDevSettings_eventIsClassAllowed_Parms
	{
		UClass* TestClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class filter utilities\n" },
#endif
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class filter utilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TestClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventIsClassAllowed_Parms, TestClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataDevSettings_eventIsClassAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataDevSettings_eventIsClassAllowed_Parms), &Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_TestClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "IsClassAllowed", Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::DataDevSettings_eventIsClassAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::DataDevSettings_eventIsClassAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_IsClassAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_IsClassAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execIsClassAllowed)
{
	P_GET_OBJECT(UClass,Z_Param_TestClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClassAllowed(Z_Param_TestClass);
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function IsClassAllowed ***********************************

// ********** Begin Class UDataDevSettings Function LoadObjectForTag *******************************
struct Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics
{
	struct DataDevSettings_eventLoadObjectForTag_Parms
	{
		FGameplayTag DataTag;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventLoadObjectForTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataDevSettings_eventLoadObjectForTag_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "LoadObjectForTag", Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::DataDevSettings_eventLoadObjectForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::DataDevSettings_eventLoadObjectForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataDevSettings::execLoadObjectForTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->LoadObjectForTag(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataDevSettings Function LoadObjectForTag *********************************

// ********** Begin Class UDataDevSettings Function RefreshAssetValidation *************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "RefreshAssetValidation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDataDevSettings::execRefreshAssetValidation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshAssetValidation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UDataDevSettings Function RefreshAssetValidation ***************************

// ********** Begin Class UDataDevSettings Function ValidateAllAssets ******************************
#if WITH_EDITOR
struct Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editor validation functions\n" },
#endif
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor validation functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataDevSettings, nullptr, "ValidateAllAssets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UDataDevSettings::execValidateAllAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateAllAssets();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UDataDevSettings Function ValidateAllAssets ********************************

// ********** Begin Class UDataDevSettings *********************************************************
void UDataDevSettings::StaticRegisterNativesUDataDevSettings()
{
	UClass* Class = UDataDevSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "ClearInvalidAssets", &UDataDevSettings::execClearInvalidAssets },
#endif // WITH_EDITOR
		{ "GetAllConfiguredTags", &UDataDevSettings::execGetAllConfiguredTags },
		{ "GetAllowedClassNames", &UDataDevSettings::execGetAllowedClassNames },
		{ "GetAllSoftObjects", &UDataDevSettings::execGetAllSoftObjects },
		{ "GetClassFilters", &UDataDevSettings::execGetClassFilters },
		{ "GetData", &UDataDevSettings::execGetData },
		{ "GetDataCount", &UDataDevSettings::execGetDataCount },
		{ "GetSoftObjectForTag", &UDataDevSettings::execGetSoftObjectForTag },
		{ "GetTagsForClass", &UDataDevSettings::execGetTagsForClass },
		{ "HasDataForTag", &UDataDevSettings::execHasDataForTag },
		{ "IsClassAllowed", &UDataDevSettings::execIsClassAllowed },
		{ "LoadObjectForTag", &UDataDevSettings::execLoadObjectForTag },
#if WITH_EDITOR
		{ "RefreshAssetValidation", &UDataDevSettings::execRefreshAssetValidation },
		{ "ValidateAllAssets", &UDataDevSettings::execValidateAllAssets },
#endif // WITH_EDITOR
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataDevSettings;
UClass* UDataDevSettings::GetPrivateStaticClass()
{
	using TClass = UDataDevSettings;
	if (!Z_Registration_Info_UClass_UDataDevSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataDevSettings"),
			Z_Registration_Info_UClass_UDataDevSettings.InnerSingleton,
			StaticRegisterNativesUDataDevSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDataDevSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataDevSettings_NoRegister()
{
	return UDataDevSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataDevSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Data Configuration Settings" },
		{ "IncludePath", "DataDevSettings.h" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Data Configuration" },
		{ "GetAllowedClasses", "GetAllowedClassNames" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of GameplayTags to data assets filtered by ClassFilters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilters_MetaData[] = {
		{ "Category", "Data Configuration" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only assets of these classes (or their subclasses) will be allowed in the Data map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStrictValidation_MetaData[] = {
		{ "Category", "Validation Settings" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable automatic validation of assets against class filters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRemoveInvalidAssets_MetaData[] = {
		{ "Category", "Validation Settings" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically remove invalid assets during validation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseValidationLogging_MetaData[] = {
		{ "Category", "Validation Settings" },
		{ "ModuleRelativePath", "Public/DataDevSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show detailed validation logs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassFilters;
	static void NewProp_bEnableStrictValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStrictValidation;
	static void NewProp_bAutoRemoveInvalidAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRemoveInvalidAssets;
	static void NewProp_bVerboseValidationLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseValidationLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDataDevSettings_ClearInvalidAssets, "ClearInvalidAssets" }, // 1184381251
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UDataDevSettings_GetAllConfiguredTags, "GetAllConfiguredTags" }, // 3942255664
		{ &Z_Construct_UFunction_UDataDevSettings_GetAllowedClassNames, "GetAllowedClassNames" }, // 829115025
		{ &Z_Construct_UFunction_UDataDevSettings_GetAllSoftObjects, "GetAllSoftObjects" }, // 3195696765
		{ &Z_Construct_UFunction_UDataDevSettings_GetClassFilters, "GetClassFilters" }, // 2030071126
		{ &Z_Construct_UFunction_UDataDevSettings_GetData, "GetData" }, // 1719556386
		{ &Z_Construct_UFunction_UDataDevSettings_GetDataCount, "GetDataCount" }, // 3335268675
		{ &Z_Construct_UFunction_UDataDevSettings_GetSoftObjectForTag, "GetSoftObjectForTag" }, // 1128088010
		{ &Z_Construct_UFunction_UDataDevSettings_GetTagsForClass, "GetTagsForClass" }, // 1338522732
		{ &Z_Construct_UFunction_UDataDevSettings_HasDataForTag, "HasDataForTag" }, // 3251741247
		{ &Z_Construct_UFunction_UDataDevSettings_IsClassAllowed, "IsClassAllowed" }, // 2458549837
		{ &Z_Construct_UFunction_UDataDevSettings_LoadObjectForTag, "LoadObjectForTag" }, // 1313048658
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDataDevSettings_RefreshAssetValidation, "RefreshAssetValidation" }, // 2811511693
		{ &Z_Construct_UFunction_UDataDevSettings_ValidateAllAssets, "ValidateAllAssets" }, // 4069998902
#endif // WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataDevSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataDevSettings, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_ClassFilters_Inner = { "ClassFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_ClassFilters = { "ClassFilters", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataDevSettings, ClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassFilters_MetaData), NewProp_ClassFilters_MetaData) };
void Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bEnableStrictValidation_SetBit(void* Obj)
{
	((UDataDevSettings*)Obj)->bEnableStrictValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bEnableStrictValidation = { "bEnableStrictValidation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataDevSettings), &Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bEnableStrictValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStrictValidation_MetaData), NewProp_bEnableStrictValidation_MetaData) };
void Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bAutoRemoveInvalidAssets_SetBit(void* Obj)
{
	((UDataDevSettings*)Obj)->bAutoRemoveInvalidAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bAutoRemoveInvalidAssets = { "bAutoRemoveInvalidAssets", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataDevSettings), &Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bAutoRemoveInvalidAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRemoveInvalidAssets_MetaData), NewProp_bAutoRemoveInvalidAssets_MetaData) };
void Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bVerboseValidationLogging_SetBit(void* Obj)
{
	((UDataDevSettings*)Obj)->bVerboseValidationLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bVerboseValidationLogging = { "bVerboseValidationLogging", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataDevSettings), &Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bVerboseValidationLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseValidationLogging_MetaData), NewProp_bVerboseValidationLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataDevSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_ClassFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_ClassFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bEnableStrictValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bAutoRemoveInvalidAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataDevSettings_Statics::NewProp_bVerboseValidationLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataDevSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataDevSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataDevSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataDevSettings_Statics::ClassParams = {
	&UDataDevSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataDevSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataDevSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataDevSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataDevSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataDevSettings()
{
	if (!Z_Registration_Info_UClass_UDataDevSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataDevSettings.OuterSingleton, Z_Construct_UClass_UDataDevSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataDevSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataDevSettings);
UDataDevSettings::~UDataDevSettings() {}
// ********** End Class UDataDevSettings ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h__Script_DataConfigSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataDevSettings, UDataDevSettings::StaticClass, TEXT("UDataDevSettings"), &Z_Registration_Info_UClass_UDataDevSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataDevSettings), 1336568035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h__Script_DataConfigSystem_3462566570(TEXT("/Script/DataConfigSystem"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h__Script_DataConfigSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h__Script_DataConfigSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
