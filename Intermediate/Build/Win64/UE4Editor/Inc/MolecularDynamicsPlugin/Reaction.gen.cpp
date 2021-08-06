// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/Reaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReaction() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReaction();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
// End Cross Module References
class UScriptStruct* FReaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOLECULARDYNAMICSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FReaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReaction, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("Reaction"), sizeof(FReaction), Get_Z_Construct_UScriptStruct_FReaction_Hash());
	}
	return Singleton;
}
template<> MOLECULARDYNAMICSPLUGIN_API UScriptStruct* StaticStruct<FReaction>()
{
	return FReaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReaction(FReaction::StaticStruct, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("Reaction"), false, nullptr, nullptr);
static struct FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFReaction
{
	FScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFReaction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Reaction")),new UScriptStruct::TCppStructOps<FReaction>);
	}
} ScriptStruct_MolecularDynamicsPlugin_StaticRegisterNativesFReaction;
	struct Z_Construct_UScriptStruct_FReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactantAName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReactantAName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactantBName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReactantBName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionProbability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReactionProbability;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListOfProducts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfProducts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfProducts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyProduct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyProduct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReaction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantAName_MetaData[] = {
		{ "Comment", "/**English name of Reactant A molecule*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "English name of Reactant A molecule" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantAName = { "ReactantAName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, ReactantAName), METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantAName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantAName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantBName_MetaData[] = {
		{ "Comment", "/**English name of reactant B molecule*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "English name of reactant B molecule" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantBName = { "ReactantBName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, ReactantBName), METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantBName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantBName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyThreshold_MetaData[] = {
		{ "Comment", "/**Energy threshold required for the reaction to occur, in eV*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "Energy threshold required for the reaction to occur, in eV" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyThreshold = { "EnergyThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, EnergyThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactionProbability_MetaData[] = {
		{ "Comment", "/**Probability that the reaction will occur*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "Probability that the reaction will occur" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactionProbability = { "ReactionProbability", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, ReactionProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactionProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactionProbability_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts_Inner = { "ListOfProducts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts_MetaData[] = {
		{ "Comment", "/**An array of English names of molecules*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "An array of English names of molecules" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts = { "ListOfProducts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, ListOfProducts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyProduct_MetaData[] = {
		{ "Comment", "/**the amount of energy released in a reaction, in eV.*/" },
		{ "ModuleRelativePath", "Private/Reaction.h" },
		{ "ToolTip", "the amount of energy released in a reaction, in eV." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyProduct = { "EnergyProduct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReaction, EnergyProduct), METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyProduct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyProduct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantAName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactantBName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ReactionProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_ListOfProducts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReaction_Statics::NewProp_EnergyProduct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
		nullptr,
		&NewStructOps,
		"Reaction",
		sizeof(FReaction),
		alignof(FReaction),
		Z_Construct_UScriptStruct_FReaction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Reaction"), sizeof(FReaction), Get_Z_Construct_UScriptStruct_FReaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReaction_Hash() { return 53311841U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
