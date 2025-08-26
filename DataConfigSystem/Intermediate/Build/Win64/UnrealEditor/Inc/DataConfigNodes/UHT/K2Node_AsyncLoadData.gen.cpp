// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AsyncLoadData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeK2Node_AsyncLoadData() {}

// ********** Begin Cross Module References ********************************************************
DATACONFIGNODES_API UClass* Z_Construct_UClass_UK2Node_AsyncLoadData();
DATACONFIGNODES_API UClass* Z_Construct_UClass_UK2Node_AsyncLoadData_NoRegister();
DATACONFIGNODES_API UClass* Z_Construct_UClass_UK2Node_CustomAsyncTask();
UPackage* Z_Construct_UPackage__Script_DataConfigNodes();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_AsyncLoadData ****************************************************
void UK2Node_AsyncLoadData::StaticRegisterNativesUK2Node_AsyncLoadData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_AsyncLoadData;
UClass* UK2Node_AsyncLoadData::GetPrivateStaticClass()
{
	using TClass = UK2Node_AsyncLoadData;
	if (!Z_Registration_Info_UClass_UK2Node_AsyncLoadData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_AsyncLoadData"),
			Z_Registration_Info_UClass_UK2Node_AsyncLoadData.InnerSingleton,
			StaticRegisterNativesUK2Node_AsyncLoadData,
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
	return Z_Registration_Info_UClass_UK2Node_AsyncLoadData.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_AsyncLoadData_NoRegister()
{
	return UK2Node_AsyncLoadData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_AsyncLoadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AsyncLoadData.h" },
		{ "ModuleRelativePath", "Public/K2Node_AsyncLoadData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AsyncLoadData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_CustomAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DataConfigNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::ClassParams = {
	&UK2Node_AsyncLoadData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_AsyncLoadData()
{
	if (!Z_Registration_Info_UClass_UK2Node_AsyncLoadData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AsyncLoadData.OuterSingleton, Z_Construct_UClass_UK2Node_AsyncLoadData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_AsyncLoadData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AsyncLoadData);
UK2Node_AsyncLoadData::~UK2Node_AsyncLoadData() {}
// ********** End Class UK2Node_AsyncLoadData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_AsyncLoadData_h__Script_DataConfigNodes_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AsyncLoadData, UK2Node_AsyncLoadData::StaticClass, TEXT("UK2Node_AsyncLoadData"), &Z_Registration_Info_UClass_UK2Node_AsyncLoadData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AsyncLoadData), 1887589722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_AsyncLoadData_h__Script_DataConfigNodes_4115940024(TEXT("/Script/DataConfigNodes"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_AsyncLoadData_h__Script_DataConfigNodes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigNodes_Public_K2Node_AsyncLoadData_h__Script_DataConfigNodes_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
