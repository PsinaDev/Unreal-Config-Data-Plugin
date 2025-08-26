// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataConfigSubsystem.h"

#ifdef DATACONFIGSYSTEM_DataConfigSubsystem_generated_h
#error "DataConfigSubsystem.generated.h already included, missing '#pragma once' in DataConfigSubsystem.h"
#endif
#define DATACONFIGSYSTEM_DataConfigSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FGameplayTag;
struct FLatentActionInfo;

// ********** Begin Delegate FOnDataLoadComplete ***************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_10_DELEGATE \
DATACONFIGSYSTEM_API void FOnDataLoadComplete_DelegateWrapper(const FScriptDelegate& OnDataLoadComplete, UObject* LoadedObject);


// ********** End Delegate FOnDataLoadComplete *****************************************************

// ********** Begin Delegate FOnDataLoadFailed *****************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_11_DELEGATE \
DATACONFIGSYSTEM_API void FOnDataLoadFailed_DelegateWrapper(const FScriptDelegate& OnDataLoadFailed);


// ********** End Delegate FOnDataLoadFailed *******************************************************

// ********** Begin Class UDataConfigSubsystem *****************************************************
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasDataForTag); \
	DECLARE_FUNCTION(execGetExpectedClassForTag); \
	DECLARE_FUNCTION(execLoadDataAsync); \
	DECLARE_FUNCTION(execGetDataAsync); \
	DECLARE_FUNCTION(execGetDataSync);


DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataConfigSubsystem_NoRegister();

#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataConfigSubsystem(); \
	friend struct Z_Construct_UClass_UDataConfigSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATACONFIGSYSTEM_API UClass* Z_Construct_UClass_UDataConfigSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataConfigSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataConfigSystem"), Z_Construct_UClass_UDataConfigSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDataConfigSubsystem)


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataConfigSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataConfigSubsystem(UDataConfigSubsystem&&) = delete; \
	UDataConfigSubsystem(const UDataConfigSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataConfigSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataConfigSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataConfigSubsystem) \
	NO_API virtual ~UDataConfigSubsystem();


#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_16_PROLOG
#define FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataConfigSubsystem;

// ********** End Class UDataConfigSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_UnrealProjects_protocolterminate_Plugins_DataConfigSystem_Source_DataConfigSystem_Public_DataConfigSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
