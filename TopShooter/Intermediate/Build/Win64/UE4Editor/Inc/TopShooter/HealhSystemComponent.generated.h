// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPSHOOTER_HealhSystemComponent_generated_h
#error "HealhSystemComponent.generated.h already included, missing '#pragma once' in HealhSystemComponent.h"
#endif
#define TOPSHOOTER_HealhSystemComponent_generated_h

#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_vCuracion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_vCuracion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dmg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_dmg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorizedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFactorizedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_vCuracion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_vCuracion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dmg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_dmg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorizedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFactorizedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealhSystemComponent(); \
	friend struct Z_Construct_UClass_UHealhSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UHealhSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(UHealhSystemComponent)


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealhSystemComponent(); \
	friend struct Z_Construct_UClass_UHealhSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UHealhSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(UHealhSystemComponent)


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealhSystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealhSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealhSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealhSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealhSystemComponent(UHealhSystemComponent&&); \
	NO_API UHealhSystemComponent(const UHealhSystemComponent&); \
public:


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealhSystemComponent(UHealhSystemComponent&&); \
	NO_API UHealhSystemComponent(const UHealhSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealhSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealhSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealhSystemComponent)


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__alive() { return STRUCT_OFFSET(UHealhSystemComponent, alive); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(UHealhSystemComponent, health); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(UHealhSystemComponent, maxHealth); }


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_10_PROLOG
#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_INCLASS \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_HealhSystemComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_HealhSystemComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class UHealhSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_HealhSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
