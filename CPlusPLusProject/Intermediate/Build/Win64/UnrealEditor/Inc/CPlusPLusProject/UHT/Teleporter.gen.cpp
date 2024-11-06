// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlusPLusProject/Teleporter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPLUSPLUSPROJECT_API UClass* Z_Construct_UClass_ATeleporter();
CPLUSPLUSPROJECT_API UClass* Z_Construct_UClass_ATeleporter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPlusPLusProject();
// End Cross Module References

// Begin Class ATeleporter Function DeactivateTeleportEffect
struct Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xc3\xb3n para desactivar el efecto de part\xc3\xad""culas despu\xc3\xa9s de un tiempo\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xc3\xb3n para desactivar el efecto de part\xc3\xad""culas despu\xc3\xa9s de un tiempo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter, nullptr, "DeactivateTeleportEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeleporter::execDeactivateTeleportEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateTeleportEffect();
	P_NATIVE_END;
}
// End Class ATeleporter Function DeactivateTeleportEffect

// Begin Class ATeleporter Function OnTeleportOverlapBegin
struct Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics
{
	struct Teleporter_eventOnTeleportOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xc3\xb3n que se llamar\xc3\xa1 cuando un actor entre en el teletransportador\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xc3\xb3n que se llamar\xc3\xa1 cuando un actor entre en el teletransportador" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Teleporter_eventOnTeleportOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Teleporter_eventOnTeleportOverlapBegin_Parms), &Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter, nullptr, "OnTeleportOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::Teleporter_eventOnTeleportOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::Teleporter_eventOnTeleportOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeleporter::execOnTeleportOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTeleportOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ATeleporter Function OnTeleportOverlapBegin

// Begin Class ATeleporter Function OnTeleportOverlapEnd
struct Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics
{
	struct Teleporter_eventOnTeleportOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teleporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnTeleportOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter, nullptr, "OnTeleportOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::Teleporter_eventOnTeleportOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::Teleporter_eventOnTeleportOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeleporter::execOnTeleportOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTeleportOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ATeleporter Function OnTeleportOverlapEnd

// Begin Class ATeleporter
void ATeleporter::StaticRegisterNativesATeleporter()
{
	UClass* Class = ATeleporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeactivateTeleportEffect", &ATeleporter::execDeactivateTeleportEffect },
		{ "OnTeleportOverlapBegin", &ATeleporter::execOnTeleportOverlapBegin },
		{ "OnTeleportOverlapEnd", &ATeleporter::execOnTeleportOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleporter);
UClass* Z_Construct_UClass_ATeleporter_NoRegister()
{
	return ATeleporter::StaticClass();
}
struct Z_Construct_UClass_ATeleporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Teleporter.h" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportableActorClass_MetaData[] = {
		{ "Category", "Teleporter Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tipo de actor que puede usar el teletransportador\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tipo de actor que puede usar el teletransportador" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationTeleporter_MetaData[] = {
		{ "Category", "Teleporter Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al teletransportador destino\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al teletransportador destino" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente para detectar colisiones\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente para detectar colisiones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportEffect_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xc3\xb3n para activar el efecto de part\xc3\xad""culas\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xc3\xb3n para activar el efecto de part\xc3\xad""culas" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportSound_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sonido para el efecto de teletransporte\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sonido para el efecto de teletransporte" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TeleportableActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationTeleporter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeleporter_DeactivateTeleportEffect, "DeactivateTeleportEffect" }, // 1561475743
		{ &Z_Construct_UFunction_ATeleporter_OnTeleportOverlapBegin, "OnTeleportOverlapBegin" }, // 895667950
		{ &Z_Construct_UFunction_ATeleporter_OnTeleportOverlapEnd, "OnTeleportOverlapEnd" }, // 1369743561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportableActorClass = { "TeleportableActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, TeleportableActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportableActorClass_MetaData), NewProp_TeleportableActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_DestinationTeleporter = { "DestinationTeleporter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, DestinationTeleporter), Z_Construct_UClass_ATeleporter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationTeleporter_MetaData), NewProp_DestinationTeleporter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportBox = { "TeleportBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, TeleportBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportBox_MetaData), NewProp_TeleportBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportEffect = { "TeleportEffect", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, TeleportEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportEffect_MetaData), NewProp_TeleportEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportSound = { "TeleportSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, TeleportSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportSound_MetaData), NewProp_TeleportSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportableActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_DestinationTeleporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeleporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPlusPLusProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleporter_Statics::ClassParams = {
	&ATeleporter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATeleporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeleporter()
{
	if (!Z_Registration_Info_UClass_ATeleporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleporter.OuterSingleton, Z_Construct_UClass_ATeleporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeleporter.OuterSingleton;
}
template<> CPLUSPLUSPROJECT_API UClass* StaticClass<ATeleporter>()
{
	return ATeleporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporter);
ATeleporter::~ATeleporter() {}
// End Class ATeleporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_Teleporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeleporter, ATeleporter::StaticClass, TEXT("ATeleporter"), &Z_Registration_Info_UClass_ATeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleporter), 2684344757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_Teleporter_h_1743619099(TEXT("/Script/CPlusPLusProject"),
	Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_Teleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlusPLusProject_Source_CPlusPLusProject_Teleporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
