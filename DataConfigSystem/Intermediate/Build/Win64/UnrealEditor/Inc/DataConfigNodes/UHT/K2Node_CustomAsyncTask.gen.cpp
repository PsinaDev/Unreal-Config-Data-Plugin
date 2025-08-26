// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CustomAsyncTask.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeK2Node_CustomAsyncTask() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATACONFIGNODES_API UClass* Z_Construct_UClass_UK2Node_CustomAsyncTask();
DATACONFIGNODES_API UClass* Z_Construct_UClass_UK2Node_CustomAsyncTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataConfigNodes();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_CustomAsyncTask **************************************************
void UK2Node_CustomAsyncTask::StaticRegisterNativesUK2Node_CustomAsyncTask()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_CustomAsyncTask;
UClass* UK2Node_CustomAsyncTask::GetPrivateStaticClass()
{
	using TClass = UK2Node_CustomAsyncTask;
	if (!Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_CustomAsyncTask"),
			Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.InnerSingleton,
			StaticRegisterNativesUK2Node_CustomAsyncTask,
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
	return Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_CustomAsyncTask_NoRegister()
{
	return UK2Node_CustomAsyncTask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CustomAsyncTask.h" },
		{ "ModuleRelativePath", "Public/K2Node_CustomAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_CustomAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_CustomAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_CustomAsyncTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyActivateFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_CustomAsyncTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyFactoryFunctionName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProxyFactoryClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProxyClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyActivateFunctionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CustomAsyncTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyFactoryFunctionName = { "ProxyFactoryFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_CustomAsyncTask, ProxyFactoryFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyFactoryFunctionName_MetaData), NewProp_ProxyFactoryFunctionName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyFactoryClass = { "ProxyFactoryClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_CustomAsyncTask, ProxyFactoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyFactoryClass_MetaData), NewProp_ProxyFactoryClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyClass = { "ProxyClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_CustomAsyncTask, ProxyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyClass_MetaData), NewProp_ProxyClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyActivateFunctionName = { "ProxyActivateFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_CustomAsyncTask, ProxyActivateFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyActivateFunctionName_MetaData), NewProp_ProxyActivateFunctionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyFactoryFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyFactoryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::NewProp_ProxyActivateFunctionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::ClassParams = {
	&UK2Node_CustomAsyncTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_CustomAsyncTask()
{
	if (!Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.OuterSingleton, Z_Construct_UClass_UK2Node_CustomAsyncTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_CustomAsyncTask.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CustomAsyncTask);
UK2Node_CustomAsyncTask::~UK2Node_CustomAsyncTask() {}
// ********** End Class UK2Node_CustomAsyncTask ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_CustomAsyncTask_h__Script_DataConfigNodes_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CustomAsyncTask, UK2Node_CustomAsyncTask::StaticClass, TEXT("UK2Node_CustomAsyncTask"), &Z_Registration_Info_UClass_UK2Node_CustomAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CustomAsyncTask), 4218186762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_CustomAsyncTask_h__Script_DataConfigNodes_3536175902(TEXT("/Script/DataConfigNodes"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_CustomAsyncTask_h__Script_DataConfigNodes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_CustomAsyncTask_h__Script_DataConfigNodes_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
