// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacMan3D/MovingSpikeTrap.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingSpikeTrap() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PACMAN3D_API UClass* Z_Construct_UClass_AMovingSpikeTrap();
	PACMAN3D_API UClass* Z_Construct_UClass_AMovingSpikeTrap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PacMan3D();
// End Cross Module References
	DEFINE_FUNCTION(AMovingSpikeTrap::execOnSpikeOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpikeOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMovingSpikeTrap::StaticRegisterNativesAMovingSpikeTrap()
	{
		UClass* Class = AMovingSpikeTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSpikeOverlap", &AMovingSpikeTrap::execOnSpikeOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics
	{
		struct MovingSpikeTrap_eventOnSpikeOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingSpikeTrap_eventOnSpikeOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingSpikeTrap_eventOnSpikeOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingSpikeTrap_eventOnSpikeOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingSpikeTrap_eventOnSpikeOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MovingSpikeTrap_eventOnSpikeOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovingSpikeTrap_eventOnSpikeOverlap_Parms), &Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingSpikeTrap_eventOnSpikeOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingSpikeTrap, nullptr, "OnSpikeOverlap", nullptr, nullptr, Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::MovingSpikeTrap_eventOnSpikeOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::MovingSpikeTrap_eventOnSpikeOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingSpikeTrap);
	UClass* Z_Construct_UClass_AMovingSpikeTrap_NoRegister()
	{
		return AMovingSpikeTrap::StaticClass();
	}
	struct Z_Construct_UClass_AMovingSpikeTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntervalTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpikeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpikeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageZone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtendSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingSpikeTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PacMan3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingSpikeTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingSpikeTrap_OnSpikeOverlap, "OnSpikeOverlap" }, // 2179687362
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration for sound assets\n" },
#endif
		{ "IncludePath", "MovingSpikeTrap.h" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration for sound assets" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDistance_MetaData[] = {
		{ "Category", "Spike Settings" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDistance = { "MovementDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, MovementDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDistance_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Spike Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far the spikes extend\n" },
#endif
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far the spikes extend" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_IntervalTime_MetaData[] = {
		{ "Category", "Spike Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Units per second (unused for instant movement)\n" },
#endif
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Units per second (unused for instant movement)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_IntervalTime = { "IntervalTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, IntervalTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_IntervalTime_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_IntervalTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Spike Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long to stay extended/retracted\n" },
#endif
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to stay extended/retracted" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, MovementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "MovingSpikeTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_Root_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_SpikeMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spike" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_SpikeMesh = { "SpikeMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, SpikeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_SpikeMesh_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_SpikeMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_DamageZone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spike" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_DamageZone = { "DamageZone", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, DamageZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_DamageZone_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_DamageZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_ExtendSound_MetaData[] = {
		{ "Category", "Spike Sound" },
		{ "ModuleRelativePath", "MovingSpikeTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_ExtendSound = { "ExtendSound", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingSpikeTrap, ExtendSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_ExtendSound_MetaData), Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_ExtendSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingSpikeTrap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_IntervalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_SpikeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_DamageZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSpikeTrap_Statics::NewProp_ExtendSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingSpikeTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingSpikeTrap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingSpikeTrap_Statics::ClassParams = {
		&AMovingSpikeTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingSpikeTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingSpikeTrap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingSpikeTrap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMovingSpikeTrap()
	{
		if (!Z_Registration_Info_UClass_AMovingSpikeTrap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingSpikeTrap.OuterSingleton, Z_Construct_UClass_AMovingSpikeTrap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingSpikeTrap.OuterSingleton;
	}
	template<> PACMAN3D_API UClass* StaticClass<AMovingSpikeTrap>()
	{
		return AMovingSpikeTrap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingSpikeTrap);
	AMovingSpikeTrap::~AMovingSpikeTrap() {}
	struct Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_MovingSpikeTrap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_MovingSpikeTrap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingSpikeTrap, AMovingSpikeTrap::StaticClass, TEXT("AMovingSpikeTrap"), &Z_Registration_Info_UClass_AMovingSpikeTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingSpikeTrap), 1582625434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_MovingSpikeTrap_h_1209502953(TEXT("/Script/PacMan3D"),
		Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_MovingSpikeTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_4d4m2_OneDrive_Documents_GitHub_Comp217Project_PacMan3D_Source_PacMan3D_MovingSpikeTrap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
