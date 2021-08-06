// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/MoleculeConcentration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoleculeConcentration() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoleculeConcentration();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
// End Cross Module References
class UScriptStruct* FMoleculeConcentration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMoleculeConcentration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoleculeConcentration, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("MoleculeConcentration"), sizeof(FMoleculeConcentration), Get_Z_Construct_UScriptStruct_FMoleculeConcentration_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FMoleculeConcentration>()
{
	return FMoleculeConcentration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoleculeConcentration(FMoleculeConcentration::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("MoleculeConcentration"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculeConcentration
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculeConcentration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoleculeConcentration")),new UScriptStruct::TCppStructOps<FMoleculeConcentration>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculeConcentration;
	struct Z_Construct_UScriptStruct_FMoleculeConcentration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReactantName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Concentration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Concentration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MoleculeConcentration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoleculeConcentration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_ReactantName_MetaData[] = {
		{ "Comment", "/** Name of the molecule. */" },
		{ "ModuleRelativePath", "Private/MoleculeConcentration.h" },
		{ "ToolTip", "Name of the molecule." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_ReactantName = { "ReactantName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculeConcentration, ReactantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_ReactantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_ReactantName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_Concentration_MetaData[] = {
		{ "Comment", "/** Reactant concentration (moles per litre solution). */" },
		{ "ModuleRelativePath", "Private/MoleculeConcentration.h" },
		{ "ToolTip", "Reactant concentration (moles per litre solution)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_Concentration = { "Concentration", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculeConcentration, Concentration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_Concentration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_Concentration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_ReactantName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::NewProp_Concentration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		nullptr,
		&NewStructOps,
		"MoleculeConcentration",
		sizeof(FMoleculeConcentration),
		alignof(FMoleculeConcentration),
		Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoleculeConcentration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoleculeConcentration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoleculeConcentration"), sizeof(FMoleculeConcentration), Get_Z_Construct_UScriptStruct_FMoleculeConcentration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoleculeConcentration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoleculeConcentration_Hash() { return 4176603577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
