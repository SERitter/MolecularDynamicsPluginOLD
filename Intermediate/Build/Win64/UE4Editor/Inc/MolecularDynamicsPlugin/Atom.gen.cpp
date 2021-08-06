// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/Atom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AAtom_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AAtom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(AAtom::execGetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterial**)Z_Param__Result=P_THIS->GetMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetAtomIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAtomIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execSetMaterial)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execSetMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execSetAtomIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAtomIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetVanDerWaalsMagnitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVanDerWaalsMagnitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetVanDerWaalsRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVanDerWaalsRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetCovalentRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCovalentRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetCharge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCharge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execInitAtomExactCopy)
	{
		P_GET_OBJECT(AAtom,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitAtomExactCopy(Z_Param_Source);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execInitAtomCopy)
	{
		P_GET_OBJECT(AAtom,Z_Param_Source);
		P_GET_STRUCT(FVector,Z_Param_NewPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitAtomCopy(Z_Param_Source,Z_Param_NewPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtom::execInitAtomPrototype)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSymbol);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewType);
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCharge);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCovalentRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVanDerWaalsRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVanDerWaalsMagnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitAtomPrototype(Z_Param_NewName,Z_Param_NewSymbol,Z_Param_NewType,Z_Param_NewColor,Z_Param_NewMass,Z_Param_NewCharge,Z_Param_NewCovalentRadius,Z_Param_NewVanDerWaalsRadius,Z_Param_NewVanDerWaalsMagnitude);
		P_NATIVE_END;
	}
	void AAtom::StaticRegisterNativesAAtom()
	{
		UClass* Class = AAtom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtomIndex", &AAtom::execGetAtomIndex },
			{ "GetCharge", &AAtom::execGetCharge },
			{ "GetCovalentRadius", &AAtom::execGetCovalentRadius },
			{ "GetMass", &AAtom::execGetMass },
			{ "GetMaterial", &AAtom::execGetMaterial },
			{ "GetMesh", &AAtom::execGetMesh },
			{ "GetName", &AAtom::execGetName },
			{ "GetPosition", &AAtom::execGetPosition },
			{ "GetVanDerWaalsMagnitude", &AAtom::execGetVanDerWaalsMagnitude },
			{ "GetVanDerWaalsRadius", &AAtom::execGetVanDerWaalsRadius },
			{ "InitAtomCopy", &AAtom::execInitAtomCopy },
			{ "InitAtomExactCopy", &AAtom::execInitAtomExactCopy },
			{ "InitAtomPrototype", &AAtom::execInitAtomPrototype },
			{ "SetAtomIndex", &AAtom::execSetAtomIndex },
			{ "SetMaterial", &AAtom::execSetMaterial },
			{ "SetMesh", &AAtom::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtom_GetAtomIndex_Statics
	{
		struct Atom_eventGetAtomIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetAtomIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return this atom's index in its atom array, or -1 if not set.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return this atom's index in its atom array, or -1 if not set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetAtomIndex", nullptr, nullptr, sizeof(Atom_eventGetAtomIndex_Parms), Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetAtomIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetAtomIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetCharge_Statics
	{
		struct Atom_eventGetCharge_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_GetCharge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetCharge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetCharge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetCharge_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The net charge on this atom, in multiples of fundamental charges.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return The net charge on this atom, in multiples of fundamental charges." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetCharge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetCharge", nullptr, nullptr, sizeof(Atom_eventGetCharge_Parms), Z_Construct_UFunction_AAtom_GetCharge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetCharge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetCharge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetCharge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetCharge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetCharge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics
	{
		struct Atom_eventGetCovalentRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetCovalentRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The atom's covalent radius (i.e. size), in Angstroms.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return The atom's covalent radius (i.e. size), in Angstroms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetCovalentRadius", nullptr, nullptr, sizeof(Atom_eventGetCovalentRadius_Parms), Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetCovalentRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetCovalentRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetMass_Statics
	{
		struct Atom_eventGetMass_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_GetMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetMass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return Get the atom's mass, in atomic mass units (or g/mol).\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return Get the atom's mass, in atomic mass units (or g/mol)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetMass", nullptr, nullptr, sizeof(Atom_eventGetMass_Parms), Z_Construct_UFunction_AAtom_GetMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetMaterial_Statics
	{
		struct Atom_eventGetMaterial_Parms
		{
			UMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get the atom's current material. */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Get the atom's current material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetMaterial", nullptr, nullptr, sizeof(Atom_eventGetMaterial_Parms), Z_Construct_UFunction_AAtom_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetMesh_Statics
	{
		struct Atom_eventGetMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get the atom's current mesh. */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Get the atom's current mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetMesh", nullptr, nullptr, sizeof(Atom_eventGetMesh_Parms), Z_Construct_UFunction_AAtom_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetName_Statics
	{
		struct Atom_eventGetName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtom_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The name of this atom (in English, e.g. \"Oxygen\").\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return The name of this atom (in English, e.g. \"Oxygen\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetName", nullptr, nullptr, sizeof(Atom_eventGetName_Parms), Z_Construct_UFunction_AAtom_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetPosition_Statics
	{
		struct Atom_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtom_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return the 3D coordinates of the atom within the molecule.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return the 3D coordinates of the atom within the molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetPosition", nullptr, nullptr, sizeof(Atom_eventGetPosition_Parms), Z_Construct_UFunction_AAtom_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics
	{
		struct Atom_eventGetVanDerWaalsMagnitude_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetVanDerWaalsMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetVanDerWaalsMagnitude", nullptr, nullptr, sizeof(Atom_eventGetVanDerWaalsMagnitude_Parms), Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics
	{
		struct Atom_eventGetVanDerWaalsRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventGetVanDerWaalsRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The atom's Van Der Waals radius, in Angstroms.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "@return The atom's Van Der Waals radius, in Angstroms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "GetVanDerWaalsRadius", nullptr, nullptr, sizeof(Atom_eventGetVanDerWaalsRadius_Parms), Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_InitAtomCopy_Statics
	{
		struct Atom_eventInitAtomCopy_Parms
		{
			AAtom* Source;
			FVector NewPosition;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomCopy_Parms, Source), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomCopy_Parms, NewPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Makes a new atom with the same properties as the source, at the new\n\x09 * position.\n\x09 * @param Source - The prototype to copy properties from.\n\x09 * @param NewPosition - The position of the atom in the molecule, in angstroms.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Makes a new atom with the same properties as the source, at the new\nposition.\n@param Source - The prototype to copy properties from.\n@param NewPosition - The position of the atom in the molecule, in angstroms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "InitAtomCopy", nullptr, nullptr, sizeof(Atom_eventInitAtomCopy_Parms), Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_InitAtomCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_InitAtomCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics
	{
		struct Atom_eventInitAtomExactCopy_Parms
		{
			AAtom* Source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomExactCopy_Parms, Source), Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Makes a new atom with the same properties as the source, at the same position.\n\x09 * @param Source - The prototype to copy properties from.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Makes a new atom with the same properties as the source, at the same position.\n@param Source - The prototype to copy properties from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "InitAtomExactCopy", nullptr, nullptr, sizeof(Atom_eventInitAtomExactCopy_Parms), Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_InitAtomExactCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_InitAtomExactCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics
	{
		struct Atom_eventInitAtomPrototype_Parms
		{
			FString NewName;
			FString NewSymbol;
			FString NewType;
			FLinearColor NewColor;
			float NewMass;
			int32 NewCharge;
			float NewCovalentRadius;
			float NewVanDerWaalsRadius;
			float NewVanDerWaalsMagnitude;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSymbol;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCharge;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCovalentRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVanDerWaalsRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewVanDerWaalsMagnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewSymbol = { "NewSymbol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewSymbol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewMass = { "NewMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewCharge = { "NewCharge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewCharge), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewCovalentRadius = { "NewCovalentRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewCovalentRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewVanDerWaalsRadius = { "NewVanDerWaalsRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewVanDerWaalsRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewVanDerWaalsMagnitude = { "NewVanDerWaalsMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventInitAtomPrototype_Parms, NewVanDerWaalsMagnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewCovalentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewVanDerWaalsRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::NewProp_NewVanDerWaalsMagnitude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Initializes an atom prototype object.  The prototype has position, velocity, etc set to zero.\n\x09 * The AMBER 94 type lets us have atoms of the same element in different bond conditions, which will have different Van Der Waals parameters etc.\n\x09 * @param NewName - Full English name of the atom\n\x09 * @param NewSymbol - Atomic Symbol\n\x09 * @param NewType - AMBER 94 type of atom\n\x09 * @param NewColor - The colour to use for this atom.\n\x09 * @param NewMass - Mass of the atom, in atomic mass units (or g/mol).\n\x09 * @param NewCharge - Charge of the atom, in multiples of fundemental charges\n\x09 * @param NewCovalentRadius - Covalent Radius of the atom, in Angstroms\n\x09 * @param NewVanDerWaalsRadius - The AMBER94 van der Waals radius of the atom, in Angstroms\n\x09 * @param NewVanDerWaalsMagnitude - The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol\n\x09*/" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Initializes an atom prototype object.  The prototype has position, velocity, etc set to zero.\nThe AMBER 94 type lets us have atoms of the same element in different bond conditions, which will have different Van Der Waals parameters etc.\n@param NewName - Full English name of the atom\n@param NewSymbol - Atomic Symbol\n@param NewType - AMBER 94 type of atom\n@param NewColor - The colour to use for this atom.\n@param NewMass - Mass of the atom, in atomic mass units (or g/mol).\n@param NewCharge - Charge of the atom, in multiples of fundemental charges\n@param NewCovalentRadius - Covalent Radius of the atom, in Angstroms\n@param NewVanDerWaalsRadius - The AMBER94 van der Waals radius of the atom, in Angstroms\n@param NewVanDerWaalsMagnitude - The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "InitAtomPrototype", nullptr, nullptr, sizeof(Atom_eventInitAtomPrototype_Parms), Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_InitAtomPrototype()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_InitAtomPrototype_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_SetAtomIndex_Statics
	{
		struct Atom_eventSetAtomIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventSetAtomIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Record this atom's index in its molecule's atom array, to simplify lookups later.\n\x09 * @param Index - The array index, or -1 for none.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Record this atom's index in its molecule's atom array, to simplify lookups later.\n@param Index - The array index, or -1 for none." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "SetAtomIndex", nullptr, nullptr, sizeof(Atom_eventSetAtomIndex_Parms), Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_SetAtomIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_SetAtomIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_SetMaterial_Statics
	{
		struct Atom_eventSetMaterial_Parms
		{
			UMaterial* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventSetMaterial_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_SetMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Assign a material to this atom.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Assign a material to this atom." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Atom_eventSetMaterial_Parms), Z_Construct_UFunction_AAtom_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtom_SetMesh_Statics
	{
		struct Atom_eventSetMesh_Parms
		{
			UStaticMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_SetMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtom_SetMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom_eventSetMesh_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAtom_SetMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtom_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtom_SetMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtom_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Assign a mesh to this atom.\n\x09 * TODO: Find out if all of the atoms can use the same mesh and material or if each one needs its own copy.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Assign a mesh to this atom.\nTODO: Find out if all of the atoms can use the same mesh and material or if each one needs its own copy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtom_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtom, nullptr, "SetMesh", nullptr, nullptr, sizeof(Atom_eventSetMesh_Parms), Z_Construct_UFunction_AAtom_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtom_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtom_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtom_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtom_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtom_NoRegister()
	{
		return AAtom::StaticClass();
	}
	struct Z_Construct_UClass_AAtom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CovalentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CovalentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charge_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Charge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanDerWaalsRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VanDerWaalsRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanDerWaalsMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VanDerWaalsMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtomArrayIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtom_GetAtomIndex, "GetAtomIndex" }, // 4190708896
		{ &Z_Construct_UFunction_AAtom_GetCharge, "GetCharge" }, // 2492365407
		{ &Z_Construct_UFunction_AAtom_GetCovalentRadius, "GetCovalentRadius" }, // 505409952
		{ &Z_Construct_UFunction_AAtom_GetMass, "GetMass" }, // 370761998
		{ &Z_Construct_UFunction_AAtom_GetMaterial, "GetMaterial" }, // 1509013532
		{ &Z_Construct_UFunction_AAtom_GetMesh, "GetMesh" }, // 1076255001
		{ &Z_Construct_UFunction_AAtom_GetName, "GetName" }, // 373477483
		{ &Z_Construct_UFunction_AAtom_GetPosition, "GetPosition" }, // 4099586225
		{ &Z_Construct_UFunction_AAtom_GetVanDerWaalsMagnitude, "GetVanDerWaalsMagnitude" }, // 4294750192
		{ &Z_Construct_UFunction_AAtom_GetVanDerWaalsRadius, "GetVanDerWaalsRadius" }, // 983478647
		{ &Z_Construct_UFunction_AAtom_InitAtomCopy, "InitAtomCopy" }, // 2205400750
		{ &Z_Construct_UFunction_AAtom_InitAtomExactCopy, "InitAtomExactCopy" }, // 738256603
		{ &Z_Construct_UFunction_AAtom_InitAtomPrototype, "InitAtomPrototype" }, // 3565730102
		{ &Z_Construct_UFunction_AAtom_SetAtomIndex, "SetAtomIndex" }, // 2987894580
		{ &Z_Construct_UFunction_AAtom_SetMaterial, "SetMaterial" }, // 2815969083
		{ &Z_Construct_UFunction_AAtom_SetMesh, "SetMesh" }, // 2071306267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom.h" },
		{ "ModuleRelativePath", "Private/Atom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Full English name of the atom*/" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Full English name of the atom" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Name), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** AMBER 94 type of atom*/" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "AMBER 94 type of atom" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Type), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Symbol_MetaData[] = {
		{ "Comment", "/** Atomic Symbol*/" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Atomic Symbol" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Symbol), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Symbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_AtomRepresentation_MetaData[] = {
		{ "Comment", "/** Stores a representation of the bond for use in engine. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Stores a representation of the bond for use in engine." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_AtomRepresentation = { "AtomRepresentation", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, AtomRepresentation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_AtomRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_AtomRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_AtomMaterial_MetaData[] = {
		{ "Comment", "/** Stores the material for the static mesh of the representation. */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Stores the material for the static mesh of the representation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_AtomMaterial = { "AtomMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, AtomMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_AtomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_AtomMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Color_MetaData[] = {
		{ "Comment", "/** Stores the desired Color for the Material for the representation. */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Stores the desired Color for the Material for the representation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_CovalentRadius_MetaData[] = {
		{ "Comment", "/** Covalent Radius of the atom, in Angstroms*/" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Covalent Radius of the atom, in Angstroms" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_CovalentRadius = { "CovalentRadius", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, CovalentRadius), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_CovalentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_CovalentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Charge_MetaData[] = {
		{ "Comment", "/** Charge of the atom, in multiples of fundemental charges */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Charge of the atom, in multiples of fundemental charges" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Charge = { "Charge", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Charge), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Charge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Charge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Mass_MetaData[] = {
		{ "Comment", "/** Mass of the atom, in atomic mass units (or g/mol). */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Mass of the atom, in atomic mass units (or g/mol)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Mass), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Charge of the atom, in multiples of fundemental charges */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "Charge of the atom, in multiples of fundemental charges" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsRadius_MetaData[] = {
		{ "Comment", "/** The AMBER94 van der Waals radius of the atom, in Angstroms */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "The AMBER94 van der Waals radius of the atom, in Angstroms" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsRadius = { "VanDerWaalsRadius", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, VanDerWaalsRadius), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsMagnitude_MetaData[] = {
		{ "Comment", "/** The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsMagnitude = { "VanDerWaalsMagnitude", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, VanDerWaalsMagnitude), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtom_Statics::NewProp_AtomArrayIndex_MetaData[] = {
		{ "Comment", "/** This atom's index in the molecule's atom array.  Simplifies lookups for bonds. */" },
		{ "ModuleRelativePath", "Private/Atom.h" },
		{ "ToolTip", "This atom's index in the molecule's atom array.  Simplifies lookups for bonds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAtom_Statics::NewProp_AtomArrayIndex = { "AtomArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtom, AtomArrayIndex), METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::NewProp_AtomArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::NewProp_AtomArrayIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Symbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_AtomRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_AtomMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_CovalentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Charge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_VanDerWaalsMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtom_Statics::NewProp_AtomArrayIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtom_Statics::ClassParams = {
		&AAtom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtom, 999741027);
	template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<AAtom>()
	{
		return AAtom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtom(Z_Construct_UClass_AAtom, &AAtom::StaticClass, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("AAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
