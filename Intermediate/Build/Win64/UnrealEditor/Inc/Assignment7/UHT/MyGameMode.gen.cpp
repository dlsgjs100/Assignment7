// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment7/Public/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}

// Begin Cross Module References
ASSIGNMENT7_API UClass* Z_Construct_UClass_AMyGameMode();
ASSIGNMENT7_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_Assignment7();
// End Cross Module References

// Begin Class AMyGameMode
void AMyGameMode::StaticRegisterNativesAMyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
{
	return AMyGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameMode\xec\x97\x90\xec\x84\x9c DefaultPawnClass\xeb\xa5\xbc \xec\xa7\x80\xec\xa0\x95\xed\x95\x98\xea\xb3\xa0\n// PlayerController\xea\xb0\x80 \xec\x9d\xb4\xeb\xa5\xbc Possess\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "Public/MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameMode\xec\x97\x90\xec\x84\x9c DefaultPawnClass\xeb\xa5\xbc \xec\xa7\x80\xec\xa0\x95\xed\x95\x98\xea\xb3\xa0\nPlayerController\xea\xb0\x80 \xec\x9d\xb4\xeb\xa5\xbc Possess" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
	&AMyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameMode()
{
	if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
}
template<> ASSIGNMENT7_API UClass* StaticClass<AMyGameMode>()
{
	return AMyGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
AMyGameMode::~AMyGameMode() {}
// End Class AMyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 3625336604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyGameMode_h_1092722581(TEXT("/Script/Assignment7"),
	Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment7_Source_Assignment7_Public_MyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
