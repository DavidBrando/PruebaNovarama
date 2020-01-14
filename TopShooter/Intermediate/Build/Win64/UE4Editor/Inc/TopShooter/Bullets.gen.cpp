// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/Bullets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullets() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_ABullets_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_ABullets();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ABullets::StaticRegisterNativesABullets()
	{
	}
	UClass* Z_Construct_UClass_ABullets_NoRegister()
	{
		return ABullets::StaticClass();
	}
	struct Z_Construct_UClass_ABullets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_projectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABullets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullets_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bullets.h" },
		{ "ModuleRelativePath", "Bullets.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullets_Statics::NewProp_projectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BulletInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bullets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullets_Statics::NewProp_projectileMovement = { "projectileMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullets, projectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullets_Statics::NewProp_projectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::NewProp_projectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullets_Statics::NewProp_bullet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BulletInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bullets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullets_Statics::NewProp_bullet = { "bullet", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullets, bullet), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullets_Statics::NewProp_bullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::NewProp_bullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullets_Statics::NewProp_root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BulletInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bullets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullets_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullets, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullets_Statics::NewProp_root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABullets_Statics::NewProp_capsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BulletInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bullets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullets_Statics::NewProp_capsule = { "capsule", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABullets, capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABullets_Statics::NewProp_capsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::NewProp_capsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullets_Statics::NewProp_projectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullets_Statics::NewProp_bullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullets_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullets_Statics::NewProp_capsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABullets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABullets_Statics::ClassParams = {
		&ABullets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABullets_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABullets_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABullets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABullets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABullets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABullets, 2241695771);
	template<> TOPSHOOTER_API UClass* StaticClass<ABullets>()
	{
		return ABullets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABullets(Z_Construct_UClass_ABullets, &ABullets::StaticClass, TEXT("/Script/TopShooter"), TEXT("ABullets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABullets);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
