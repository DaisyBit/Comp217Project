// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/GameHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHud() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PACMAN3D_API UClass* Z_Construct_UClass_AGameHUD();
	PACMAN3D_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameHUD);
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameHud.h" },
		{ "ModuleRelativePath", "GameHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameHUD()
	{
		if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	AGameHUD::AGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	AGameHUD::~AGameHUD() {}
	struct Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GameHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GameHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 1001284998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GameHud_h_3650272058(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GameHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GameHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
