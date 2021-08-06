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
	DEFINE_FUNCTION(AMolecule::execGetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
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
	DEFINE_FUNCTION(AMolecule::execGetMolecularFormula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMolecularFormula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMolecule::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void AMolecule::StaticRegisterNativesAMolecule()
	{
		UClass* Class = AMolecule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngularVelocity", &AMolecule::execGetAngularVelocity },
			{ "GetDipoleMoment", &AMolecule::execGetDipoleMoment },
			{ "GetInteractingMolecules", &AMolecule::execGetInteractingMolecules },
			{ "GetMolecularFormula", &AMolecule::execGetMolecularFormula },
			{ "GetName", &AMolecule::execGetName },
			{ "GetOrientation", &AMolecule::execGetOrientation },
			{ "GetPosition", &AMolecule::execGetPosition },
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
		{ "ModuleRelativePath", "Private/Molecule.h" },
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
	struct Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics
	{
		struct Molecule_eventGetMolecularFormula_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetMolecularFormula_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Chemical formula for the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Chemical formula for the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetMolecularFormula", nullptr, nullptr, sizeof(Molecule_eventGetMolecularFormula_Parms), Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetMolecularFormula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetMolecularFormula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetName_Statics
	{
		struct Molecule_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMolecule_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** The name of this molecule (\"water\" etc.). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "The name of this molecule (\"water\" etc.)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetName", nullptr, nullptr, sizeof(Molecule_eventGetName_Parms), Z_Construct_UFunction_AMolecule_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetOrientation_Statics
	{
		struct Molecule_eventGetOrientation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMolecule_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//FVector GetVelocity();\n" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "UFUNCTION()\nFVector GetVelocity();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetOrientation", nullptr, nullptr, sizeof(Molecule_eventGetOrientation_Parms), Z_Construct_UFunction_AMolecule_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMolecule_GetPosition_Statics
	{
		struct Molecule_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMolecule_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Molecule_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMolecule_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMolecule_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMolecule_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return location of the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "@return location of the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMolecule_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMolecule, nullptr, "GetPosition", nullptr, nullptr, sizeof(Molecule_eventGetPosition_Parms), Z_Construct_UFunction_AMolecule_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMolecule_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMolecule_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMolecule_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMolecule_GetPosition_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPrototype_MetaData[];
#endif
		static void NewProp_IsPrototype_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPrototype;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MolecularFormula_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MolecularFormula;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
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
		{ &Z_Construct_UFunction_AMolecule_GetAngularVelocity, "GetAngularVelocity" }, // 157379814
		{ &Z_Construct_UFunction_AMolecule_GetDipoleMoment, "GetDipoleMoment" }, // 32862051
		{ &Z_Construct_UFunction_AMolecule_GetInteractingMolecules, "GetInteractingMolecules" }, // 743469675
		{ &Z_Construct_UFunction_AMolecule_GetMolecularFormula, "GetMolecularFormula" }, // 598188559
		{ &Z_Construct_UFunction_AMolecule_GetName, "GetName" }, // 3085442495
		{ &Z_Construct_UFunction_AMolecule_GetOrientation, "GetOrientation" }, // 806293767
		{ &Z_Construct_UFunction_AMolecule_GetPosition, "GetPosition" }, // 1625893852
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
		{ "Comment", "/** Marker showing the location of the center of mass. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Marker showing the location of the center of mass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator = { "CenterOfMassIndicator", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, CenterOfMassIndicator), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype_MetaData[] = {
		{ "Comment", "/** Is this a \"prototype\" molecule?  (If so, don't draw or interact.) */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Is this a \"prototype\" molecule?  (If so, don't draw or interact.)" },
	};
#endif
	void Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype_SetBit(void* Obj)
	{
		((AMolecule*)Obj)->IsPrototype = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype = { "IsPrototype", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMolecule), &Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the molecule (\"water\" etc). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Name of the molecule (\"water\" etc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Name), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_MolecularFormula_MetaData[] = {
		{ "Comment", "/** Chemical formula for the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Chemical formula for the molecule." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_MolecularFormula = { "MolecularFormula", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, MolecularFormula), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_MolecularFormula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_MolecularFormula_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_Inner = { "Atoms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData[] = {
		{ "Comment", "/** List of atoms in this molecule.  Atom positions are relative to molecule's origin. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of atoms in this molecule.  Atom positions are relative to molecule's origin." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms = { "Atoms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Atoms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_Inner = { "Bonds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABond_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData[] = {
		{ "Comment", "/** List of bonds between atoms. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of bonds between atoms." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds = { "Bonds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Bonds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Comment", "/** Sum of all the atom masses in the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Sum of all the atom masses in the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, TotalMass), METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData[] = {
		{ "Comment", "/** Dipole moment of the molecule, in appropriate units. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Dipole moment of the molecule, in appropriate units." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment = { "DipoleMoment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, DipoleMoment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_Inner = { "InteractingMolecules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData[] = {
		{ "Comment", "/** List of molecules within this molecule's interaction radius. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "List of molecules within this molecule's interaction radius." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules = { "InteractingMolecules", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, InteractingMolecules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Orientation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Private/Molecule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "/** Rate of rotation of the molecule. */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Rate of rotation of the molecule." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData[] = {
		{ "Comment", "/** Net force on the molecule (calculated by Simulation). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Net force on the molecule (calculated by Simulation)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce = { "NetForce", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, NetForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_NetForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData[] = {
		{ "Comment", "/** Net torque on the molecule (calculated by Simulation). */" },
		{ "ModuleRelativePath", "Private/Molecule.h" },
		{ "ToolTip", "Net torque on the molecule (calculated by Simulation)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque = { "NetTorque", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMolecule, NetTorque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMolecule_Statics::NewProp_NetTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMolecule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_CenterOfMassIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_IsPrototype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_MolecularFormula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Atoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Bonds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_TotalMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_DipoleMoment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_InteractingMolecules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMolecule_Statics::NewProp_Velocity,
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
	IMPLEMENT_CLASS(AMolecule, 2239419586);
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
