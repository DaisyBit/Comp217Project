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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DGameMode();
	PACMAN3D_API UClass* Z_Construct_UClass_APacMan3DGameMode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	DEFINE_FUNCTION(APacMan3DGameMode::execTriggerGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacMan3DGameMode::execOnCollectibleCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectibleCollected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacMan3DGameMode::execRegisterCollectible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCollectible();
		P_NATIVE_END;
	}
	void APacMan3DGameMode::StaticRegisterNativesAPacMan3DGameMode()
	{
		UClass* Class = APacMan3DGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollectibleCollected", &APacMan3DGameMode::execOnCollectibleCollected },
			{ "RegisterCollectible", &APacMan3DGameMode::execRegisterCollectible },
			{ "TriggerGameOver", &APacMan3DGameMode::execTriggerGameOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacMan3DGameMode, nullptr, "OnCollectibleCollected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics::Function_MetaDataParams), Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacMan3DGameMode, nullptr, "RegisterCollectible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacMan3DGameMode, nullptr, "TriggerGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacMan3DGameMode);
	UClass* Z_Construct_UClass_APacMan3DGameMode_NoRegister()
	{
		return APacMan3DGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APacMan3DGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalCollectibles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCollectibles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VictoryWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VictoryWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacMan3DGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APacMan3DGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APacMan3DGameMode_OnCollectibleCollected, "OnCollectibleCollected" }, // 2733037999
		{ &Z_Construct_UFunction_APacMan3DGameMode_RegisterCollectible, "RegisterCollectible" }, // 1466940580
		{ &Z_Construct_UFunction_APacMan3DGameMode_TriggerGameOver, "TriggerGameOver" }, // 382514276
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacMan3DGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_TotalCollectibles_MetaData[] = {
		{ "Category", "Collectibles" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_TotalCollectibles = { "TotalCollectibles", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan3DGameMode, TotalCollectibles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_TotalCollectibles_MetaData), Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_TotalCollectibles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_CollectedCount_MetaData[] = {
		{ "Category", "Collectibles" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_CollectedCount = { "CollectedCount", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan3DGameMode, CollectedCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_CollectedCount_MetaData), Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_CollectedCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_VictoryWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_VictoryWidgetClass = { "VictoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan3DGameMode, VictoryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_VictoryWidgetClass_MetaData), Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_VictoryWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PacMan3DGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APacMan3DGameMode, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_GameOverWidgetClass_MetaData), Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_GameOverWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacMan3DGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_TotalCollectibles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_CollectedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_VictoryWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacMan3DGameMode_Statics::NewProp_GameOverWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacMan3DGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacMan3DGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacMan3DGameMode_Statics::ClassParams = {
		&APacMan3DGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APacMan3DGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APacMan3DGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APacMan3DGameMode_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacMan3DGameMode, APacMan3DGameMode::StaticClass, TEXT("APacMan3DGameMode"), &Z_Registration_Info_UClass_APacMan3DGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacMan3DGameMode), 4242833999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_1366090444(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
