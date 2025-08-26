// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataDevSettings.h"

#ifdef DATACONFIGSYSTEM_DataDevSettings_generated_h
#error "DataDevSettings.generated.h already included, missing '#pragma once' in DataDevSettings.h"
#endif
#define DATACONFIGSYSTEM_DataDevSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FGameplayTag;
struct FGameplayTag; class UObject;

// ********** Begin Class UDataDevSettings *********************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDataCount); \
	DECLARE_FUNCTION(execGetTagsForClass); \
	DECLARE_FUNCTION(execGetClassFilters); \
	DECLARE_FUNCTION(execIsClassAllowed); \
	DECLARE_FUNCTION(execGetAllSoftObjects); \
	DECLARE_FUNCTION(execGetAllConfiguredTags); \
	DECLARE_FUNCTION(execLoadObjectForTag); \
	DECLARE_FUNCTION(execGetSoftObjectForTag); \
	DECLARE_FUNCTION(execHasDataForTag); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetAllowedClassNames);


#if WITH_EDITOR
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRefreshAssetValidation); \
	DECLARE_FUNCTION(execClearInvalidAssets); \
	DECLARE_FUNCTION(execValidateAllAssets);
#else // WITH_EDITOR
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataDevSettings_NoRegister();

#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataDevSettings(); \
	friend struct Z_Construct_UClass_UDataDevSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataDevSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataDevSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataConfigSystem"), Z_Construct_UClass_UDataDevSettings_NoRegister) \
	DECLARE_SERIALIZER(UDataDevSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataDevSettings(UDataDevSettings&&) = delete; \
	UDataDevSettings(const UDataDevSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataDevSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataDevSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataDevSettings) \
	NO_API virtual ~UDataDevSettings();


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_10_PROLOG
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataDevSettings;

// ********** End Class UDataDevSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataDevSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
