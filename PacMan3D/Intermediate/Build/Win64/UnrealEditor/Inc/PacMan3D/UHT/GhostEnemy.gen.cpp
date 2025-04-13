// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/GhostEnemy.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PACMAN3D_API UClass* Z_Construct_UClass_AGhostEnemy();
	PACMAN3D_API UClass* Z_Construct_UClass_AGhostEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	DEFINE_FUNCTION(AGhostEnemy::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AGhostEnemy::StaticRegisterNativesAGhostEnemy()
	{
		UClass* Class = AGhostEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AGhostEnemy::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics
	{
		struct GhostEnemy_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemy_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemy_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemy_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemy_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GhostEnemy_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GhostEnemy_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GhostEnemy_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhostEnemy, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::GhostEnemy_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::GhostEnemy_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGhostEnemy);
	UClass* Z_Construct_UClass_AGhostEnemy_NoRegister()
	{
		return AGhostEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AGhostEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostVisual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WanderRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WanderRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WanderDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WanderDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhostEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGhostEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhostEnemy_OnOverlapBegin, "OnOverlapBegin" }, // 1709895693
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GhostEnemy.h" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::NewProp_GhostVisual_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemy_Statics::NewProp_GhostVisual = { "GhostVisual", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemy, GhostVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::NewProp_GhostVisual_MetaData), Z_Construct_UClass_AGhostEnemy_Statics::NewProp_GhostVisual_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "GhostEnemy" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhostEnemy_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemy, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::NewProp_SightRadius_MetaData), Z_Construct_UClass_AGhostEnemy_Statics::NewProp_SightRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderRadius_MetaData[] = {
		{ "Category", "GhostEnemy" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderRadius = { "WanderRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemy, WanderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderRadius_MetaData), Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderDelay_MetaData[] = {
		{ "Category", "GhostEnemy" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderDelay = { "WanderDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemy, WanderDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderDelay_MetaData), Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhostEnemy_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "GhostEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GhostEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhostEnemy_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGhostEnemy, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::NewProp_CollisionSphere_MetaData), Z_Construct_UClass_AGhostEnemy_Statics::NewProp_CollisionSphere_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhostEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemy_Statics::NewProp_GhostVisual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemy_Statics::NewProp_SightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemy_Statics::NewProp_WanderDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhostEnemy_Statics::NewProp_CollisionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhostEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhostEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGhostEnemy_Statics::ClassParams = {
		&AGhostEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGhostEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AGhostEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGhostEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGhostEnemy()
	{
		if (!Z_Registration_Info_UClass_AGhostEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGhostEnemy.OuterSingleton, Z_Construct_UClass_AGhostEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGhostEnemy.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<AGhostEnemy>()
	{
		return AGhostEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostEnemy);
	AGhostEnemy::~AGhostEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGhostEnemy, AGhostEnemy::StaticClass, TEXT("AGhostEnemy"), &Z_Registration_Info_UClass_AGhostEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGhostEnemy), 1891110349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_3926795315(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
