// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncLoadData.h"

#ifdef DATACONFIGSYSTEM_AsyncLoadData_generated_h
#error "AsyncLoadData.generated.h already included, missing '#pragma once' in AsyncLoadData.h"
#endif
#define DATACONFIGSYSTEM_AsyncLoadData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncLoadData;
class UObject;
struct FGameplayTag;

// ********** Begin Delegate FOnAsyncDataLoadCompleted *********************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_11_DELEGATE \
DATACONFIGSYSTEM_API void FOnAsyncDataLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncDataLoadCompleted, UObject* LoadedObject);


// ********** End Delegate FOnAsyncDataLoadCompleted ***********************************************

// ********** Begin Delegate FOnAsyncDataLoadFailed ************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_12_DELEGATE \
DATACONFIGSYSTEM_API void FOnAsyncDataLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncDataLoadFailed);


// ********** End Delegate FOnAsyncDataLoadFailed **************************************************

// ********** Begin Class UAsyncLoadData ***********************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLoadFailed); \
	DECLARE_FUNCTION(execOnLoadCompleted); \
	DECLARE_FUNCTION(execAsyncLoadDataByTag);


DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadData_NoRegister();

#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadData(); \
	friend struct Z_Construct_UClass_UAsyncLoadData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadData, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataConfigSystem"), Z_Construct_UClass_UAsyncLoadData_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadData)


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadData(UAsyncLoadData&&) = delete; \
	UAsyncLoadData(const UAsyncLoadData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncLoadData) \
	NO_API virtual ~UAsyncLoadData();


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_14_PROLOG
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadData;

// ********** End Class UAsyncLoadData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_AsyncLoadData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
