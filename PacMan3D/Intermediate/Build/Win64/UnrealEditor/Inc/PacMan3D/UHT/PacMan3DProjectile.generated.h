// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacMan3DProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PACMAN3D_PacMan3DProjectile_generated_h
#error "PacMan3DProjectile.generated.h already included, missing '#pragma once' in PacMan3DProjectile.h"
#endif
#define PACMAN3D_PacMan3DProjectile_generated_h

#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_SPARSE_DATA
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacMan3DProjectile(); \
	friend struct Z_Construct_UClass_APacMan3DProjectile_Statics; \
public: \
	DECLARE_CLASS(APacMan3DProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan3D"), NO_API) \
	DECLARE_SERIALIZER(APacMan3DProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacMan3DProjectile(APacMan3DProjectile&&); \
	NO_API APacMan3DProjectile(const APacMan3DProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacMan3DProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacMan3DProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacMan3DProjectile) \
	NO_API virtual ~APacMan3DProjectile();


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_12_PROLOG
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_SPARSE_DATA \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN3D_API UClass* StaticClass<class APacMan3DProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_PacMan3DProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
