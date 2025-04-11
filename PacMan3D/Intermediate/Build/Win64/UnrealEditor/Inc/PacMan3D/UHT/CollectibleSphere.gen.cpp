// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/CollectibleSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectibleSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PACMAN3D_API UClass* Z_Construct_UClass_ACollectibleSphere();
	PACMAN3D_API UClass* Z_Construct_UClass_ACollectibleSphere_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	void ACollectibleSphere::StaticRegisterNativesACollectibleSphere()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectibleSphere);
	UClass* Z_Construct_UClass_ACollectibleSphere_NoRegister()
	{
		return ACollectibleSphere::StaticClass();
	}
	struct Z_Construct_UClass_ACollectibleSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectibleSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSphere_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectibleSphere.h" },
		{ "ModuleRelativePath", "CollectibleSphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectibleSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectibleSphere>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectibleSphere_Statics::ClassParams = {
		&ACollectibleSphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectibleSphere_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACollectibleSphere()
	{
		if (!Z_Registration_Info_UClass_ACollectibleSphere.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectibleSphere.OuterSingleton, Z_Construct_UClass_ACollectibleSphere_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectibleSphere.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<ACollectibleSphere>()
	{
		return ACollectibleSphere::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectibleSphere);
	ACollectibleSphere::~ACollectibleSphere() {}
	struct Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_CollectibleSphere_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_CollectibleSphere_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectibleSphere, ACollectibleSphere::StaticClass, TEXT("ACollectibleSphere"), &Z_Registration_Info_UClass_ACollectibleSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectibleSphere), 2454561327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_CollectibleSphere_h_901236653(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_CollectibleSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_CollectibleSphere_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
