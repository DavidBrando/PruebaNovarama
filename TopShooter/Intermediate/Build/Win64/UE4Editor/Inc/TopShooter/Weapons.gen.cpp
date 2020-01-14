// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/Weapons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapons() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_AWeapons_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_AWeapons();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPSHOOTER_API UClass* Z_Construct_UClass_ABullets_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AWeapons::StaticRegisterNativesAWeapons()
	{
	}
	UClass* Z_Construct_UClass_AWeapons_NoRegister()
	{
		return AWeapons::StaticClass();
	}
	struct Z_Construct_UClass_AWeapons_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons.h" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::NewProp_bulletType_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapons_Statics::NewProp_bulletType = { "bulletType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapons, bulletType), Z_Construct_UClass_ABullets_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeapons_Statics::NewProp_bulletType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::NewProp_bulletType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::NewProp_spawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapons_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapons, spawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapons_Statics::NewProp_spawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::NewProp_spawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::NewProp_mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapons_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapons, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapons_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapons_Statics::NewProp_bulletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapons_Statics::NewProp_spawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapons_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapons>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapons_Statics::ClassParams = {
		&AWeapons::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapons_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapons()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapons_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapons, 4101681169);
	template<> TOPSHOOTER_API UClass* StaticClass<AWeapons>()
	{
		return AWeapons::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapons(Z_Construct_UClass_AWeapons, &AWeapons::StaticClass, TEXT("/Script/TopShooter"), TEXT("AWeapons"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapons);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
