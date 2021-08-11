// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/AtomPrototype.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomPrototype() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAtomPrototype();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAtomPrototype::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAtomPrototype_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomPrototype, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("AtomPrototype"), sizeof(FAtomPrototype), Get_Z_Construct_UScriptStruct_FAtomPrototype_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FAtomPrototype>()
{
	return FAtomPrototype::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomPrototype(FAtomPrototype::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("AtomPrototype"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomPrototype
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomPrototype()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomPrototype")),new UScriptStruct::TCppStructOps<FAtomPrototype>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFAtomPrototype;
	struct Z_Construct_UScriptStruct_FAtomPrototype_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SerialNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPrototype_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/AtomPrototype.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomPrototype>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Symbol_MetaData[] = {
		{ "Comment", "/** English Symbol of the Atom */" },
		{ "ModuleRelativePath", "Private/AtomPrototype.h" },
		{ "ToolTip", "English Symbol of the Atom" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomPrototype, Symbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Symbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** The initial position of the atom */" },
		{ "ModuleRelativePath", "Private/AtomPrototype.h" },
		{ "ToolTip", "The initial position of the atom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomPrototype, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "Comment", "/** The serial number of the atom in the molecule (used by other entries in the PDB file. */" },
		{ "ModuleRelativePath", "Private/AtomPrototype.h" },
		{ "ToolTip", "The serial number of the atom in the molecule (used by other entries in the PDB file." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomPrototype, SerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_SerialNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomPrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Symbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomPrototype_Statics::NewProp_SerialNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomPrototype_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		nullptr,
		&NewStructOps,
		"AtomPrototype",
		sizeof(FAtomPrototype),
		alignof(FAtomPrototype),
		Z_Construct_UScriptStruct_FAtomPrototype_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPrototype_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomPrototype_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomPrototype_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomPrototype()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomPrototype_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomPrototype"), sizeof(FAtomPrototype), Get_Z_Construct_UScriptStruct_FAtomPrototype_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomPrototype_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomPrototype_Hash() { return 827506187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
