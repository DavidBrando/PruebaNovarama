// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPSHOOTER_Bullets_generated_h
#error "Bullets.generated.h already included, missing '#pragma once' in Bullets.h"
#endif
#define TOPSHOOTER_Bullets_generated_h

#define TopShooter_Source_TopShooter_Bullets_h_17_RPC_WRAPPERS
#define TopShooter_Source_TopShooter_Bullets_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define TopShooter_Source_TopShooter_Bullets_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullets(); \
	friend struct Z_Construct_UClass_ABullets_Statics; \
public: \
	DECLARE_CLASS(ABullets, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullets)


#define TopShooter_Source_TopShooter_Bullets_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABullets(); \
	friend struct Z_Construct_UClass_ABullets_Statics; \
public: \
	DECLARE_CLASS(ABullets, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ABullets)


#define TopShooter_Source_TopShooter_Bullets_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullets(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullets(ABullets&&); \
	NO_API ABullets(const ABullets&); \
public:


#define TopShooter_Source_TopShooter_Bullets_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullets(ABullets&&); \
	NO_API ABullets(const ABullets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullets); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullets)


#define TopShooter_Source_TopShooter_Bullets_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__capsule() { return STRUCT_OFFSET(ABullets, capsule); } \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(ABullets, root); } \
	FORCEINLINE static uint32 __PPO__bullet() { return STRUCT_OFFSET(ABullets, bullet); } \
	FORCEINLINE static uint32 __PPO__projectileMovement() { return STRUCT_OFFSET(ABullets, projectileMovement); }


#define TopShooter_Source_TopShooter_Bullets_h_14_PROLOG
#define TopShooter_Source_TopShooter_Bullets_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Bullets_h_17_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Bullets_h_17_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_Bullets_h_17_INCLASS \
	TopShooter_Source_TopShooter_Bullets_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_Bullets_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Bullets_h_17_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Bullets_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Bullets_h_17_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Bullets_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class ABullets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_Bullets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
