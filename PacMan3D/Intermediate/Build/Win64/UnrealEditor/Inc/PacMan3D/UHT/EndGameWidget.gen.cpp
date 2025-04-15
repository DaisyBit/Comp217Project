// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/EndGameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameWidget() {}
// Cross Module References
	PACMAN3D_API UClass* Z_Construct_UClass_UEndGameWidget();
	PACMAN3D_API UClass* Z_Construct_UClass_UEndGameWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameWidget::execOnReturnToMainMenuClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnToMainMenuClicked();
		P_NATIVE_END;
	}
	void UEndGameWidget::StaticRegisterNativesUEndGameWidget()
	{
		UClass* Class = UEndGameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReturnToMainMenuClicked", &UEndGameWidget::execOnReturnToMainMenuClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGameWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameWidget, nullptr, "OnReturnToMainMenuClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndGameWidget);
	UClass* Z_Construct_UClass_UEndGameWidget_NoRegister()
	{
		return UEndGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameWidget_OnReturnToMainMenuClicked, "OnReturnToMainMenuClicked" }, // 4049933658
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndGameWidget.h" },
		{ "ModuleRelativePath", "EndGameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndGameWidget_Statics::ClassParams = {
		&UEndGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndGameWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEndGameWidget()
	{
		if (!Z_Registration_Info_UClass_UEndGameWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndGameWidget.OuterSingleton, Z_Construct_UClass_UEndGameWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEndGameWidget.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<UEndGameWidget>()
	{
		return UEndGameWidget::StaticClass();
	}
	UEndGameWidget::UEndGameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameWidget);
	UEndGameWidget::~UEndGameWidget() {}
	struct Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_EndGameWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_EndGameWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEndGameWidget, UEndGameWidget::StaticClass, TEXT("UEndGameWidget"), &Z_Registration_Info_UClass_UEndGameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndGameWidget), 3746008607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_EndGameWidget_h_1177115264(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_EndGameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_EndGameWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
