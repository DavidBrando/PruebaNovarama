// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/EnemyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_AEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_AEnemyController_OnActorDetected();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
		UClass* Class = AEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorDetected", &AEnemyController::execOnActorDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics
	{
		struct EnemyController_eventOnActorDetected_Parms
		{
			AActor* actor;
			FAIStimulus Stimuli;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimuli;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::NewProp_Stimuli = { "Stimuli", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnActorDetected_Parms, Stimuli), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyController_eventOnActorDetected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::NewProp_Stimuli,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "OnActorDetected", sizeof(EnemyController_eventOnActorDetected_Parms), Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_OnActorDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyController_OnActorDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIRadiusLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIRadiusLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blackboardComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyController_OnActorDetected, "OnActorDetected" }, // 3648701486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_Perception_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AIFov_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AIFov = { "AIFov", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AIFov), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIFov_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadiusLost_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadiusLost = { "AIRadiusLost", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AIRadiusLost), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadiusLost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadiusLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AIAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AIAge = { "AIAge", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AIAge), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadius = { "AIRadius", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, AIRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_BTComp_MetaData[] = {
		{ "Category", "EnemyController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_BTComp = { "BTComp", nullptr, (EPropertyFlags)0x002008000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, BTComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_BTComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_BTComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp_blackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp_blackboardComp = { "blackboardComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyController, blackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp_blackboardComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp_blackboardComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_Perception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AIFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadiusLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AIAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_AIRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_BTComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp_blackboardComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
		&AEnemyController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyController, 3515623402);
	template<> TOPSHOOTER_API UClass* StaticClass<AEnemyController>()
	{
		return AEnemyController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyController(Z_Construct_UClass_AEnemyController, &AEnemyController::StaticClass, TEXT("/Script/TopShooter"), TEXT("AEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
