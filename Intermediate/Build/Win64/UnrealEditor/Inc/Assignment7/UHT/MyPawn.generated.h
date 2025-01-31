// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ASSIGNMENT7_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define ASSIGNMENT7_MyPawn_generated_h

#define FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLandRecoverStatus); \
	DECLARE_FUNCTION(execApplyGravity); \
	DECLARE_FUNCTION(execIsOnGround); \
	DECLARE_FUNCTION(execRotateRoll); \
	DECLARE_FUNCTION(execRotatePitch); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execFly); \
	DECLARE_FUNCTION(execApplyDeceleration); \
	DECLARE_FUNCTION(execStopMove); \
	DECLARE_FUNCTION(execStartMove); \
	DECLARE_FUNCTION(execGetCurrentSpeed); \
	DECLARE_FUNCTION(execGetCalculatedVelocity); \
	DECLARE_FUNCTION(execGetDirection);


#define FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment7"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPawn(AMyPawn&&); \
	AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn) \
	NO_API virtual ~AMyPawn();


#define FID_Assignment7_Source_Assignment7_Public_MyPawn_h_43_PROLOG
#define FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_INCLASS_NO_PURE_DECLS \
	FID_Assignment7_Source_Assignment7_Public_MyPawn_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT7_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment7_Source_Assignment7_Public_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
