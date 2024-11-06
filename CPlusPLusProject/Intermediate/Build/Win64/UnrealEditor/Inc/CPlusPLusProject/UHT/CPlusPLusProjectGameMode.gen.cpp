// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPLusProject/CPlusPLusProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusPLusProjectGameMode() {}

// Begin Cross Module References
CPLUSPLUSPROJECT_API UClass* Z_Construct_UClass_ACPlusPLusProjectGameMode();
CPLUSPLUSPROJECT_API UClass* Z_Construct_UClass_ACPlusPLusProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPlusPLusProject();
// End Cross Module References

// Begin Class ACPlusPLusProjectGameMode
void ACPlusPLusProjectGameMode::StaticRegisterNativesACPlusPLusProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlusPLusProjectGameMode);
UClass* Z_Construct_UClass_ACPlusPLusProjectGameMode_NoRegister()
{
	return ACPlusPLusProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPlusPLusProjectGameMode.h" },
		{ "ModuleRelativePath", "CPlusPLusProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusPLusProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPlusPLusProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::ClassParams = {
	&ACPlusPLusProjectGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlusPLusProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ACPlusPLusProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlusPLusProjectGameMode.OuterSingleton, Z_Construct_UClass_ACPlusPLusProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlusPLusProjectGameMode.OuterSingleton;
}
template<> CPLUSPLUSPROJECT_API UClass* StaticClass<ACPlusPLusProjectGameMode>()
{
	return ACPlusPLusProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusPLusProjectGameMode);
ACPlusPLusProjectGameMode::~ACPlusPLusProjectGameMode() {}
// End Class ACPlusPLusProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_CPlusPLusProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlusPLusProjectGameMode, ACPlusPLusProjectGameMode::StaticClass, TEXT("ACPlusPLusProjectGameMode"), &Z_Registration_Info_UClass_ACPlusPLusProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlusPLusProjectGameMode), 2423637580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_CPlusPLusProjectGameMode_h_1115801347(TEXT("/Script/CPlusPLusProject"),
	Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_CPlusPLusProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_CPlusPLusProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
