// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLoadData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncLoadData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadData();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadData_NoRegister();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DataConfigSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAsyncDataLoadCompleted *********************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics
{
	struct _Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms
	{
		UObject* LoadedObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms, LoadedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::NewProp_LoadedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "OnAsyncDataLoadCompleted__DelegateSignature", Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncDataLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncDataLoadCompleted, UObject* LoadedObject)
{
	struct _Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms
	{
		UObject* LoadedObject;
	};
	_Script_DataConfigSystem_eventOnAsyncDataLoadCompleted_Parms Parms;
	Parms.LoadedObject=LoadedObject;
	OnAsyncDataLoadCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAsyncDataLoadCompleted ***********************************************

// ********** Begin Delegate FOnAsyncDataLoadFailed ************************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "OnAsyncDataLoadFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncDataLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncDataLoadFailed)
{
	OnAsyncDataLoadFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAsyncDataLoadFailed **************************************************

// ********** Begin Class UAsyncLoadData Function AsyncLoadDataByTag *******************************
struct Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics
{
	struct AsyncLoadData_eventAsyncLoadDataByTag_Parms
	{
		UObject* WorldContext;
		FGameplayTag DataTag;
		UAsyncLoadData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Data Config" },
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "Async Load Data" },
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadData_eventAsyncLoadDataByTag_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadData_eventAsyncLoadDataByTag_Parms, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadData_eventAsyncLoadDataByTag_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_DataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadData, nullptr, "AsyncLoadDataByTag", Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::AsyncLoadData_eventAsyncLoadDataByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::AsyncLoadData_eventAsyncLoadDataByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadData::execAsyncLoadDataByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FGameplayTag,Z_Param_DataTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadData**)Z_Param__Result=UAsyncLoadData::AsyncLoadDataByTag(Z_Param_WorldContext,Z_Param_DataTag);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadData Function AsyncLoadDataByTag *********************************

// ********** Begin Class UAsyncLoadData Function OnLoadCompleted **********************************
struct Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics
{
	struct AsyncLoadData_eventOnLoadCompleted_Parms
	{
		UObject* LoadedObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadData_eventOnLoadCompleted_Parms, LoadedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::NewProp_LoadedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadData, nullptr, "OnLoadCompleted", Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::AsyncLoadData_eventOnLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::AsyncLoadData_eventOnLoadCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadData::execOnLoadCompleted)
{
	P_GET_OBJECT(UObject,Z_Param_LoadedObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadCompleted(Z_Param_LoadedObject);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadData Function OnLoadCompleted ************************************

// ********** Begin Class UAsyncLoadData Function OnLoadFailed *************************************
struct Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadData, nullptr, "OnLoadFailed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadData::execOnLoadFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadFailed();
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadData Function OnLoadFailed ***************************************

// ********** Begin Class UAsyncLoadData ***********************************************************
void UAsyncLoadData::StaticRegisterNativesUAsyncLoadData()
{
	UClass* Class = UAsyncLoadData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadDataByTag", &UAsyncLoadData::execAsyncLoadDataByTag },
		{ "OnLoadCompleted", &UAsyncLoadData::execOnLoadCompleted },
		{ "OnLoadFailed", &UAsyncLoadData::execOnLoadFailed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadData;
UClass* UAsyncLoadData::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadData;
	if (!Z_Registration_Info_UClass_UAsyncLoadData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadData"),
			Z_Registration_Info_UClass_UAsyncLoadData.InnerSingleton,
			StaticRegisterNativesUAsyncLoadData,
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
	return Z_Registration_Info_UClass_UAsyncLoadData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadData_NoRegister()
{
	return UAsyncLoadData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncLoadData.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalOnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalOnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InternalOnComplete;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InternalOnFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadData_AsyncLoadDataByTag, "AsyncLoadDataByTag" }, // 2069305995
		{ &Z_Construct_UFunction_UAsyncLoadData_OnLoadCompleted, "OnLoadCompleted" }, // 1412828371
		{ &Z_Construct_UFunction_UAsyncLoadData_OnLoadFailed, "OnLoadFailed" }, // 2925036090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, OnCompleted), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 156292290
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, OnFailed), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 3828686434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_TargetTag = { "TargetTag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, TargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTag_MetaData), NewProp_TargetTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_InternalOnComplete = { "InternalOnComplete", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, InternalOnComplete), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalOnComplete_MetaData), NewProp_InternalOnComplete_MetaData) }; // 1064153972
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_InternalOnFailed = { "InternalOnFailed", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadData, InternalOnFailed), Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalOnFailed_MetaData), NewProp_InternalOnFailed_MetaData) }; // 3827632349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_TargetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_InternalOnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadData_Statics::NewProp_InternalOnFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadData_Statics::ClassParams = {
	&UAsyncLoadData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadData()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadData.OuterSingleton, Z_Construct_UClass_UAsyncLoadData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadData);
UAsyncLoadData::~UAsyncLoadData() {}
// ********** End Class UAsyncLoadData *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h__Script_DataConfigSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadData, UAsyncLoadData::StaticClass, TEXT("UAsyncLoadData"), &Z_Registration_Info_UClass_UAsyncLoadData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadData), 1627355624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h__Script_DataConfigSystem_2572364987(TEXT("/Script/DataConfigSystem"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h__Script_DataConfigSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h__Script_DataConfigSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
