// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/Molecule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMolecule() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AMolecule_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AMolecule();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AAtom_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ABond_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMolecule::execGetInteractingMolecules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AMolecule*>*)Z_Param__Result=P_THIS->GetInteractingMolecules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execSetInteractingMolecules)
	{
		P_GET_TARRAY(AMolecule*,Z_Param_MoleculeList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractingMolecules(Z_Param_MoleculeList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetNumAtoms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumAtoms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetDipoleMoment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDipoleMoment();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetTotalMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetMoleculeFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMoleculeFormula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetMoleculeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMoleculeName();
		P_NATIVE_END;
	}
	void AMolecule::StaticRegisterNativesAMolecule()
	{
		UClass* Class = AMolecule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngularVelocity", &AMolecule::execGetAngularVelocity },
			{ "GetDipoleMoment", &AMolecule::execGetDipoleMoment },
			{ "GetInteractingMolecules", &AMolecule::execGetInteractingMolecules },
			{ "GetMoleculeFormula", &AMolecule::execGetMoleculeFormula },
			{ "GetMoleculeName", &AMolecule::execGetMoleculeName },
			{ "GetNumAtoms", &AMolecule::execGetNumAtoms },
			{ "GetTotalMass", &AMolecule::execGetTotalMass },
			{ "SetInteractingMolecules", &AMolecule::execSetInteractingMolecules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics
	{
		struct Molecule_eventGetAngularVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09UFUNCTION()\n//\x09\x09""FVector GetOrientation();\n" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "UFUNCTION()\n       FVector GetOrientation();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetAngularVelocity", nullptr, nullptr, sizeof(Molecule_eventGetAngularVelocity_Parms), Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics
	{
		struct Molecule_eventGetDipoleMoment_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetDipoleMoment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dipole moment of the molecule, in appropriate units. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Dipole moment of the molecule, in appropriate units." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetDipoleMoment", nullptr, nullptr, sizeof(Molecule_eventGetDipoleMoment_Parms), Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetDipoleMoment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetDipoleMoment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics
	{
		struct Molecule_eventGetInteractingMolecules_Parms
		{
			TArray<AMolecule*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetInteractingMolecules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetInteractingMolecules", nullptr, nullptr, sizeof(Molecule_eventGetInteractingMolecules_Parms), Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetInteractingMolecules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetInteractingMolecules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics
	{
		struct Molecule_eventGetMoleculeFormula_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetMoleculeFormula_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Chemical formula for the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Chemical formula for the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetMoleculeFormula", nullptr, nullptr, sizeof(Molecule_eventGetMoleculeFormula_Parms), Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetMoleculeFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetMoleculeFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics
	{
		struct Molecule_eventGetMoleculeName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetMoleculeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** The name of this molecule (\"water\" etc.). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "The name of this molecule (\"water\" etc.)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetMoleculeName", nullptr, nullptr, sizeof(Molecule_eventGetMoleculeName_Parms), Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetMoleculeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetMoleculeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics
	{
		struct Molecule_eventGetNumAtoms_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetNumAtoms_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetNumAtoms", nullptr, nullptr, sizeof(Molecule_eventGetNumAtoms_Parms), Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetNumAtoms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetNumAtoms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetTotalMass_Statics
	{
		struct Molecule_eventGetTotalMass_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetTotalMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sum of all the atom masses in the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Sum of all the atom masses in the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetTotalMass", nullptr, nullptr, sizeof(Molecule_eventGetTotalMass_Parms), Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetTotalMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetTotalMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics
	{
		struct Molecule_eventSetInteractingMolecules_Parms
		{
			TArray<AMolecule*> MoleculeList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoleculeList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoleculeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::NewProp_MoleculeList_Inner = { "MoleculeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::NewProp_MoleculeList = { "MoleculeList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventSetInteractingMolecules_Parms, MoleculeList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::NewProp_MoleculeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::NewProp_MoleculeList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Record the list of molecules that are within this molecule's interaction radius.\n\x09 * ASimulation will make a list like this for each molecule, then use it when calculating the forces on the molecule.\n\x09 * (NOTE: Check how Unreal handles many-body forces like this; it might have\n\x09 * a preferred way to handle them.)\n\x09 * */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Record the list of molecules that are within this molecule's interaction radius.\nASimulation will make a list like this for each molecule, then use it when calculating the forces on the molecule.\n(NOTE: Check how Unreal handles many-body forces like this; it might have\na preferred way to handle them.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "SetInteractingMolecules", nullptr, nullptr, sizeof(Molecule_eventSetInteractingMolecules_Parms), Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_SetInteractingMolecules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_SetInteractingMolecules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMolecule_NoRegister()
	{
		return AMolecule::StaticClass();
	}
	struct Z_Construct_UClass_AMolecule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterOfMassIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterOfMassIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoleculeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoleculeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoleculeFormula_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoleculeFormula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoleculeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoleculeIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Atoms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atoms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Atoms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bonds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bonds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bonds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DipoleMoment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DipoleMoment;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingMolecules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingMolecules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractingMolecules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMolecule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMolecule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMolecule_GetAngularVelocity, "GetAngularVelocity" }, // 1562004217
		{ &Z_Construct_UFunction_AMolecule_GetDipoleMoment, "GetDipoleMoment" }, // 32862051
		{ &Z_Construct_UFunction_AMolecule_GetInteractingMolecules, "GetInteractingMolecules" }, // 743469675
		{ &Z_Construct_UFunction_AMolecule_GetMoleculeFormula, "GetMoleculeFormula" }, // 3929660526
		{ &Z_Construct_UFunction_AMolecule_GetMoleculeName, "GetMoleculeName" }, // 1928229059
		{ &Z_Construct_UFunction_AMolecule_GetNumAtoms, "GetNumAtoms" }, // 2825258069
		{ &Z_Construct_UFunction_AMolecule_GetTotalMass, "GetTotalMass" }, // 1028086547
		{ &Z_Construct_UFunction_AMolecule_SetInteractingMolecules, "SetInteractingMolecules" }, // 413624340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Molecule.h" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Marker showing the location of the center of mass. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Marker showing the location of the center of mass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator = { "CenterOfMassIndicator", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, CenterOfMassIndicator), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeName_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Name of the molecule (\"water\" etc).\n\x09 */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Name of the molecule (\"water\" etc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeName = { "MoleculeName", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, MoleculeName), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeFormula_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Chemical formula for the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Chemical formula for the molecule." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeFormula = { "MoleculeFormula", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, MoleculeFormula), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeFormula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeFormula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeIndex_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeIndex = { "MoleculeIndex", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, MoleculeIndex), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_Inner = { "Atoms", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** List of atoms in this molecule.  Atom positions are relative to molecule's origin. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of atoms in this molecule.  Atom positions are relative to molecule's origin." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms = { "Atoms", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Atoms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_Inner = { "Bonds", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABond_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** List of bonds between atoms. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of bonds between atoms." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds = { "Bonds", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Bonds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Sum of all the atom masses in the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Sum of all the atom masses in the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, TotalMass), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Dipole moment of the molecule, in appropriate units. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Dipole moment of the molecule, in appropriate units." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment = { "DipoleMoment", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, DipoleMoment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_Inner = { "InteractingMolecules", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** List of molecules within this molecule's interaction radius. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of molecules within this molecule's interaction radius." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules = { "InteractingMolecules", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, InteractingMolecules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Rate of rotation of the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Rate of rotation of the molecule." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Net force on the molecule (calculated by Simulation). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Net force on the molecule (calculated by Simulation)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce = { "NetForce", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, NetForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Net torque on the molecule (calculated by Simulation). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Net torque on the molecule (calculated by Simulation)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque = { "NetTorque", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, NetTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMolecule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeFormula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_MoleculeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMolecule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMolecule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMolecule_Statics::ClassParams = {
		&AMolecule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMolecule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMolecule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMolecule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMolecule, 116290618);
	template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<AMolecule>()
	{
		return AMolecule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMolecule(Z_Construct_UClass_AMolecule, &AMolecule::StaticClass, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("AMolecule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMolecule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
