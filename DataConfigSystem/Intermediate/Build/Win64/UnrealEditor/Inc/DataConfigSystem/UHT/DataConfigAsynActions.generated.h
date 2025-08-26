// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataConfigAsynActions.h"

#ifdef DATACONFIGSYSTEM_DataConfigAsynActions_generated_h
#error "DataConfigAsynActions.generated.h already included, missing '#pragma once' in DataConfigAsynActions.h"
#endif
#define DATACONFIGSYSTEM_DataConfigAsynActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncLoadDataAsset;
class UAsyncLoadTable;
class UDataTable;
class UObject;
class UPrimaryDataAsset;
struct FGameplayTag;

// ********** Begin Delegate FDataAssetAsyncLoadCompleted ******************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_11_DELEGATE \
DATACONFIGSYSTEM_API void FDataAssetAsyncLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& DataAssetAsyncLoadCompleted, UPrimaryDataAsset* DataAsset);


// ********** End Delegate FDataAssetAsyncLoadCompleted ********************************************

// ********** Begin Delegate FDataTableAsyncLoadCompleted ******************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_12_DELEGATE \
DATACONFIGSYSTEM_API void FDataTableAsyncLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& DataTableAsyncLoadCompleted, UDataTable* DataTable);


// ********** End Delegate FDataTableAsyncLoadCompleted ********************************************

// ********** Begin Delegate FOnAsyncLoadFailure ***************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_14_DELEGATE \
DATACONFIGSYSTEM_API void FOnAsyncLoadFailure_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncLoadFailure);


// ********** End Delegate FOnAsyncLoadFailure *****************************************************

// ********** Begin Class UAsyncLoadDataAsset ******************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadDataAssetByTag);


DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister();

#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadDataAsset(); \
	friend struct Z_Construct_UClass_UAsyncLoadDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadDataAsset, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataConfigSystem"), Z_Construct_UClass_UAsyncLoadDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadDataAsset)


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadDataAsset(UAsyncLoadDataAsset&&) = delete; \
	UAsyncLoadDataAsset(const UAsyncLoadDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadDataAsset) \
	NO_API virtual ~UAsyncLoadDataAsset();


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_19_PROLOG
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadDataAsset;

// ********** End Class UAsyncLoadDataAsset ********************************************************

// ********** Begin Class UAsyncLoadTable **********************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncLoadDataTableByTag);


DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadTable_NoRegister();

#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLoadTable(); \
	friend struct Z_Construct_UClass_UAsyncLoadTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UAsyncLoadTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLoadTable, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataConfigSystem"), Z_Construct_UClass_UAsyncLoadTable_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLoadTable)


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncLoadTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLoadTable(UAsyncLoadTable&&) = delete; \
	UAsyncLoadTable(const UAsyncLoadTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLoadTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLoadTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncLoadTable) \
	NO_API virtual ~UAsyncLoadTable();


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_50_PROLOG
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLoadTable;

// ********** End Class UAsyncLoadTable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigAsynActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
