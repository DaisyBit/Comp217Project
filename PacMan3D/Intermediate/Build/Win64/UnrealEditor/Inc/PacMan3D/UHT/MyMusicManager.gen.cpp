// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/MyMusicManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMusicManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PACMAN3D_API UClass* Z_Construct_UClass_AMyMusicManager();
	PACMAN3D_API UClass* Z_Construct_UClass_AMyMusicManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	void AMyMusicManager::StaticRegisterNativesAMyMusicManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMusicManager);
	UClass* Z_Construct_UClass_AMyMusicManager_NoRegister()
	{
		return AMyMusicManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyMusicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMusicComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundMusicComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMusic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundMusic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMusicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMusicManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMusicManager.h" },
		{ "ModuleRelativePath", "MyMusicManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusicComponent_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Audio component for background music\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyMusicManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio component for background music" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusicComponent = { "BackgroundMusicComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMusicManager, BackgroundMusicComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusicComponent_MetaData), Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusicComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusic_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The background music sound asset. Assign this in the editor.\n" },
#endif
		{ "ModuleRelativePath", "MyMusicManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The background music sound asset. Assign this in the editor." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusic = { "BackgroundMusic", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMusicManager, BackgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusic_MetaData), Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMusicManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusicComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMusicManager_Statics::NewProp_BackgroundMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMusicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMusicManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMusicManager_Statics::ClassParams = {
		&AMyMusicManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyMusicManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMusicManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMusicManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyMusicManager()
	{
		if (!Z_Registration_Info_UClass_AMyMusicManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMusicManager.OuterSingleton, Z_Construct_UClass_AMyMusicManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMusicManager.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<AMyMusicManager>()
	{
		return AMyMusicManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMusicManager);
	AMyMusicManager::~AMyMusicManager() {}
	struct Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_MyMusicManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_MyMusicManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMusicManager, AMyMusicManager::StaticClass, TEXT("AMyMusicManager"), &Z_Registration_Info_UClass_AMyMusicManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMusicManager), 4244605893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_MyMusicManager_h_3866912198(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_MyMusicManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_MyMusicManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
