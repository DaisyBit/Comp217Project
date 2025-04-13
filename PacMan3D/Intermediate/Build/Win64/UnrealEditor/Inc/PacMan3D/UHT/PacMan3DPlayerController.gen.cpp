// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/PacMan3DPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacMan3DPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DPlayerController();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	void APacMan3DPlayerController::StaticRegisterNativesAPacMan3DPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacMan3DPlayerController);
	UClass* Z_Construct_UClass_APacMan3DPlayerController_NoRegister()
	{
		return APacMan3DPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APacMan3DPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacMan3DPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PacMan3DPlayerController.h" },
		{ "ModuleRelativePath", "PacMan3DPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "PacMan3DPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacMan3DPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan3DPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_APacMan3DPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacMan3DPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan3DPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacMan3DPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacMan3DPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacMan3DPlayerController_Statics::ClassParams = {
		&APacMan3DPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacMan3DPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APacMan3DPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APacMan3DPlayerController()
	{
		if (!Z_Registration_Info_UClass_APacMan3DPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacMan3DPlayerController.OuterSingleton, Z_Construct_UClass_APacMan3DPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacMan3DPlayerController.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<APacMan3DPlayerController>()
	{
		return APacMan3DPlayerController::StaticClass();
	}
	APacMan3DPlayerController::APacMan3DPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacMan3DPlayerController);
	APacMan3DPlayerController::~APacMan3DPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacMan3DPlayerController, APacMan3DPlayerController::StaticClass, TEXT("APacMan3DPlayerController"), &Z_Registration_Info_UClass_APacMan3DPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacMan3DPlayerController), 2058340847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DPlayerController_h_2531893417(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
