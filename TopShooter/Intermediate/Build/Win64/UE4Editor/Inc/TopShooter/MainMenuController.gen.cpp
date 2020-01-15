// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopShooter/MainMenuController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuController() {}
// Cross Module References
	TOPSHOOTER_API UClass* Z_Construct_UClass_AMainMenuController_NoRegister();
	TOPSHOOTER_API UClass* Z_Construct_UClass_AMainMenuController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMainMenuController::StaticRegisterNativesAMainMenuController()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuController_NoRegister()
	{
		return AMainMenuController::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wMainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyPressed_MetaData[];
#endif
		static void NewProp_keyPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_keyPressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuController.h" },
		{ "ModuleRelativePath", "MainMenuController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuController_Statics::NewProp_wMainMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainMenuController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuController_Statics::NewProp_wMainMenu = { "wMainMenu", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuController, wMainMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuController_Statics::NewProp_wMainMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::NewProp_wMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MainMenuController" },
		{ "ModuleRelativePath", "MainMenuController.h" },
	};
#endif
	void Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed_SetBit(void* Obj)
	{
		((AMainMenuController*)Obj)->keyPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed = { "keyPressed", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainMenuController), &Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuController_Statics::NewProp_wMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuController_Statics::NewProp_keyPressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuController_Statics::ClassParams = {
		&AMainMenuController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainMenuController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMainMenuController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuController, 162073473);
	template<> TOPSHOOTER_API UClass* StaticClass<AMainMenuController>()
	{
		return AMainMenuController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuController(Z_Construct_UClass_AMainMenuController, &AMainMenuController::StaticClass, TEXT("/Script/TopShooter"), TEXT("AMainMenuController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
