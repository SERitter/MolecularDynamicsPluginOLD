// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/BondPrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBondPrototype() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBondPrototype();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	MOLECULARDYNAMICSPLUGIN_API UEnum* Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType();
// End Cross Module References
class UScriptStruct* FBondPrototype::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBondPrototype_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBondPrototype, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("BondPrototype"), sizeof(FBondPrototype), Get_Z_Construct_UScriptStruct_FBondPrototype_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FBondPrototype>()
{
	return FBondPrototype::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBondPrototype(FBondPrototype::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("BondPrototype"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFBondPrototype
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFBondPrototype()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BondPrototype")),new UScriptStruct::TCppStructOps<FBondPrototype>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFBondPrototype;
	struct Z_Construct_UScriptStruct_FBondPrototype_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BondType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BondType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BondType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBondPrototype_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BondPrototype.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBondPrototype_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBondPrototype>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType_MetaData[] = {
		{ "Comment", "/** Type of bond (\"single\", \"double\", etc). */" },
		{ "ModuleRelativePath", "Private/BondPrototype.h" },
		{ "ToolTip", "Type of bond (\"single\", \"double\", etc)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType = { "BondType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBondPrototype, BondType), Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexA_MetaData[] = {
		{ "Comment", "/** Index of Atom at one end of the bond, in the molecule's Atoms array.  This should be the SMALLER of the two atom indices. */" },
		{ "ModuleRelativePath", "Private/BondPrototype.h" },
		{ "ToolTip", "Index of Atom at one end of the bond, in the molecule's Atoms array.  This should be the SMALLER of the two atom indices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexA = { "IndexA", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBondPrototype, IndexA), METADATA_PARAMS(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexB_MetaData[] = {
		{ "Comment", "/** Index of Atom at the other end of the bond, in the molecule's Atoms array.  This should be the LARGER of the two atom indices. */" },
		{ "ModuleRelativePath", "Private/BondPrototype.h" },
		{ "ToolTip", "Index of Atom at the other end of the bond, in the molecule's Atoms array.  This should be the LARGER of the two atom indices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexB = { "IndexB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBondPrototype, IndexB), METADATA_PARAMS(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBondPrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_BondType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBondPrototype_Statics::NewProp_IndexB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBondPrototype_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		nullptr,
		&NewStructOps,
		"BondPrototype",
		sizeof(FBondPrototype),
		alignof(FBondPrototype),
		Z_Construct_UScriptStruct_FBondPrototype_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBondPrototype_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBondPrototype_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBondPrototype_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBondPrototype()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBondPrototype_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BondPrototype"), sizeof(FBondPrototype), Get_Z_Construct_UScriptStruct_FBondPrototype_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBondPrototype_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBondPrototype_Hash() { return 1687550629U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
