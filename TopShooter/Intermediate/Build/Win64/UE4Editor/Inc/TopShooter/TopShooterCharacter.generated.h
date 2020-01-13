// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPSHOOTER_TopShooterCharacter_generated_h
#error "TopShooterCharacter.generated.h already included, missing '#pragma once' in TopShooterCharacter.h"
#endif
#define TOPSHOOTER_TopShooterCharacter_generated_h

#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_RPC_WRAPPERS
#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATopShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopShooterCharacter(ATopShooterCharacter&&); \
	NO_API ATopShooterCharacter(const ATopShooterCharacter&); \
public:


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopShooterCharacter(ATopShooterCharacter&&); \
	NO_API ATopShooterCharacter(const ATopShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopShooterCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopShooterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopShooterCharacter, CursorToWorld); }


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_9_PROLOG
#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_INCLASS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class ATopShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_TopShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
