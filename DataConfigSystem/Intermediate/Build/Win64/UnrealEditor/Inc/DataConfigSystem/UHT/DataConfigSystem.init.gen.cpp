// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataConfigSystem_init() {}
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature();
	DATACONFIGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DataConfigSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DataConfigSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_DataConfigSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_DataAssetAsyncLoadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_DataTableAsyncLoadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncDataLoadFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_OnAsyncLoadFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DataConfigSystem_OnDataLoadFailed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DataConfigSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA1394AEB,
				0x2A915B29,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DataConfigSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DataConfigSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DataConfigSystem(Z_Construct_UPackage__Script_DataConfigSystem, TEXT("/Script/DataConfigSystem"), Z_Registration_Info_UPackage__Script_DataConfigSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA1394AEB, 0x2A915B29));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
