// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LATUS_LatusCharacter_generated_h
#error "LatusCharacter.generated.h already included, missing '#pragma once' in LatusCharacter.h"
#endif
#define LATUS_LatusCharacter_generated_h

#define Latus_Source_Latus_LatusCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHelpText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHelpText(Z_Param_text); \
		P_NATIVE_END; \
	}


#define Latus_Source_Latus_LatusCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHelpText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHelpText(Z_Param_text); \
		P_NATIVE_END; \
	}


#define Latus_Source_Latus_LatusCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALatusCharacter(); \
	friend LATUS_API class UClass* Z_Construct_UClass_ALatusCharacter(); \
public: \
	DECLARE_CLASS(ALatusCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Latus"), NO_API) \
	DECLARE_SERIALIZER(ALatusCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Latus_Source_Latus_LatusCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALatusCharacter(); \
	friend LATUS_API class UClass* Z_Construct_UClass_ALatusCharacter(); \
public: \
	DECLARE_CLASS(ALatusCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Latus"), NO_API) \
	DECLARE_SERIALIZER(ALatusCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Latus_Source_Latus_LatusCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALatusCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALatusCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALatusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALatusCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALatusCharacter(ALatusCharacter&&); \
	NO_API ALatusCharacter(const ALatusCharacter&); \
public:


#define Latus_Source_Latus_LatusCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALatusCharacter(ALatusCharacter&&); \
	NO_API ALatusCharacter(const ALatusCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALatusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALatusCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALatusCharacter)


#define Latus_Source_Latus_LatusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ALatusCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ALatusCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ALatusCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ALatusCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ALatusCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ALatusCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ALatusCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ALatusCharacter, L_MotionController); }


#define Latus_Source_Latus_LatusCharacter_h_11_PROLOG
#define Latus_Source_Latus_LatusCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Latus_Source_Latus_LatusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Latus_Source_Latus_LatusCharacter_h_14_RPC_WRAPPERS \
	Latus_Source_Latus_LatusCharacter_h_14_INCLASS \
	Latus_Source_Latus_LatusCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Latus_Source_Latus_LatusCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Latus_Source_Latus_LatusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Latus_Source_Latus_LatusCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Latus_Source_Latus_LatusCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Latus_Source_Latus_LatusCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Latus_Source_Latus_LatusCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
