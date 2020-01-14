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
#ifdef TOPSHOOTER_PowerUp_generated_h
#error "PowerUp.generated.h already included, missing '#pragma once' in PowerUp.h"
#endif
#define TOPSHOOTER_PowerUp_generated_h

#define TopShooter_Source_TopShooter_PowerUp_h_25_RPC_WRAPPERS \
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


#define TopShooter_Source_TopShooter_PowerUp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define TopShooter_Source_TopShooter_PowerUp_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(APowerUp)


#define TopShooter_Source_TopShooter_PowerUp_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(APowerUp)


#define TopShooter_Source_TopShooter_PowerUp_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public:


#define TopShooter_Source_TopShooter_PowerUp_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUp)


#define TopShooter_Source_TopShooter_PowerUp_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphere() { return STRUCT_OFFSET(APowerUp, sphere); } \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(APowerUp, root); } \
	FORCEINLINE static uint32 __PPO__powerUp() { return STRUCT_OFFSET(APowerUp, powerUp); } \
	FORCEINLINE static uint32 __PPO__value() { return STRUCT_OFFSET(APowerUp, value); } \
	FORCEINLINE static uint32 __PPO__TypePowerUp() { return STRUCT_OFFSET(APowerUp, TypePowerUp); }


#define TopShooter_Source_TopShooter_PowerUp_h_22_PROLOG
#define TopShooter_Source_TopShooter_PowerUp_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_PowerUp_h_25_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_PowerUp_h_25_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_PowerUp_h_25_INCLASS \
	TopShooter_Source_TopShooter_PowerUp_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_PowerUp_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_PowerUp_h_25_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_PowerUp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_PowerUp_h_25_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_PowerUp_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class APowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_PowerUp_h


#define FOREACH_ENUM_ETYPEPOWERUP(op) \
	op(ETypePowerUp::FastFire) \
	op(ETypePowerUp::PowerShoot) \
	op(ETypePowerUp::Heal) 

enum class ETypePowerUp : uint8;
template<> TOPSHOOTER_API UEnum* StaticEnum<ETypePowerUp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
