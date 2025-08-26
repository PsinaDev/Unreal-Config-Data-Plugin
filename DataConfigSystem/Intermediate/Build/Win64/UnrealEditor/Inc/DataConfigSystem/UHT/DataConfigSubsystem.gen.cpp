// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataConfigSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/LatentActionManager.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataConfigSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataConfigSubsystem();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataConfigSubsystem_NoRegister();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DataConfigSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDataLoadComplete ***************************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics
{
	struct _Script_DataConfigSystem_eventOnDataLoadComplete_Parms
	{
		UObject* LoadedObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DataConfigSystem_eventOnDataLoadComplete_Parms, LoadedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::NewProp_LoadedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "OnDataLoadComplete__DelegateSignature", Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::_Script_DataConfigSystem_eventOnDataLoadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::_Script_DataConfigSystem_eventOnDataLoadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDataLoadComplete_DelegateWrapper(const FScriptDelegate& OnDataLoadComplete, UObject* LoadedObject)
{
	struct _Script_DataConfigSystem_eventOnDataLoadComplete_Parms
	{
		UObject* LoadedObject;
	};
	_Script_DataConfigSystem_eventOnDataLoadComplete_Parms Parms;
	Parms.LoadedObject=LoadedObject;
	OnDataLoadComplete.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDataLoadComplete *****************************************************

// ********** Begin Delegate FOnDataLoadFailed *****************************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "OnDataLoadFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDataLoadFailed_DelegateWrapper(const FScriptDelegate& OnDataLoadFailed)
{
	OnDataLoadFailed.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDataLoadFailed *******************************************************

// ********** Begin Class UDataConfigSubsystem Function GetDataAsync *******************************
struct Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics
{
	struct DataConfigSubsystem_eventGetDataAsync_Parms
	{
		FLatentActionInfo LatentInfo;
		FGameplayTag DataTag;
		UObject* LoadedObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Config" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetDataAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetDataAsync_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetDataAsync_Parms, LoadedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::NewProp_LoadedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataConfigSubsystem, nullptr, "GetDataAsync", Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::DataConfigSubsystem_eventGetDataAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::DataConfigSubsystem_eventGetDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataConfigSubsystem::execGetDataAsync)
{
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_LoadedObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDataAsync(Z_Param_LatentInfo,Z_Param_DataTag,P_ARG_GC_BARRIER(Z_Param_Out_LoadedObject));
	P_NATIVE_END;
}
// ********** End Class UDataConfigSubsystem Function GetDataAsync *********************************

// ********** Begin Class UDataConfigSubsystem Function GetDataSync ********************************
struct Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics
{
	struct DataConfigSubsystem_eventGetDataSync_Parms
	{
		FGameplayTag DataTag;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Config" },
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetDataSync_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetDataSync_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataConfigSubsystem, nullptr, "GetDataSync", Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::DataConfigSubsystem_eventGetDataSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::DataConfigSubsystem_eventGetDataSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataConfigSubsystem::execGetDataSync)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetDataSync(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataConfigSubsystem Function GetDataSync **********************************

// ********** Begin Class UDataConfigSubsystem Function GetExpectedClassForTag *********************
struct Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics
{
	struct DataConfigSubsystem_eventGetExpectedClassForTag_Parms
	{
		FGameplayTag DataTag;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the expected class for a given tag (for autocasting)\n" },
#endif
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the expected class for a given tag (for autocasting)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetExpectedClassForTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventGetExpectedClassForTag_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataConfigSubsystem, nullptr, "GetExpectedClassForTag", Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::DataConfigSubsystem_eventGetExpectedClassForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::DataConfigSubsystem_eventGetExpectedClassForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataConfigSubsystem::execGetExpectedClassForTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetExpectedClassForTag(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataConfigSubsystem Function GetExpectedClassForTag ***********************

// ********** Begin Class UDataConfigSubsystem Function HasDataForTag ******************************
struct Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics
{
	struct DataConfigSubsystem_eventHasDataForTag_Parms
	{
		FGameplayTag DataTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if tag exists in data\n" },
#endif
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if tag exists in data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventHasDataForTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataConfigSubsystem_eventHasDataForTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataConfigSubsystem_eventHasDataForTag_Parms), &Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataConfigSubsystem, nullptr, "HasDataForTag", Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::DataConfigSubsystem_eventHasDataForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::DataConfigSubsystem_eventHasDataForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataConfigSubsystem::execHasDataForTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDataForTag(Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UDataConfigSubsystem Function HasDataForTag ********************************

// ********** Begin Class UDataConfigSubsystem Function LoadDataAsync ******************************
struct Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics
{
	struct DataConfigSubsystem_eventLoadDataAsync_Parms
	{
		FGameplayTag DataTag;
		FScriptDelegate OnComplete;
		FScriptDelegate OnFailed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New async method with delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New async method with delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventLoadDataAsync_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventLoadDataAsync_Parms, OnComplete), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1064153972
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataConfigSubsystem_eventLoadDataAsync_Parms, OnFailed), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3827632349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::NewProp_OnFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDataConfigSubsystem, nullptr, "LoadDataAsync", Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::DataConfigSubsystem_eventLoadDataAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::DataConfigSubsystem_eventLoadDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataConfigSubsystem::execLoadDataAsync)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnComplete);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadDataAsync(Z_Param_DataTag,FOnDataLoadComplete(Z_Param_OnComplete),FOnDataLoadFailed(Z_Param_OnFailed));
	P_NATIVE_END;
}
// ********** End Class UDataConfigSubsystem Function LoadDataAsync ********************************

// ********** Begin Class UDataConfigSubsystem *****************************************************
void UDataConfigSubsystem::StaticRegisterNativesUDataConfigSubsystem()
{
	UClass* Class = UDataConfigSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataAsync", &UDataConfigSubsystem::execGetDataAsync },
		{ "GetDataSync", &UDataConfigSubsystem::execGetDataSync },
		{ "GetExpectedClassForTag", &UDataConfigSubsystem::execGetExpectedClassForTag },
		{ "HasDataForTag", &UDataConfigSubsystem::execHasDataForTag },
		{ "LoadDataAsync", &UDataConfigSubsystem::execLoadDataAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDataConfigSubsystem;
UClass* UDataConfigSubsystem::GetPrivateStaticClass()
{
	using TClass = UDataConfigSubsystem;
	if (!Z_Registration_Info_UClass_UDataConfigSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DataConfigSubsystem"),
			Z_Registration_Info_UClass_UDataConfigSubsystem.InnerSingleton,
			StaticRegisterNativesUDataConfigSubsystem,
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
	return Z_Registration_Info_UClass_UDataConfigSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UDataConfigSubsystem_NoRegister()
{
	return UDataConfigSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDataConfigSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem for managing and loading game data by GameplayTags\n */" },
#endif
		{ "IncludePath", "DataConfigSubsystem.h" },
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem for managing and loading game data by GameplayTags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedObjectsCache_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache for loaded objects\n" },
#endif
		{ "ModuleRelativePath", "Public/DataConfigSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache for loaded objects" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LoadedObjectsCache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedObjectsCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedObjectsCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataConfigSubsystem_GetDataAsync, "GetDataAsync" }, // 1475752774
		{ &Z_Construct_UFunction_UDataConfigSubsystem_GetDataSync, "GetDataSync" }, // 1569912242
		{ &Z_Construct_UFunction_UDataConfigSubsystem_GetExpectedClassForTag, "GetExpectedClassForTag" }, // 966683532
		{ &Z_Construct_UFunction_UDataConfigSubsystem_HasDataForTag, "HasDataForTag" }, // 4247021971
		{ &Z_Construct_UFunction_UDataConfigSubsystem_LoadDataAsync, "LoadDataAsync" }, // 2576453242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataConfigSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataConfigSubsystem, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 133831994
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache_ValueProp = { "LoadedObjectsCache", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache_Key_KeyProp = { "LoadedObjectsCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache = { "LoadedObjectsCache", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataConfigSubsystem, LoadedObjectsCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedObjectsCache_MetaData), NewProp_LoadedObjectsCache_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataConfigSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataConfigSubsystem_Statics::NewProp_LoadedObjectsCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataConfigSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataConfigSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataConfigSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataConfigSubsystem_Statics::ClassParams = {
	&UDataConfigSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataConfigSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataConfigSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataConfigSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataConfigSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataConfigSubsystem()
{
	if (!Z_Registration_Info_UClass_UDataConfigSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataConfigSubsystem.OuterSingleton, Z_Construct_UClass_UDataConfigSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataConfigSubsystem.OuterSingleton;
}
UDataConfigSubsystem::UDataConfigSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataConfigSubsystem);
UDataConfigSubsystem::~UDataConfigSubsystem() {}
// ********** End Class UDataConfigSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h__Script_DataConfigSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataConfigSubsystem, UDataConfigSubsystem::StaticClass, TEXT("UDataConfigSubsystem"), &Z_Registration_Info_UClass_UDataConfigSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataConfigSubsystem), 1129506449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h__Script_DataConfigSystem_1195464080(TEXT("/Script/DataConfigSystem"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h__Script_DataConfigSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h__Script_DataConfigSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
