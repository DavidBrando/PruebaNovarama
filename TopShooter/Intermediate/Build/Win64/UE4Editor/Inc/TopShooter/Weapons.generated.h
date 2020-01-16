// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPSHOOTER_Weapons_generated_h
#error "Weapons.generated.h already included, missing '#pragma once' in Weapons.h"
#endif
#define TOPSHOOTER_Weapons_generated_h

#define TopShooter_Source_TopShooter_Weapons_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFireRateUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFireRateUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPowerShoot(); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_Weapons_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFireRateUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFireRateUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerShoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPowerShoot(); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_Weapons_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapons(); \
	friend struct Z_Construct_UClass_AWeapons_Statics; \
public: \
	DECLARE_CLASS(AWeapons, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapons)


#define TopShooter_Source_TopShooter_Weapons_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWeapons(); \
	friend struct Z_Construct_UClass_AWeapons_Statics; \
public: \
	DECLARE_CLASS(AWeapons, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapons)


#define TopShooter_Source_TopShooter_Weapons_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapons(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapons) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapons); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapons); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapons(AWeapons&&); \
	NO_API AWeapons(const AWeapons&); \
public:


#define TopShooter_Source_TopShooter_Weapons_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapons(AWeapons&&); \
	NO_API AWeapons(const AWeapons&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapons); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapons); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapons)


#define TopShooter_Source_TopShooter_Weapons_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AWeapons, mesh); } \
	FORCEINLINE static uint32 __PPO__spawnPoint() { return STRUCT_OFFSET(AWeapons, spawnPoint); }


#define TopShooter_Source_TopShooter_Weapons_h_13_PROLOG
#define TopShooter_Source_TopShooter_Weapons_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Weapons_h_16_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Weapons_h_16_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_Weapons_h_16_INCLASS \
	TopShooter_Source_TopShooter_Weapons_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_Weapons_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Weapons_h_16_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Weapons_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Weapons_h_16_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Weapons_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class AWeapons>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_Weapons_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
