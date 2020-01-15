// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/Enemies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemies() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_AEnemies_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_AEnemies();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AEnemies::StaticRegisterNativesAEnemies()
	{
	}
	UClass* Z_Construct_UClass_AEnemies_NoRegister()
	{
		return AEnemies::StaticClass();
	}
	struct Z_Construct_UClass_AEnemies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arm2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arm2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arm1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arm1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies.h" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::NewProp_arm2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemies_Statics::NewProp_arm2 = { "arm2", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemies, arm2), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::NewProp_arm2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::NewProp_arm2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::NewProp_arm1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemies_Statics::NewProp_arm1 = { "arm1", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemies, arm1), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::NewProp_arm1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::NewProp_arm1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::NewProp_damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemies_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemies, damage), METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::NewProp_damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::NewProp_maxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemies_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemies, maxHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemies_Statics::NewProp_health_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "ModuleRelativePath", "Enemies.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemies_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemies, health), METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemies_Statics::NewProp_arm2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemies_Statics::NewProp_arm1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemies_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemies_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemies_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemies_Statics::ClassParams = {
		&AEnemies::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemies_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemies_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemies, 3762195658);
	template<> TOPSHOOTER_API UClass* StaticClass<AEnemies>()
	{
		return AEnemies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemies(Z_Construct_UClass_AEnemies, &AEnemies::StaticClass, TEXT("/Script/TopShooter"), TEXT("AEnemies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
