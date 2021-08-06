// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/Bond.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBond() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ABond_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ABond();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AAtom_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABond::execUpdateBondLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBondLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execUpdateBondEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBondEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execSetAtomB)
	{
		P_GET_OBJECT(AAtom,Z_Param_Atom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomB(Z_Param_Atom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execSetAtomA)
	{
		P_GET_OBJECT(AAtom,Z_Param_Atom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomA(Z_Param_Atom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetAtomB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtom**)Z_Param__Result=P_THIS->GetAtomB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetAtomA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtom**)Z_Param__Result=P_THIS->GetAtomA();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetBondLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBondLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetBondEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBondEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetBondType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBondType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execGetBondName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBondName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execInitBondCopy)
	{
		P_GET_OBJECT(ABond,Z_Param_Source);
		P_GET_OBJECT(AAtom,Z_Param_AtomA);
		P_GET_OBJECT(AAtom,Z_Param_AtomB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBondCopy(Z_Param_Source,Z_Param_AtomA,Z_Param_AtomB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execInitBondPrototype)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EquilibriumLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpringConstant);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBondPrototype(Z_Param_Name,Z_Param_Type,Z_Param_EquilibriumLength,Z_Param_SpringConstant,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABond::execInitBond)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EquilibriumLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpringConstant);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_OBJECT(AAtom,Z_Param_AtomA);
		P_GET_OBJECT(AAtom,Z_Param_AtomB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBond(Z_Param_Name,Z_Param_Type,Z_Param_EquilibriumLength,Z_Param_SpringConstant,Z_Param_Color,Z_Param_AtomA,Z_Param_AtomB);
		P_NATIVE_END;
	}
	void ABond::StaticRegisterNativesABond()
	{
		UClass* Class = ABond::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtomA", &ABond::execGetAtomA },
			{ "GetAtomB", &ABond::execGetAtomB },
			{ "GetBondEnergy", &ABond::execGetBondEnergy },
			{ "GetBondLength", &ABond::execGetBondLength },
			{ "GetBondName", &ABond::execGetBondName },
			{ "GetBondType", &ABond::execGetBondType },
			{ "InitBond", &ABond::execInitBond },
			{ "InitBondCopy", &ABond::execInitBondCopy },
			{ "InitBondPrototype", &ABond::execInitBondPrototype },
			{ "SetAtomA", &ABond::execSetAtomA },
			{ "SetAtomB", &ABond::execSetAtomB },
			{ "UpdateBondEnergy", &ABond::execUpdateBondEnergy },
			{ "UpdateBondLength", &ABond::execUpdateBondLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABond_GetAtomA_Statics
	{
		struct Bond_eventGetAtomA_Parms
		{
			AAtom* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_GetAtomA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetAtomA_Parms, ReturnValue), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetAtomA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetAtomA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetAtomA_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return Pointer to the atom at one end of the bond.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "@return Pointer to the atom at one end of the bond." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetAtomA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetAtomA", nullptr, nullptr, sizeof(Bond_eventGetAtomA_Parms), Z_Construct_UFunction_ABond_GetAtomA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetAtomA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetAtomA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetAtomA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetAtomA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetAtomA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_GetAtomB_Statics
	{
		struct Bond_eventGetAtomB_Parms
		{
			AAtom* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_GetAtomB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetAtomB_Parms, ReturnValue), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetAtomB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetAtomB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetAtomB_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return Pointer to the atom at one end of the bond.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "@return Pointer to the atom at one end of the bond." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetAtomB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetAtomB", nullptr, nullptr, sizeof(Bond_eventGetAtomB_Parms), Z_Construct_UFunction_ABond_GetAtomB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetAtomB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetAtomB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetAtomB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetAtomB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetAtomB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_GetBondEnergy_Statics
	{
		struct Bond_eventGetBondEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_GetBondEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetBondEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetBondEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetBondEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetBondEnergy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Accesses the energy value for the bond\n\x09 * @return - The current Energy of this bond\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Accesses the energy value for the bond\n@return - The current Energy of this bond" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetBondEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetBondEnergy", nullptr, nullptr, sizeof(Bond_eventGetBondEnergy_Parms), Z_Construct_UFunction_ABond_GetBondEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetBondEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetBondEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetBondEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_GetBondLength_Statics
	{
		struct Bond_eventGetBondLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_GetBondLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetBondLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetBondLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetBondLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetBondLength_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Accesses the bond length for the bond\n\x09 * @return - The stored bond length\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Accesses the bond length for the bond\n@return - The stored bond length" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetBondLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetBondLength", nullptr, nullptr, sizeof(Bond_eventGetBondLength_Parms), Z_Construct_UFunction_ABond_GetBondLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetBondLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetBondLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetBondLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_GetBondName_Statics
	{
		struct Bond_eventGetBondName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_GetBondName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetBondName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetBondName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetBondName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetBondName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The identifier for the bond prototype.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "@return The identifier for the bond prototype." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetBondName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetBondName", nullptr, nullptr, sizeof(Bond_eventGetBondName_Parms), Z_Construct_UFunction_ABond_GetBondName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetBondName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetBondName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetBondName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_GetBondType_Statics
	{
		struct Bond_eventGetBondType_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_GetBondType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventGetBondType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_GetBondType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_GetBondType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_GetBondType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The type of bond (single, double, etc).\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "@return The type of bond (single, double, etc)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_GetBondType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "GetBondType", nullptr, nullptr, sizeof(Bond_eventGetBondType_Parms), Z_Construct_UFunction_ABond_GetBondType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_GetBondType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_GetBondType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_GetBondType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_GetBondType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_InitBond_Statics
	{
		struct Bond_eventInitBond_Parms
		{
			FString Name;
			FString Type;
			float EquilibriumLength;
			float SpringConstant;
			FLinearColor Color;
			AAtom* AtomA;
			AAtom* AtomB;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquilibriumLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringConstant;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_EquilibriumLength = { "EquilibriumLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, EquilibriumLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_SpringConstant = { "SpringConstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, SpringConstant), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_AtomA = { "AtomA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, AtomA), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_AtomB = { "AtomB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBond_Parms, AtomB), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_InitBond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_EquilibriumLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_SpringConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_AtomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBond_Statics::NewProp_AtomB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_InitBond_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Construct a bond with the given properties, connected to the given atoms.\n\x09 * Use this constructor if you're not making \"prototype\" bonds.\n\x09 * @param Name - String to identify the bond.\n\x09 * @param Type - Type of bond (hydrogen, single, double, etc.).\n\x09 * @param EquilibriumLength - Bond length without oscillations etc., in Angstroms.\n\x09 * @param SpringConstant - Measure of bond strength, in kcal/(mol*A^2).\n\x09 * @param Color - What colour to use when drawing this bond.\n\x09 * @param AtomA - The first atom to connect to.\n\x09 * @param AtomB - The second atom to connect to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Construct a bond with the given properties, connected to the given atoms.\nUse this constructor if you're not making \"prototype\" bonds.\n@param Name - String to identify the bond.\n@param Type - Type of bond (hydrogen, single, double, etc.).\n@param EquilibriumLength - Bond length without oscillations etc., in Angstroms.\n@param SpringConstant - Measure of bond strength, in kcal/(mol*A^2).\n@param Color - What colour to use when drawing this bond.\n@param AtomA - The first atom to connect to.\n@param AtomB - The second atom to connect to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_InitBond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "InitBond", nullptr, nullptr, sizeof(Bond_eventInitBond_Parms), Z_Construct_UFunction_ABond_InitBond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_InitBond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_InitBond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_InitBond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_InitBondCopy_Statics
	{
		struct Bond_eventInitBondCopy_Parms
		{
			ABond* Source;
			AAtom* AtomA;
			AAtom* AtomB;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondCopy_Parms, Source), Z_Construct_UClass_ABond_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_AtomA = { "AtomA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondCopy_Parms, AtomA), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_AtomB = { "AtomB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondCopy_Parms, AtomB), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_InitBondCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_AtomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondCopy_Statics::NewProp_AtomB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_InitBondCopy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Copy constructor.  Copies properties from the Source, and connects the\n\x09 * bond to the specified atoms.\n\x09 * @param Source - The object to copy properties from.\n\x09 * @param AtomA - The first atom to connect to.\n\x09 * @param AtomB - The second atom to connect to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Copy constructor.  Copies properties from the Source, and connects the\nbond to the specified atoms.\n@param Source - The object to copy properties from.\n@param AtomA - The first atom to connect to.\n@param AtomB - The second atom to connect to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_InitBondCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "InitBondCopy", nullptr, nullptr, sizeof(Bond_eventInitBondCopy_Parms), Z_Construct_UFunction_ABond_InitBondCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBondCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_InitBondCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBondCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_InitBondCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_InitBondCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_InitBondPrototype_Statics
	{
		struct Bond_eventInitBondPrototype_Parms
		{
			FString Name;
			FString Type;
			float EquilibriumLength;
			float SpringConstant;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquilibriumLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringConstant;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondPrototype_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondPrototype_Parms, Type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_EquilibriumLength = { "EquilibriumLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondPrototype_Parms, EquilibriumLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_SpringConstant = { "SpringConstant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondPrototype_Parms, SpringConstant), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventInitBondPrototype_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_InitBondPrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_EquilibriumLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_SpringConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_InitBondPrototype_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_InitBondPrototype_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Construct a prototype bond.  Does not connect to any atoms.\n\x09 * @param Name - String to identify the bond.\n\x09 * @param Type - Type of bond (hydrogen, single, double, etc.).\n\x09 * @param EquilibriumLength - Bond length without oscillations etc., in Angstroms.\n\x09 * @param SpringConstant - Measure of bond strength, in kcal/(mol*A^2).\n\x09 * @param Color - What colour to use when drawing this bond.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Construct a prototype bond.  Does not connect to any atoms.\n@param Name - String to identify the bond.\n@param Type - Type of bond (hydrogen, single, double, etc.).\n@param EquilibriumLength - Bond length without oscillations etc., in Angstroms.\n@param SpringConstant - Measure of bond strength, in kcal/(mol*A^2).\n@param Color - What colour to use when drawing this bond." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_InitBondPrototype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "InitBondPrototype", nullptr, nullptr, sizeof(Bond_eventInitBondPrototype_Parms), Z_Construct_UFunction_ABond_InitBondPrototype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBondPrototype_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_InitBondPrototype_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_InitBondPrototype_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_InitBondPrototype()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_InitBondPrototype_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_SetAtomA_Statics
	{
		struct Bond_eventSetAtomA_Parms
		{
			AAtom* Atom;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Atom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_SetAtomA_Statics::NewProp_Atom = { "Atom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventSetAtomA_Parms, Atom), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_SetAtomA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_SetAtomA_Statics::NewProp_Atom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_SetAtomA_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Connects one end of the bond to the given atom.\n\x09 * @param Atom - The atom to connect to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Connects one end of the bond to the given atom.\n@param Atom - The atom to connect to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_SetAtomA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "SetAtomA", nullptr, nullptr, sizeof(Bond_eventSetAtomA_Parms), Z_Construct_UFunction_ABond_SetAtomA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_SetAtomA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_SetAtomA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_SetAtomA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_SetAtomA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_SetAtomA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_SetAtomB_Statics
	{
		struct Bond_eventSetAtomB_Parms
		{
			AAtom* Atom;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Atom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABond_SetAtomB_Statics::NewProp_Atom = { "Atom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bond_eventSetAtomB_Parms, Atom), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABond_SetAtomB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABond_SetAtomB_Statics::NewProp_Atom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_SetAtomB_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Connects one end of the bond to the given atom.\n\x09 * @param Atom - The atom to connect to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Connects one end of the bond to the given atom.\n@param Atom - The atom to connect to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_SetAtomB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "SetAtomB", nullptr, nullptr, sizeof(Bond_eventSetAtomB_Parms), Z_Construct_UFunction_ABond_SetAtomB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_SetAtomB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_SetAtomB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_SetAtomB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_SetAtomB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_SetAtomB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculates the energy stored in the bond */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Calculates the energy stored in the bond" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "UpdateBondEnergy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_UpdateBondEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_UpdateBondEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABond_UpdateBondLength_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABond_UpdateBondLength_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculates the distance between the two atoms involved in the bond */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Calculates the distance between the two atoms involved in the bond" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABond_UpdateBondLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABond, nullptr, "UpdateBondLength", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABond_UpdateBondLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABond_UpdateBondLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABond_UpdateBondLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABond_UpdateBondLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABond_NoRegister()
	{
		return ABond::StaticClass();
	}
	struct Z_Construct_UClass_ABond_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquilibriumLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquilibriumLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Representation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Representation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABond_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABond_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABond_GetAtomA, "GetAtomA" }, // 3737464154
		{ &Z_Construct_UFunction_ABond_GetAtomB, "GetAtomB" }, // 3153715919
		{ &Z_Construct_UFunction_ABond_GetBondEnergy, "GetBondEnergy" }, // 2374310474
		{ &Z_Construct_UFunction_ABond_GetBondLength, "GetBondLength" }, // 77447082
		{ &Z_Construct_UFunction_ABond_GetBondName, "GetBondName" }, // 856759968
		{ &Z_Construct_UFunction_ABond_GetBondType, "GetBondType" }, // 4181493456
		{ &Z_Construct_UFunction_ABond_InitBond, "InitBond" }, // 1681150175
		{ &Z_Construct_UFunction_ABond_InitBondCopy, "InitBondCopy" }, // 3799113744
		{ &Z_Construct_UFunction_ABond_InitBondPrototype, "InitBondPrototype" }, // 3097284275
		{ &Z_Construct_UFunction_ABond_SetAtomA, "SetAtomA" }, // 2548230894
		{ &Z_Construct_UFunction_ABond_SetAtomB, "SetAtomB" }, // 4053051283
		{ &Z_Construct_UFunction_ABond_UpdateBondEnergy, "UpdateBondEnergy" }, // 309497019
		{ &Z_Construct_UFunction_ABond_UpdateBondLength, "UpdateBondLength" }, // 1298843986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bond.h" },
		{ "ModuleRelativePath", "Private/Bond.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_AtomA_MetaData[] = {
		{ "Comment", "/** A pointer to AtomA in the bond */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "A pointer to AtomA in the bond" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_AtomA = { "AtomA", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, AtomA), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_AtomA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_AtomA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_AtomB_MetaData[] = {
		{ "Comment", "/** A pointer to AtomB in the bond */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "A pointer to AtomB in the bond" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_AtomB = { "AtomB", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, AtomB), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_AtomB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_AtomB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Identifier for the prototype of this bond. */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Identifier for the prototype of this bond." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Name), METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of bond (hydrogen, single, double, etc.). */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Type of bond (hydrogen, single, double, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Type), METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_EquilibriumLength_MetaData[] = {
		{ "Comment", "/** Stores the Equilibrium BondLength in [Angstroms] */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores the Equilibrium BondLength in [Angstroms]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_EquilibriumLength = { "EquilibriumLength", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, EquilibriumLength), METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_EquilibriumLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_EquilibriumLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Length_MetaData[] = {
		{ "Comment", "/** Stores the Current BondLength in [Angstroms] */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores the Current BondLength in [Angstroms]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Length), METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_SpringConstant_MetaData[] = {
		{ "Comment", "/** Stores the bond spring constant in [eV/(mol*A^2)] */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores the bond spring constant in [eV/(mol*A^2)]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_SpringConstant = { "SpringConstant", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, SpringConstant), METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_SpringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_SpringConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Representation_MetaData[] = {
		{ "Comment", "/** Stores a representation of the bond for use in engine. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores a representation of the bond for use in engine." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Representation = { "Representation", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Representation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Representation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Representation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Stores the material for the static mesh of the representation. */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores the material for the static mesh of the representation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABond_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/** Stores the desired Color for the Material for the representation. */" },
		{ "ModuleRelativePath", "Private/Bond.h" },
		{ "ToolTip", "Stores the desired Color for the Material for the representation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABond_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABond, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_AtomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_AtomB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_EquilibriumLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_SpringConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Representation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABond_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABond_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABond>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABond_Statics::ClassParams = {
		&ABond::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABond_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABond_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABond_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABond()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABond_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABond, 1659499711);
	template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<ABond>()
	{
		return ABond::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABond(Z_Construct_UClass_ABond, &ABond::StaticClass, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("ABond"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABond);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
