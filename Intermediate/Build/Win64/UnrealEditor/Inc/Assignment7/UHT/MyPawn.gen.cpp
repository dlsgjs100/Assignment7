// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment7/Public/MyPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}

// Begin Cross Module References
ASSIGNMENT7_API UClass* Z_Construct_UClass_AMyPawn();
ASSIGNMENT7_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Assignment7();
// End Cross Module References

// Begin Class AMyPawn Function ApplyDeceleration
struct Z_Construct_UFunction_AMyPawn_ApplyDeceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_ApplyDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "ApplyDeceleration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ApplyDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_ApplyDeceleration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_ApplyDeceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_ApplyDeceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execApplyDeceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDeceleration();
	P_NATIVE_END;
}
// End Class AMyPawn Function ApplyDeceleration

// Begin Class AMyPawn Function ApplyGravity
struct Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics
{
	struct MyPawn_eventApplyGravity_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventApplyGravity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "ApplyGravity", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::MyPawn_eventApplyGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::MyPawn_eventApplyGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_ApplyGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_ApplyGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execApplyGravity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGravity(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMyPawn Function ApplyGravity

// Begin Class AMyPawn Function Fly
struct Z_Construct_UFunction_AMyPawn_Fly_Statics
{
	struct MyPawn_eventFly_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_Fly_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventFly_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Fly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Fly_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Fly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Fly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Fly", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Fly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Fly_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_Fly_Statics::MyPawn_eventFly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Fly_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Fly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_Fly_Statics::MyPawn_eventFly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Fly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Fly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execFly)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fly(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function Fly

// Begin Class AMyPawn Function GetCalculatedVelocity
struct Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics
{
	struct MyPawn_eventGetCalculatedVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move|Cmponents" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventGetCalculatedVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "GetCalculatedVelocity", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::MyPawn_eventGetCalculatedVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::MyPawn_eventGetCalculatedVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execGetCalculatedVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCalculatedVelocity();
	P_NATIVE_END;
}
// End Class AMyPawn Function GetCalculatedVelocity

// Begin Class AMyPawn Function GetCurrentSpeed
struct Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics
{
	struct MyPawn_eventGetCurrentSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move|Ground|Cmponents" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "GetCurrentSpeed", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::MyPawn_eventGetCurrentSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::MyPawn_eventGetCurrentSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_GetCurrentSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_GetCurrentSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execGetCurrentSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed();
	P_NATIVE_END;
}
// End Class AMyPawn Function GetCurrentSpeed

// Begin Class AMyPawn Function GetDirection
struct Z_Construct_UFunction_AMyPawn_GetDirection_Statics
{
	struct MyPawn_eventGetDirection_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move|Ground|Cmponents" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventGetDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_GetDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_GetDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "GetDirection", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_GetDirection_Statics::MyPawn_eventGetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_GetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_GetDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_GetDirection_Statics::MyPawn_eventGetDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_GetDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_GetDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execGetDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDirection();
	P_NATIVE_END;
}
// End Class AMyPawn Function GetDirection

// Begin Class AMyPawn Function IsOnGround
struct Z_Construct_UFunction_AMyPawn_IsOnGround_Statics
{
	struct MyPawn_eventIsOnGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "bIsOnGround" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Roll \xeb\xb3\xb5\xea\xb5\xac \xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Roll \xeb\xb3\xb5\xea\xb5\xac \xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyPawn_eventIsOnGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPawn_eventIsOnGround_Parms), &Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "IsOnGround", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::MyPawn_eventIsOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::MyPawn_eventIsOnGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_IsOnGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_IsOnGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execIsOnGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnGround();
	P_NATIVE_END;
}
// End Class AMyPawn Function IsOnGround

// Begin Class AMyPawn Function LandRecoverStatus
struct Z_Construct_UFunction_AMyPawn_LandRecoverStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_LandRecoverStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "LandRecoverStatus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_LandRecoverStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_LandRecoverStatus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPawn_LandRecoverStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_LandRecoverStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execLandRecoverStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LandRecoverStatus();
	P_NATIVE_END;
}
// End Class AMyPawn Function LandRecoverStatus

// Begin Class AMyPawn Function Look
struct Z_Construct_UFunction_AMyPawn_Look_Statics
{
	struct MyPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_Look_Statics::MyPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_Look_Statics::MyPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function Look

// Begin Class AMyPawn Function RotatePitch
struct Z_Construct_UFunction_AMyPawn_RotatePitch_Statics
{
	struct MyPawn_eventRotatePitch_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventRotatePitch_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "RotatePitch", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::MyPawn_eventRotatePitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::MyPawn_eventRotatePitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_RotatePitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_RotatePitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execRotatePitch)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotatePitch(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function RotatePitch

// Begin Class AMyPawn Function RotateRoll
struct Z_Construct_UFunction_AMyPawn_RotateRoll_Statics
{
	struct MyPawn_eventRotateRoll_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventRotateRoll_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "RotateRoll", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::MyPawn_eventRotateRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::MyPawn_eventRotateRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_RotateRoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_RotateRoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execRotateRoll)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateRoll(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function RotateRoll

// Begin Class AMyPawn Function StartJump
struct Z_Construct_UFunction_AMyPawn_StartJump_Statics
{
	struct MyPawn_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_StartJump_Statics::MyPawn_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_StartJump_Statics::MyPawn_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function StartJump

// Begin Class AMyPawn Function StartMove
struct Z_Construct_UFunction_AMyPawn_StartMove_Statics
{
	struct MyPawn_eventStartMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_StartMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventStartMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_StartMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_StartMove_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_StartMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "StartMove", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_StartMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_StartMove_Statics::MyPawn_eventStartMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StartMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_StartMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_StartMove_Statics::MyPawn_eventStartMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_StartMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_StartMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execStartMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMove(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function StartMove

// Begin Class AMyPawn Function StopMove
struct Z_Construct_UFunction_AMyPawn_StopMove_Statics
{
	struct MyPawn_eventStopMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_StopMove_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventStopMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_StopMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_StopMove_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StopMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "StopMove", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_StopMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StopMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_StopMove_Statics::MyPawn_eventStopMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_StopMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_StopMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_StopMove_Statics::MyPawn_eventStopMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_StopMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_StopMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execStopMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMove(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function StopMove

// Begin Class AMyPawn
void AMyPawn::StaticRegisterNativesAMyPawn()
{
	UClass* Class = AMyPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDeceleration", &AMyPawn::execApplyDeceleration },
		{ "ApplyGravity", &AMyPawn::execApplyGravity },
		{ "Fly", &AMyPawn::execFly },
		{ "GetCalculatedVelocity", &AMyPawn::execGetCalculatedVelocity },
		{ "GetCurrentSpeed", &AMyPawn::execGetCurrentSpeed },
		{ "GetDirection", &AMyPawn::execGetDirection },
		{ "IsOnGround", &AMyPawn::execIsOnGround },
		{ "LandRecoverStatus", &AMyPawn::execLandRecoverStatus },
		{ "Look", &AMyPawn::execLook },
		{ "RotatePitch", &AMyPawn::execRotatePitch },
		{ "RotateRoll", &AMyPawn::execRotateRoll },
		{ "StartJump", &AMyPawn::execStartJump },
		{ "StartMove", &AMyPawn::execStartMove },
		{ "StopMove", &AMyPawn::execStopMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn);
UClass* Z_Construct_UClass_AMyPawn_NoRegister()
{
	return AMyPawn::StaticClass();
}
struct Z_Construct_UClass_AMyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Move|Components" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalAcceleration_MetaData[] = {
		{ "Category", "Move|Ground|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xa0\x84\xeb\xb0\xa9 \xec\x86\x8d\xeb\x8f\x84 (m/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xa0\x84\xeb\xb0\xa9 \xec\x86\x8d\xeb\x8f\x84 (m/s)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyingAcceleration_MetaData[] = {
		{ "Category", "Move|Fly|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa7\x80\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x80\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xec\x9d\x98 \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AscendAcceleration_MetaData[] = {
		{ "Category", "Move|Fly|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb9\x84\xed\x96\x89\xec\x8b\x9c \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb9\x84\xed\x96\x89\xec\x8b\x9c \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Move|Jump|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x81\xec\x8a\xb9 \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xec\x8a\xb9 \xea\xb0\x80\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Move|Jump|Components" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFlying_MetaData[] = {
		{ "Category", "Move|Fly|Components" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculatedDirection_MetaData[] = {
		{ "Category", "Move|Ground|Components" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAcceleration_MetaData[] = {
		{ "Category", "Move|Fly|Components" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyingAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AscendAcceleration;
	static void NewProp_bIsJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
	static void NewProp_bIsFlying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFlying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CalculatedDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_ApplyDeceleration, "ApplyDeceleration" }, // 4046992464
		{ &Z_Construct_UFunction_AMyPawn_ApplyGravity, "ApplyGravity" }, // 3436196906
		{ &Z_Construct_UFunction_AMyPawn_Fly, "Fly" }, // 389621855
		{ &Z_Construct_UFunction_AMyPawn_GetCalculatedVelocity, "GetCalculatedVelocity" }, // 2096608666
		{ &Z_Construct_UFunction_AMyPawn_GetCurrentSpeed, "GetCurrentSpeed" }, // 2086315838
		{ &Z_Construct_UFunction_AMyPawn_GetDirection, "GetDirection" }, // 1459831245
		{ &Z_Construct_UFunction_AMyPawn_IsOnGround, "IsOnGround" }, // 2978611509
		{ &Z_Construct_UFunction_AMyPawn_LandRecoverStatus, "LandRecoverStatus" }, // 1512921323
		{ &Z_Construct_UFunction_AMyPawn_Look, "Look" }, // 3479452699
		{ &Z_Construct_UFunction_AMyPawn_RotatePitch, "RotatePitch" }, // 751045795
		{ &Z_Construct_UFunction_AMyPawn_RotateRoll, "RotateRoll" }, // 3400832140
		{ &Z_Construct_UFunction_AMyPawn_StartJump, "StartJump" }, // 154859493
		{ &Z_Construct_UFunction_AMyPawn_StartMove, "StartMove" }, // 1180255326
		{ &Z_Construct_UFunction_AMyPawn_StopMove, "StopMove" }, // 402055383
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_NormalAcceleration = { "NormalAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, NormalAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalAcceleration_MetaData), NewProp_NormalAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_FlyingAcceleration = { "FlyingAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, FlyingAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyingAcceleration_MetaData), NewProp_FlyingAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_AscendAcceleration = { "AscendAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, AscendAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AscendAcceleration_MetaData), NewProp_AscendAcceleration_MetaData) };
void Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsJumping_SetBit(void* Obj)
{
	((AMyPawn*)Obj)->bIsJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumping_MetaData), NewProp_bIsJumping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) };
void Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsFlying_SetBit(void* Obj)
{
	((AMyPawn*)Obj)->bIsFlying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsFlying = { "bIsFlying", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyPawn), &Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsFlying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFlying_MetaData), NewProp_bIsFlying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_CalculatedDirection = { "CalculatedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, CalculatedDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculatedDirection_MetaData), NewProp_CalculatedDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_GravityAcceleration = { "GravityAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, GravityAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAcceleration_MetaData), NewProp_GravityAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_NormalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_FlyingAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_AscendAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_bIsFlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_CalculatedDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_GravityAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
	&AMyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn()
{
	if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
}
template<> ASSIGNMENT7_API UClass* StaticClass<AMyPawn>()
{
	return AMyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
AMyPawn::~AMyPawn() {}
// End Class AMyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 3629246686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyPawn_h_958549805(TEXT("/Script/Assignment7"),
	Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
