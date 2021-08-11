// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/AtomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomData() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAtomData();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAtomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAtomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomData, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("AtomData"), sizeof(FAtomData), Get_Z_Construct_UScriptStruct_FAtomData_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FAtomData>()
{
	return FAtomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomData(FAtomData::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("AtomData"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomData
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomData")),new UScriptStruct::TCppStructOps<FAtomData>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomData;
	struct Z_Construct_UScriptStruct_FAtomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomicNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtomicNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ElementName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BondLengthSingle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BondLengthSingle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BondLengthDouble_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BondLengthDouble;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BondLengthTriple_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BondLengthTriple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_AtomicNumber_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "// FIXME: I (Rob) am not sure if these UPROPERTY parameters are correct...\n" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "FIXME: I (Rob) am not sure if these UPROPERTY parameters are correct..." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_AtomicNumber = { "AtomicNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, AtomicNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_AtomicNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_AtomicNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_ElementName_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The full English name of the element (e.g. \"Hydrogen\"). */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The full English name of the element (e.g. \"Hydrogen\")." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, ElementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_ElementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_ElementName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The base colour to use for this atom, in RGB hex format. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The base colour to use for this atom, in RGB hex format." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, Color), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The van der Waals covalent radius of the atom, in picometres.  This sets the size of the atom in space-filling representation. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The van der Waals covalent radius of the atom, in picometres.  This sets the size of the atom in space-filling representation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The atom's (average, standard, default) mass in amu. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The atom's (average, standard, default) mass in amu." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthSingle_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The length of this atom's side of a single bond, in picometres. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The length of this atom's side of a single bond, in picometres." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthSingle = { "BondLengthSingle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, BondLengthSingle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthSingle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthSingle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthDouble_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The length of this atom's side of a double bond, in picometres. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The length of this atom's side of a double bond, in picometres." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthDouble = { "BondLengthDouble", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, BondLengthDouble), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthDouble_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthTriple_MetaData[] = {
		{ "Category", "AtomData" },
		{ "Comment", "/** The length of this atom's side of a triple bond, in picometres. */" },
		{ "ModuleRelativePath", "Private/AtomData.h" },
		{ "ToolTip", "The length of this atom's side of a triple bond, in picometres." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthTriple = { "BondLengthTriple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomData, BondLengthTriple), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthTriple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthTriple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_AtomicNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_ElementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthDouble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomData_Statics::NewProp_BondLengthTriple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomData",
		sizeof(FAtomData),
		alignof(FAtomData),
		Z_Construct_UScriptStruct_FAtomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomData"), sizeof(FAtomData), Get_Z_Construct_UScriptStruct_FAtomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomData_Hash() { return 134263607U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
