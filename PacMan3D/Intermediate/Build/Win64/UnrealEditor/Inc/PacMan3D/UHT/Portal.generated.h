// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PACMAN3D_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define PACMAN3D_Portal_generated_h

#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_SPARSE_DATA
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan3D"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_10_PROLOG
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_SPARSE_DATA \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_INCLASS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN3D_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
