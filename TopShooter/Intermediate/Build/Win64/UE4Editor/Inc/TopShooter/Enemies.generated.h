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
struct FVector;
#ifdef TOPSHOOTER_Enemies_generated_h
#error "Enemies.generated.h already included, missing '#pragma once' in Enemies.h"
#endif
#define TOPSHOOTER_Enemies_generated_h

#define TopShooter_Source_TopShooter_Enemies_h_17_RPC_WRAPPERS \
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
	} \
 \
	DECLARE_FUNCTION(execLookAt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookAt(Z_Param_v); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_Enemies_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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
	} \
 \
	DECLARE_FUNCTION(execLookAt) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookAt(Z_Param_v); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_Enemies_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemies(); \
	friend struct Z_Construct_UClass_AEnemies_Statics; \
public: \
	DECLARE_CLASS(AEnemies, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemies)


#define TopShooter_Source_TopShooter_Enemies_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemies(); \
	friend struct Z_Construct_UClass_AEnemies_Statics; \
public: \
	DECLARE_CLASS(AEnemies, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemies)


#define TopShooter_Source_TopShooter_Enemies_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemies(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemies) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemies); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemies(AEnemies&&); \
	NO_API AEnemies(const AEnemies&); \
public:


#define TopShooter_Source_TopShooter_Enemies_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemies(AEnemies&&); \
	NO_API AEnemies(const AEnemies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemies); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemies)


#define TopShooter_Source_TopShooter_Enemies_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AEnemies, damage); } \
	FORCEINLINE static uint32 __PPO__arm1() { return STRUCT_OFFSET(AEnemies, arm1); } \
	FORCEINLINE static uint32 __PPO__arm2() { return STRUCT_OFFSET(AEnemies, arm2); } \
	FORCEINLINE static uint32 __PPO__healthSystem() { return STRUCT_OFFSET(AEnemies, healthSystem); } \
	FORCEINLINE static uint32 __PPO__attacking() { return STRUCT_OFFSET(AEnemies, attacking); } \
	FORCEINLINE static uint32 __PPO__AnimMontage() { return STRUCT_OFFSET(AEnemies, AnimMontage); }


#define TopShooter_Source_TopShooter_Enemies_h_14_PROLOG
#define TopShooter_Source_TopShooter_Enemies_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Enemies_h_17_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Enemies_h_17_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_Enemies_h_17_INCLASS \
	TopShooter_Source_TopShooter_Enemies_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_Enemies_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_Enemies_h_17_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_Enemies_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Enemies_h_17_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_Enemies_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class AEnemies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_Enemies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
