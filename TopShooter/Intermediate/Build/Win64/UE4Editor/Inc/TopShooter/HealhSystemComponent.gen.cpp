// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/HealhSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealhSystemComponent() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_UHealhSystemComponent_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_UHealhSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetAlive();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetHealth();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_UHealhSystemComponent_Heal();
	TOPSHOOTER_API UFunction* Z_Construct_UFunction_UHealhSystemComponent_TakeDamage();
// End Cross Module References
	void UHealhSystemComponent::StaticRegisterNativesUHealhSystemComponent()
	{
		UClass* Class = UHealhSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlive", &UHealhSystemComponent::execGetAlive },
			{ "GetFactorizedHealth", &UHealhSystemComponent::execGetFactorizedHealth },
			{ "GetHealth", &UHealhSystemComponent::execGetHealth },
			{ "Heal", &UHealhSystemComponent::execHeal },
			{ "TakeDamage", &UHealhSystemComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics
	{
		struct HealhSystemComponent_eventGetAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealhSystemComponent_eventGetAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealhSystemComponent_eventGetAlive_Parms), &Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealhSystemComponent, nullptr, "GetAlive", sizeof(HealhSystemComponent_eventGetAlive_Parms), Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealhSystemComponent_GetAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics
	{
		struct HealhSystemComponent_eventGetFactorizedHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealhSystemComponent_eventGetFactorizedHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealhSystemComponent, nullptr, "GetFactorizedHealth", sizeof(HealhSystemComponent_eventGetFactorizedHealth_Parms), Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics
	{
		struct HealhSystemComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealhSystemComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealhSystemComponent, nullptr, "GetHealth", sizeof(HealhSystemComponent_eventGetHealth_Parms), Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealhSystemComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealhSystemComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics
	{
		struct HealhSystemComponent_eventHeal_Parms
		{
			float vCuracion;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vCuracion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::NewProp_vCuracion = { "vCuracion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealhSystemComponent_eventHeal_Parms, vCuracion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::NewProp_vCuracion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealhSystemComponent, nullptr, "Heal", sizeof(HealhSystemComponent_eventHeal_Parms), Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealhSystemComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealhSystemComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics
	{
		struct HealhSystemComponent_eventTakeDamage_Parms
		{
			float dmg;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dmg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealhSystemComponent_eventTakeDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealhSystemComponent_eventTakeDamage_Parms), &Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_dmg = { "dmg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealhSystemComponent_eventTakeDamage_Parms, dmg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::NewProp_dmg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealhSystemComponent, nullptr, "TakeDamage", sizeof(HealhSystemComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealhSystemComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealhSystemComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealhSystemComponent_NoRegister()
	{
		return UHealhSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealhSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alive_MetaData[];
#endif
		static void NewProp_alive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealhSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealhSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealhSystemComponent_GetAlive, "GetAlive" }, // 684205976
		{ &Z_Construct_UFunction_UHealhSystemComponent_GetFactorizedHealth, "GetFactorizedHealth" }, // 3945217557
		{ &Z_Construct_UFunction_UHealhSystemComponent_GetHealth, "GetHealth" }, // 4273417877
		{ &Z_Construct_UFunction_UHealhSystemComponent_Heal, "Heal" }, // 3257282983
		{ &Z_Construct_UFunction_UHealhSystemComponent_TakeDamage, "TakeDamage" }, // 3484163248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealhSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealhSystemComponent.h" },
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealhSystemComponent, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_health_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealhSystemComponent, health), METADATA_PARAMS(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealhSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive_SetBit(void* Obj)
	{
		((UHealhSystemComponent*)Obj)->alive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive = { "alive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealhSystemComponent), &Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealhSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealhSystemComponent_Statics::NewProp_alive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealhSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealhSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealhSystemComponent_Statics::ClassParams = {
		&UHealhSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealhSystemComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UHealhSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealhSystemComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHealhSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealhSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealhSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealhSystemComponent, 1079799931);
	template<> TOPSHOOTER_API UClass* StaticClass<UHealhSystemComponent>()
	{
		return UHealhSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealhSystemComponent(Z_Construct_UClass_UHealhSystemComponent, &UHealhSystemComponent::StaticClass, TEXT("/Script/TopShooter"), TEXT("UHealhSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealhSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
