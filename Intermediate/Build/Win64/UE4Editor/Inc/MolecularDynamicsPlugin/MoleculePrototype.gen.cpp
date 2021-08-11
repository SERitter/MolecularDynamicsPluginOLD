// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/MoleculePrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoleculePrototype() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoleculePrototype();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAtomPrototype();
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBondPrototype();
// End Cross Module References
class UScriptStruct* FMoleculePrototype::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMoleculePrototype_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoleculePrototype, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("MoleculePrototype"), sizeof(FMoleculePrototype), Get_Z_Construct_UScriptStruct_FMoleculePrototype_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FMoleculePrototype>()
{
	return FMoleculePrototype::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoleculePrototype(FMoleculePrototype::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("MoleculePrototype"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculePrototype
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculePrototype()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoleculePrototype")),new UScriptStruct::TCppStructOps<FMoleculePrototype>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFMoleculePrototype;
	struct Z_Construct_UScriptStruct_FMoleculePrototype_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Formula_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Formula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MolarMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MolarMass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Atoms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atoms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Atoms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bonds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bonds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoleculePrototype>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/**English name of molecule*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "English name of molecule" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Formula_MetaData[] = {
		{ "Comment", "/**English Formula of molecule*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "English Formula of molecule" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Formula = { "Formula", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, Formula), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Formula_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Formula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Density_MetaData[] = {
		{ "Comment", "/**Density in kg/m^3*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "Density in kg/m^3" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_MolarMass_MetaData[] = {
		{ "Comment", "/**Molar Mass in g/mol*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "Molar Mass in g/mol" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_MolarMass = { "MolarMass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, MolarMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_MolarMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_MolarMass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms_Inner = { "Atoms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomPrototype, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms_MetaData[] = {
		{ "Comment", "/**An array of Atoms in the Molecule*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "An array of Atoms in the Molecule" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms = { "Atoms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, Atoms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds_Inner = { "Bonds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBondPrototype, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds_MetaData[] = {
		{ "Comment", "/**An array of Bonds in the Molecule*/" },
		{ "ModuleRelativePath", "Private/MoleculePrototype.h" },
		{ "ToolTip", "An array of Bonds in the Molecule" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds = { "Bonds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoleculePrototype, Bonds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoleculePrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Formula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_MolarMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Atoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoleculePrototype_Statics::NewProp_Bonds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoleculePrototype_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		nullptr,
		&NewStructOps,
		"MoleculePrototype",
		sizeof(FMoleculePrototype),
		alignof(FMoleculePrototype),
		Z_Construct_UScriptStruct_FMoleculePrototype_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoleculePrototype_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoleculePrototype()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoleculePrototype_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoleculePrototype"), sizeof(FMoleculePrototype), Get_Z_Construct_UScriptStruct_FMoleculePrototype_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoleculePrototype_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoleculePrototype_Hash() { return 686077038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
