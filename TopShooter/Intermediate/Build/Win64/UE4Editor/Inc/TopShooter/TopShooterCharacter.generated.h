// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TOPSHOOTER_TopShooterCharacter_generated_h
#error "TopShooterCharacter.generated.h already included, missing '#pragma once' in TopShooterCharacter.h"
#endif
#define TOPSHOOTER_TopShooterCharacter_generated_h

#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATopShooterCharacter(); \
	friend struct Z_Construct_UClass_ATopShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
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


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopShooterCharacter(ATopShooterCharacter&&); \
	NO_API ATopShooterCharacter(const ATopShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopShooterCharacter)


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopShooterCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopShooterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopShooterCharacter, CursorToWorld); }


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_11_PROLOG
#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_INCLASS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_TopShooterCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_TopShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class ATopShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_TopShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
