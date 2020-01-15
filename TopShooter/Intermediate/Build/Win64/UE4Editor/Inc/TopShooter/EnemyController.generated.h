// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef TOPSHOOTER_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define TOPSHOOTER_EnemyController_generated_h

#define TopShooter_Source_TopShooter_EnemyController_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorDetected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimuli); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDetected(Z_Param_actor,Z_Param_Stimuli); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_EnemyController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorDetected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimuli); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorDetected(Z_Param_actor,Z_Param_Stimuli); \
		P_NATIVE_END; \
	}


#define TopShooter_Source_TopShooter_EnemyController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define TopShooter_Source_TopShooter_EnemyController_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopShooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define TopShooter_Source_TopShooter_EnemyController_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define TopShooter_Source_TopShooter_EnemyController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController)


#define TopShooter_Source_TopShooter_EnemyController_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__blackboardComp() { return STRUCT_OFFSET(AEnemyController, blackboardComp); } \
	FORCEINLINE static uint32 __PPO__BTComp() { return STRUCT_OFFSET(AEnemyController, BTComp); } \
	FORCEINLINE static uint32 __PPO__AIRadius() { return STRUCT_OFFSET(AEnemyController, AIRadius); } \
	FORCEINLINE static uint32 __PPO__AIAge() { return STRUCT_OFFSET(AEnemyController, AIAge); } \
	FORCEINLINE static uint32 __PPO__AIRadiusLost() { return STRUCT_OFFSET(AEnemyController, AIRadiusLost); } \
	FORCEINLINE static uint32 __PPO__AIFov() { return STRUCT_OFFSET(AEnemyController, AIFov); } \
	FORCEINLINE static uint32 __PPO__SightConfig() { return STRUCT_OFFSET(AEnemyController, SightConfig); } \
	FORCEINLINE static uint32 __PPO__Perception() { return STRUCT_OFFSET(AEnemyController, Perception); }


#define TopShooter_Source_TopShooter_EnemyController_h_16_PROLOG
#define TopShooter_Source_TopShooter_EnemyController_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_EnemyController_h_19_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_EnemyController_h_19_RPC_WRAPPERS \
	TopShooter_Source_TopShooter_EnemyController_h_19_INCLASS \
	TopShooter_Source_TopShooter_EnemyController_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopShooter_Source_TopShooter_EnemyController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopShooter_Source_TopShooter_EnemyController_h_19_PRIVATE_PROPERTY_OFFSET \
	TopShooter_Source_TopShooter_EnemyController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_EnemyController_h_19_INCLASS_NO_PURE_DECLS \
	TopShooter_Source_TopShooter_EnemyController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPSHOOTER_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopShooter_Source_TopShooter_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
