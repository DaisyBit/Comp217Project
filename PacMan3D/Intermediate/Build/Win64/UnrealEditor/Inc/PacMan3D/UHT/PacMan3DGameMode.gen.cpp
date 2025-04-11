// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/PacMan3DGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacMan3DGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DGameMode();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	void APacMan3DGameMode::StaticRegisterNativesAPacMan3DGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacMan3DGameMode);
	UClass* Z_Construct_UClass_APacMan3DGameMode_NoRegister()
	{
		return APacMan3DGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APacMan3DGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacMan3DGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacMan3DGameMode.h" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacMan3DGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacMan3DGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacMan3DGameMode_Statics::ClassParams = {
		&APacMan3DGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APacMan3DGameMode()
	{
		if (!Z_Registration_Info_UClass_APacMan3DGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacMan3DGameMode.OuterSingleton, Z_Construct_UClass_APacMan3DGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacMan3DGameMode.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<APacMan3DGameMode>()
	{
		return APacMan3DGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacMan3DGameMode);
	APacMan3DGameMode::~APacMan3DGameMode() {}
	struct Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacMan3DGameMode, APacMan3DGameMode::StaticClass, TEXT("APacMan3DGameMode"), &Z_Registration_Info_UClass_APacMan3DGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacMan3DGameMode), 2697627344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_1024816030(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
