// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GhostEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PACMAN3D_GhostEnemy_generated_h
#error "GhostEnemy.generated.h already included, missing '#pragma once' in GhostEnemy.h"
#endif
#define PACMAN3D_GhostEnemy_generated_h

#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_SPARSE_DATA
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_ACCESSORS
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhostEnemy(); \
	friend struct Z_Construct_UClass_AGhostEnemy_Statics; \
public: \
	DECLARE_CLASS(AGhostEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacMan3D"), NO_API) \
	DECLARE_SERIALIZER(AGhostEnemy)


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGhostEnemy(AGhostEnemy&&); \
	NO_API AGhostEnemy(const AGhostEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGhostEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhostEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhostEnemy) \
	NO_API virtual ~AGhostEnemy();


#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_9_PROLOG
#define FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_SPARSE_DATA \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_ACCESSORS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN3D_API UClass* StaticClass<class AGhostEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Comp217Project_PacMan3D_Source_PacMan3D_GhostEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
