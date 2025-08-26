// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataConfigAsynActions.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDataConfigAsynActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadDataAsset();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadTable();
DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadTable_NoRegister();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature();
DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DataConfigSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDataAssetAsyncLoadCompleted ******************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics
{
	struct _Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms
	{
		UPrimaryDataAsset* DataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms, DataAsset), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "DataAssetAsyncLoadCompleted__DelegateSignature", Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDataAssetAsyncLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& DataAssetAsyncLoadCompleted, UPrimaryDataAsset* DataAsset)
{
	struct _Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms
	{
		UPrimaryDataAsset* DataAsset;
	};
	_Script_DataConfigSystem_eventDataAssetAsyncLoadCompleted_Parms Parms;
	Parms.DataAsset=DataAsset;
	DataAssetAsyncLoadCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDataAssetAsyncLoadCompleted ********************************************

// ********** Begin Delegate FDataTableAsyncLoadCompleted ******************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics
{
	struct _Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms
	{
		UDataTable* DataTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::NewProp_DataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "DataTableAsyncLoadCompleted__DelegateSignature", Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::_Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDataTableAsyncLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& DataTableAsyncLoadCompleted, UDataTable* DataTable)
{
	struct _Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms
	{
		UDataTable* DataTable;
	};
	_Script_DataConfigSystem_eventDataTableAsyncLoadCompleted_Parms Parms;
	Parms.DataTable=DataTable;
	DataTableAsyncLoadCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDataTableAsyncLoadCompleted ********************************************

// ********** Begin Delegate FOnAsyncLoadFailure ***************************************************
struct Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DataConfigSystem, nullptr, "OnAsyncLoadFailure__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAsyncLoadFailure_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncLoadFailure)
{
	OnAsyncLoadFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAsyncLoadFailure *****************************************************

// ********** Begin Class UAsyncLoadDataAsset Function AsyncLoadDataAssetByTag *********************
struct Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics
{
	struct AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms
	{
		UObject* WorldContext;
		FGameplayTag ItemTag;
		UAsyncLoadDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CallInEditor", "true" },
		{ "Category", "Async Loading" },
		{ "DefaultToSelf", "WorldContext" },
		{ "HidePin", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_ItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadDataAsset, nullptr, "AsyncLoadDataAssetByTag", Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::AsyncLoadDataAsset_eventAsyncLoadDataAssetByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadDataAsset::execAsyncLoadDataAssetByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FGameplayTag,Z_Param_ItemTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadDataAsset**)Z_Param__Result=UAsyncLoadDataAsset::AsyncLoadDataAssetByTag(Z_Param_WorldContext,Z_Param_ItemTag);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadDataAsset Function AsyncLoadDataAssetByTag ***********************

// ********** Begin Class UAsyncLoadDataAsset ******************************************************
void UAsyncLoadDataAsset::StaticRegisterNativesUAsyncLoadDataAsset()
{
	UClass* Class = UAsyncLoadDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadDataAssetByTag", &UAsyncLoadDataAsset::execAsyncLoadDataAssetByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadDataAsset;
UClass* UAsyncLoadDataAsset::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadDataAsset;
	if (!Z_Registration_Info_UClass_UAsyncLoadDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadDataAsset"),
			Z_Registration_Info_UClass_UAsyncLoadDataAsset.InnerSingleton,
			StaticRegisterNativesUAsyncLoadDataAsset,
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
	return Z_Registration_Info_UClass_UAsyncLoadDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister()
{
	return UAsyncLoadDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataConfigAsynActions.h" },
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetItemTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetItemTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadDataAsset_AsyncLoadDataAssetByTag, "AsyncLoadDataAssetByTag" }, // 1094849921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadDataAsset, OnCompleted), Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 3662204
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadDataAsset, OnFailure), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2379238298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_TargetItemTag = { "TargetItemTag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadDataAsset, TargetItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetItemTag_MetaData), NewProp_TargetItemTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadDataAsset, World), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_TargetItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadDataAsset_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadDataAsset_Statics::ClassParams = {
	&UAsyncLoadDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadDataAsset()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadDataAsset.OuterSingleton, Z_Construct_UClass_UAsyncLoadDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadDataAsset.OuterSingleton;
}
UAsyncLoadDataAsset::UAsyncLoadDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadDataAsset);
UAsyncLoadDataAsset::~UAsyncLoadDataAsset() {}
// ********** End Class UAsyncLoadDataAsset ********************************************************

// ********** Begin Class UAsyncLoadTable Function AsyncLoadDataTableByTag *************************
struct Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics
{
	struct AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms
	{
		UObject* WorldContext;
		FGameplayTag ItemTag;
		UAsyncLoadTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CallInEditor", "true" },
		{ "Category", "Async Loading" },
		{ "DefaultToSelf", "WorldContext" },
		{ "HidePin", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_ItemTag = { "ItemTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms, ItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_ItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLoadTable, nullptr, "AsyncLoadDataTableByTag", Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::AsyncLoadTable_eventAsyncLoadDataTableByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLoadTable::execAsyncLoadDataTableByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FGameplayTag,Z_Param_ItemTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLoadTable**)Z_Param__Result=UAsyncLoadTable::AsyncLoadDataTableByTag(Z_Param_WorldContext,Z_Param_ItemTag);
	P_NATIVE_END;
}
// ********** End Class UAsyncLoadTable Function AsyncLoadDataTableByTag ***************************

// ********** Begin Class UAsyncLoadTable **********************************************************
void UAsyncLoadTable::StaticRegisterNativesUAsyncLoadTable()
{
	UClass* Class = UAsyncLoadTable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadDataTableByTag", &UAsyncLoadTable::execAsyncLoadDataTableByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLoadTable;
UClass* UAsyncLoadTable::GetPrivateStaticClass()
{
	using TClass = UAsyncLoadTable;
	if (!Z_Registration_Info_UClass_UAsyncLoadTable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLoadTable"),
			Z_Registration_Info_UClass_UAsyncLoadTable.InnerSingleton,
			StaticRegisterNativesUAsyncLoadTable,
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
	return Z_Registration_Info_UClass_UAsyncLoadTable.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLoadTable_NoRegister()
{
	return UAsyncLoadTable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLoadTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataConfigAsynActions.h" },
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetItemTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataConfigAsynActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetItemTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadTable_AsyncLoadDataTableByTag, "AsyncLoadDataTableByTag" }, // 351407723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadTable, OnCompleted), Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2976409897
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadTable, OnFailure), Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2379238298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_TargetItemTag = { "TargetItemTag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadTable, TargetItemTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetItemTag_MetaData), NewProp_TargetItemTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadTable, World), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_TargetItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadTable_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLoadTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadTable_Statics::ClassParams = {
	&UAsyncLoadTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLoadTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadTable_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLoadTable()
{
	if (!Z_Registration_Info_UClass_UAsyncLoadTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadTable.OuterSingleton, Z_Construct_UClass_UAsyncLoadTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLoadTable.OuterSingleton;
}
UAsyncLoadTable::UAsyncLoadTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadTable);
UAsyncLoadTable::~UAsyncLoadTable() {}
// ********** End Class UAsyncLoadTable ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h__Script_DataConfigSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadDataAsset, UAsyncLoadDataAsset::StaticClass, TEXT("UAsyncLoadDataAsset"), &Z_Registration_Info_UClass_UAsyncLoadDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadDataAsset), 3381836322U) },
		{ Z_Construct_UClass_UAsyncLoadTable, UAsyncLoadTable::StaticClass, TEXT("UAsyncLoadTable"), &Z_Registration_Info_UClass_UAsyncLoadTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadTable), 3157946037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h__Script_DataConfigSystem_2543294732(TEXT("/Script/DataConfigSystem"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h__Script_DataConfigSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h__Script_DataConfigSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
