// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/PowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp() {}
// Cross Module References
	TOPSHOOTER_API UEnum* Z_Construct_UEnum_TopShooter_ETypePowerUp();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	TOPSHOOTER_API UClass* Z_Construct_UClass_APowerUp_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_APowerUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_APowerUp_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static UEnum* ETypePowerUp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TopShooter_ETypePowerUp, Z_Construct_UPackage__Script_TopShooter(), TEXT("ETypePowerUp"));
		}
		return Singleton;
	}
	template<> TOPSHOOTER_API UEnum* StaticEnum<ETypePowerUp>()
	{
		return ETypePowerUp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypePowerUp(ETypePowerUp_StaticEnum, TEXT("/Script/TopShooter"), TEXT("ETypePowerUp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TopShooter_ETypePowerUp_Hash() { return 4181977563U; }
	UEnum* Z_Construct_UEnum_TopShooter_ETypePowerUp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TopShooter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypePowerUp"), 0, Get_Z_Construct_UEnum_TopShooter_ETypePowerUp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypePowerUp::FastFire", (int64)ETypePowerUp::FastFire },
				{ "ETypePowerUp::PowerShoot", (int64)ETypePowerUp::PowerShoot },
				{ "ETypePowerUp::Heal", (int64)ETypePowerUp::Heal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FastFire.DisplayName", "Fast Fire" },
				{ "Heal.DisplayName", "Heal Up" },
				{ "ModuleRelativePath", "PowerUp.h" },
				{ "PowerShoot.DisplayName", "Power Shoot" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TopShooter,
				nullptr,
				"ETypePowerUp",
				"ETypePowerUp",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APowerUp::StaticRegisterNativesAPowerUp()
	{
		UClass* Class = APowerUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &APowerUp::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics
	{
		struct PowerUp_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PowerUp_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PowerUp_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerUp_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerUp, nullptr, "OnOverlapBegin", sizeof(PowerUp_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APowerUp_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APowerUp_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APowerUp_NoRegister()
	{
		return APowerUp::StaticClass();
	}
	struct Z_Construct_UClass_APowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypePowerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypePowerUp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypePowerUp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_powerUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APowerUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APowerUp_OnOverlapBegin, "OnOverlapBegin" }, // 1951251992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUp.h" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUpInfo" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp = { "TypePowerUp", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, TypePowerUp), Z_Construct_UEnum_TopShooter_ETypePowerUp, METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_value_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PowerUpInfo" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, value), METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_powerUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_powerUp = { "powerUp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, powerUp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_powerUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_powerUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_root_MetaData, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_Statics::NewProp_sphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerUp_Statics::NewProp_sphere = { "sphere", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerUp, sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::NewProp_sphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::NewProp_sphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_TypePowerUp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_powerUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerUp_Statics::NewProp_sphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_Statics::ClassParams = {
		&APowerUp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APowerUp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUp, 694611214);
	template<> TOPSHOOTER_API UClass* StaticClass<APowerUp>()
	{
		return APowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUp(Z_Construct_UClass_APowerUp, &APowerUp::StaticClass, TEXT("/Script/TopShooter"), TEXT("APowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
