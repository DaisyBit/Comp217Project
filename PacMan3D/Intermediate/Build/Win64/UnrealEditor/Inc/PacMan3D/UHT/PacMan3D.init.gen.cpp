// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacMan3D_init() {}
	PACMAN3D_API UFunction* Z_Construct_UDelegateFunction_PacMan3D_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PacMan3D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PacMan3D()
	{
		if (!Z_Registration_Info_UPackage__Script_PacMan3D.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PacMan3D_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PacMan3D",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x71C49F02,
				0x5FB5D914,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PacMan3D.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PacMan3D.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PacMan3D(Z_Construct_UPackage__Script_PacMan3D, TEXT("/Script/PacMan3D"), Z_Registration_Info_UPackage__Script_PacMan3D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x71C49F02, 0x5FB5D914));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
