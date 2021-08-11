// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Public/Simulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulation() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ASimulation_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ASimulation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoleculeConcentration();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AMolecule_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FReaction();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_AAtom_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMoleculePrototype();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ASimulationCell_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASimulation::execUpdateSystemEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSystemEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execUpdateForcesOnMolecules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateForcesOnMolecules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execRemoveReaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveReaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execRemoveMolecule)
	{
		P_GET_OBJECT(AMolecule,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMolecule(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execRemoveHydrogenBond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHydrogenBond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetReactionDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReactionDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execProcessHBonds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessHBonds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCheckReaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckReaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCalculateSubdivisionPositions)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SubDivisions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->CalculateSubdivisionPositions(Z_Param_Out_SubDivisions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCalculateSolventMoleculePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateSolventMoleculePosition(Z_Param_CurrentCount,Z_Param_TotalNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCalculateNumberOfSolventMolecules)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Density);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MolarMass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalculateNumberOfSolventMolecules(Z_Param_Density,Z_Param_MolarMass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCalculateNetForceForMolecule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateNetForceForMolecule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCalculateDivisionsForNumMolecules)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumAtoms);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateDivisionsForNumMolecules(Z_Param_NumAtoms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execLoadChemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadChemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execBuildDefaultPrototypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildDefaultPrototypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execAddSolvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MoleculeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSolvent(Z_Param_MoleculeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execAddReaction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReaction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execAddMolecule)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MoleculeName);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMolecule(Z_Param_MoleculeName,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execAddHydrogenBond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHydrogenBond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetTimeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeScale(Z_Param_ScaleFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetSoluteConcentration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewConcentration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoluteConcentration(Z_Param_NewConcentration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetSimulationTemp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_temp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimulationTemp(Z_Param_temp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetSimulationCellWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimulationCellWidth(Z_Param_Width);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execSetSimulationCellVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimulationCellVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_pm3_to_mL)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pm3Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_pm3_to_mL(Z_Param_pm3Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_pm3_to_L)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_pm3Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_pm3_to_L(Z_Param_pm3Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_mL_to_pm3)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mLVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_mL_to_pm3(Z_Param_mLVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_L_to_pm3)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_L_to_pm3(Z_Param_LVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_kCal_to_eV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_kCalEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_kCal_to_eV(Z_Param_kCalEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_K_to_F)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_KTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_K_to_F(Z_Param_KTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_K_to_C)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_KTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_K_to_C(Z_Param_KTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_J_to_eV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_JEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_J_to_eV(Z_Param_JEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_F_to_K)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_F_to_K(Z_Param_FTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_F_to_C)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_KTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_F_to_C(Z_Param_KTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_eV_to_kCal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_eVEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_eV_to_kCal(Z_Param_eVEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_eV_to_J)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_eVEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_eV_to_J(Z_Param_eVEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_C_to_K)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_C_to_K(Z_Param_CTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execConvert_C_to_F)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CTemp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Convert_C_to_F(Z_Param_CTemp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execUpdateSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execCheckCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitSolvent)
	{
		P_GET_OBJECT(AMolecule,Z_Param_Solvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitSolvent(Z_Param_Solvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitSimulationCell)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellWidth);
		P_GET_STRUCT(FColor,Z_Param_CellColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitSimulationCell(Z_Param_CellWidth,Z_Param_CellColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitReactionData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitReactionData(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitMoleculeData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitMoleculeData(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitInteractionRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitInteractionRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execInitializeSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSolventDensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSolventDensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSimulationVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSimulationCellWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationCellWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSolventConcentration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSolventConcentration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSimulationConcentrations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMoleculeConcentration>*)Z_Param__Result=P_THIS->GetSimulationConcentrations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSimulationTemp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationTemp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetSimulationEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetNumberOfMoleculesTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfMoleculesTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetNumberOfMoleculesByType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfMoleculesByType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulation::execGetMoleculeCounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoleculeCounts();
		P_NATIVE_END;
	}
	void ASimulation::StaticRegisterNativesASimulation()
	{
		UClass* Class = ASimulation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHydrogenBond", &ASimulation::execAddHydrogenBond },
			{ "AddMolecule", &ASimulation::execAddMolecule },
			{ "AddReaction", &ASimulation::execAddReaction },
			{ "AddSolvent", &ASimulation::execAddSolvent },
			{ "BuildDefaultPrototypes", &ASimulation::execBuildDefaultPrototypes },
			{ "CalculateDivisionsForNumMolecules", &ASimulation::execCalculateDivisionsForNumMolecules },
			{ "CalculateNetForceForMolecule", &ASimulation::execCalculateNetForceForMolecule },
			{ "CalculateNumberOfSolventMolecules", &ASimulation::execCalculateNumberOfSolventMolecules },
			{ "CalculateSolventMoleculePosition", &ASimulation::execCalculateSolventMoleculePosition },
			{ "CalculateSubdivisionPositions", &ASimulation::execCalculateSubdivisionPositions },
			{ "CheckCollision", &ASimulation::execCheckCollision },
			{ "CheckReaction", &ASimulation::execCheckReaction },
			{ "Convert_C_to_F", &ASimulation::execConvert_C_to_F },
			{ "Convert_C_to_K", &ASimulation::execConvert_C_to_K },
			{ "Convert_eV_to_J", &ASimulation::execConvert_eV_to_J },
			{ "Convert_eV_to_kCal", &ASimulation::execConvert_eV_to_kCal },
			{ "Convert_F_to_C", &ASimulation::execConvert_F_to_C },
			{ "Convert_F_to_K", &ASimulation::execConvert_F_to_K },
			{ "Convert_J_to_eV", &ASimulation::execConvert_J_to_eV },
			{ "Convert_K_to_C", &ASimulation::execConvert_K_to_C },
			{ "Convert_K_to_F", &ASimulation::execConvert_K_to_F },
			{ "Convert_kCal_to_eV", &ASimulation::execConvert_kCal_to_eV },
			{ "Convert_L_to_pm3", &ASimulation::execConvert_L_to_pm3 },
			{ "Convert_mL_to_pm3", &ASimulation::execConvert_mL_to_pm3 },
			{ "Convert_pm3_to_L", &ASimulation::execConvert_pm3_to_L },
			{ "Convert_pm3_to_mL", &ASimulation::execConvert_pm3_to_mL },
			{ "GetMoleculeCounts", &ASimulation::execGetMoleculeCounts },
			{ "GetNumberOfMoleculesByType", &ASimulation::execGetNumberOfMoleculesByType },
			{ "GetNumberOfMoleculesTotal", &ASimulation::execGetNumberOfMoleculesTotal },
			{ "GetSimulationCellWidth", &ASimulation::execGetSimulationCellWidth },
			{ "GetSimulationConcentrations", &ASimulation::execGetSimulationConcentrations },
			{ "GetSimulationEnergy", &ASimulation::execGetSimulationEnergy },
			{ "GetSimulationTemp", &ASimulation::execGetSimulationTemp },
			{ "GetSimulationVolume", &ASimulation::execGetSimulationVolume },
			{ "GetSolventConcentration", &ASimulation::execGetSolventConcentration },
			{ "GetSolventDensity", &ASimulation::execGetSolventDensity },
			{ "InitializeSimulation", &ASimulation::execInitializeSimulation },
			{ "InitInteractionRadius", &ASimulation::execInitInteractionRadius },
			{ "InitMoleculeData", &ASimulation::execInitMoleculeData },
			{ "InitReactionData", &ASimulation::execInitReactionData },
			{ "InitSimulationCell", &ASimulation::execInitSimulationCell },
			{ "InitSolvent", &ASimulation::execInitSolvent },
			{ "LoadChemData", &ASimulation::execLoadChemData },
			{ "ProcessHBonds", &ASimulation::execProcessHBonds },
			{ "RemoveHydrogenBond", &ASimulation::execRemoveHydrogenBond },
			{ "RemoveMolecule", &ASimulation::execRemoveMolecule },
			{ "RemoveReaction", &ASimulation::execRemoveReaction },
			{ "SetReactionDistance", &ASimulation::execSetReactionDistance },
			{ "SetSimulationCellVolume", &ASimulation::execSetSimulationCellVolume },
			{ "SetSimulationCellWidth", &ASimulation::execSetSimulationCellWidth },
			{ "SetSimulationTemp", &ASimulation::execSetSimulationTemp },
			{ "SetSoluteConcentration", &ASimulation::execSetSoluteConcentration },
			{ "SetTimeScale", &ASimulation::execSetTimeScale },
			{ "UpdateForcesOnMolecules", &ASimulation::execUpdateForcesOnMolecules },
			{ "UpdateSimulation", &ASimulation::execUpdateSimulation },
			{ "UpdateSystemEnergy", &ASimulation::execUpdateSystemEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Add a hydrogen bond to the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Add a hydrogen bond to the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "AddHydrogenBond", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_AddHydrogenBond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_AddHydrogenBond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_AddMolecule_Statics
	{
		struct Simulation_eventAddMolecule_Parms
		{
			FString MoleculeName;
			FVector Position;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoleculeName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASimulation_AddMolecule_Statics::NewProp_MoleculeName = { "MoleculeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventAddMolecule_Parms, MoleculeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_AddMolecule_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventAddMolecule_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_AddMolecule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_AddMolecule_Statics::NewProp_MoleculeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_AddMolecule_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_AddMolecule_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Adds a molecule to the simulation.\n\x09 * @param MoleculeName - The name (identifier) of the prototype molecule to copy.\n\x09 * @param Position - The location of the new molecule.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Adds a molecule to the simulation.\n@param MoleculeName - The name (identifier) of the prototype molecule to copy.\n@param Position - The location of the new molecule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_AddMolecule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "AddMolecule", nullptr, nullptr, sizeof(Simulation_eventAddMolecule_Parms), Z_Construct_UFunction_ASimulation_AddMolecule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddMolecule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_AddMolecule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddMolecule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_AddMolecule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_AddMolecule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_AddReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_AddReaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Adds a reaction to the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Adds a reaction to the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_AddReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "AddReaction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_AddReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_AddReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_AddReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_AddSolvent_Statics
	{
		struct Simulation_eventAddSolvent_Parms
		{
			FString MoleculeName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoleculeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASimulation_AddSolvent_Statics::NewProp_MoleculeName = { "MoleculeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventAddSolvent_Parms, MoleculeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_AddSolvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_AddSolvent_Statics::NewProp_MoleculeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_AddSolvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fills the Simulation Cell with the Appropriate number of solvent molecules */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Fills the Simulation Cell with the Appropriate number of solvent molecules" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_AddSolvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "AddSolvent", nullptr, nullptr, sizeof(Simulation_eventAddSolvent_Parms), Z_Construct_UFunction_ASimulation_AddSolvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddSolvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_AddSolvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_AddSolvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_AddSolvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_AddSolvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Prepares a (hard-coded) default set of atoms and molecules.  This is called by InitializeSimulation if the prototypes have not yet been built (e.g. loaded from files). */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Prepares a (hard-coded) default set of atoms and molecules.  This is called by InitializeSimulation if the prototypes have not yet been built (e.g. loaded from files)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "BuildDefaultPrototypes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics
	{
		struct Simulation_eventCalculateDivisionsForNumMolecules_Parms
		{
			int32 NumAtoms;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAtoms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::NewProp_NumAtoms = { "NumAtoms", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateDivisionsForNumMolecules_Parms, NumAtoms), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateDivisionsForNumMolecules_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::NewProp_NumAtoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CalculateDivisionsForNumMolecules", nullptr, nullptr, sizeof(Simulation_eventCalculateDivisionsForNumMolecules_Parms), Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics
	{
		struct Simulation_eventCalculateNetForceForMolecule_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateNetForceForMolecule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calculates the net force on a molecule */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Calculates the net force on a molecule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CalculateNetForceForMolecule", nullptr, nullptr, sizeof(Simulation_eventCalculateNetForceForMolecule_Parms), Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics
	{
		struct Simulation_eventCalculateNumberOfSolventMolecules_Parms
		{
			float Density;
			float MolarMass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MolarMass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateNumberOfSolventMolecules_Parms, Density), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_MolarMass = { "MolarMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateNumberOfSolventMolecules_Parms, MolarMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateNumberOfSolventMolecules_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_MolarMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Determines how many solvent molecules we'll need, given the density and molecular mass.\n\x09 * TODO: Similar function based on the molarity instead of mass density.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Determines how many solvent molecules we'll need, given the density and molecular mass.\nTODO: Similar function based on the molarity instead of mass density." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CalculateNumberOfSolventMolecules", nullptr, nullptr, sizeof(Simulation_eventCalculateNumberOfSolventMolecules_Parms), Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics
	{
		struct Simulation_eventCalculateSolventMoleculePosition_Parms
		{
			int32 CurrentCount;
			int32 TotalNum;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateSolventMoleculePosition_Parms, CurrentCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_TotalNum = { "TotalNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateSolventMoleculePosition_Parms, TotalNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateSolventMoleculePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_CurrentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_TotalNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CalculateSolventMoleculePosition", nullptr, nullptr, sizeof(Simulation_eventCalculateSolventMoleculePosition_Parms), Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics
	{
		struct Simulation_eventCalculateSubdivisionPositions_Parms
		{
			FVector SubDivisions;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubDivisions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_SubDivisions = { "SubDivisions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateSubdivisionPositions_Parms, SubDivisions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventCalculateSubdivisionPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_SubDivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CalculateSubdivisionPositions", nullptr, nullptr, sizeof(Simulation_eventCalculateSubdivisionPositions_Parms), Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CheckCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CheckCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Other Functions" },
		{ "Comment", "/** Checks if a collision has occurred; if it has, check for reactions. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Checks if a collision has occurred; if it has, check for reactions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CheckCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CheckCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CheckCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CheckCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CheckCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CheckCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_CheckReaction_Statics
	{
		struct Simulation_eventCheckReaction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASimulation_CheckReaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulation_eventCheckReaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimulation_CheckReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulation_eventCheckReaction_Parms), &Z_Construct_UFunction_ASimulation_CheckReaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_CheckReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_CheckReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_CheckReaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Checks to see if a reaction has occured. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Checks to see if a reaction has occured." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_CheckReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "CheckReaction", nullptr, nullptr, sizeof(Simulation_eventCheckReaction_Parms), Z_Construct_UFunction_ASimulation_CheckReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CheckReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_CheckReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_CheckReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_CheckReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_CheckReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics
	{
		struct Simulation_eventConvert_C_to_F_Parms
		{
			float CTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::NewProp_CTemp = { "CTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_C_to_F_Parms, CTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_C_to_F_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::NewProp_CTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Celsius to Fahrenheit\n\x09 * @param CTemp - The temperature, in degrees Celsius\n\x09 * @return The temperature, in Fahrenheit\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Celsius to Fahrenheit\n@param CTemp - The temperature, in degrees Celsius\n@return The temperature, in Fahrenheit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_C_to_F", nullptr, nullptr, sizeof(Simulation_eventConvert_C_to_F_Parms), Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_C_to_F()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_C_to_F_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics
	{
		struct Simulation_eventConvert_C_to_K_Parms
		{
			float CTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::NewProp_CTemp = { "CTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_C_to_K_Parms, CTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_C_to_K_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::NewProp_CTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Celsius to Kelvin\n\x09 * @param CTemp - The temperature, in degrees Celsius\n\x09 * @return The temperature, in Kelvins\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Celsius to Kelvin\n@param CTemp - The temperature, in degrees Celsius\n@return The temperature, in Kelvins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_C_to_K", nullptr, nullptr, sizeof(Simulation_eventConvert_C_to_K_Parms), Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_C_to_K()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_C_to_K_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics
	{
		struct Simulation_eventConvert_eV_to_J_Parms
		{
			float eVEnergy;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eVEnergy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::NewProp_eVEnergy = { "eVEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_eV_to_J_Parms, eVEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_eV_to_J_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::NewProp_eVEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a value in eV to Joules\n\x09 * @param eVEnergy - Energy, in eV\n\x09 * @return The energy in Joules\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a value in eV to Joules\n@param eVEnergy - Energy, in eV\n@return The energy in Joules" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_eV_to_J", nullptr, nullptr, sizeof(Simulation_eventConvert_eV_to_J_Parms), Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_eV_to_J()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_eV_to_J_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics
	{
		struct Simulation_eventConvert_eV_to_kCal_Parms
		{
			float eVEnergy;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_eVEnergy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::NewProp_eVEnergy = { "eVEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_eV_to_kCal_Parms, eVEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_eV_to_kCal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::NewProp_eVEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a value in eV to kCal\n\x09 * @param eVEnergy - Energy, in eV\n\x09 * @return The energy in kCal\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a value in eV to kCal\n@param eVEnergy - Energy, in eV\n@return The energy in kCal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_eV_to_kCal", nullptr, nullptr, sizeof(Simulation_eventConvert_eV_to_kCal_Parms), Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics
	{
		struct Simulation_eventConvert_F_to_C_Parms
		{
			float KTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::NewProp_KTemp = { "KTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_F_to_C_Parms, KTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_F_to_C_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::NewProp_KTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Fahrenheit to degrees Celsius\n\x09 * @param FTemp - The temperature to convert, in degrees Fahrenheit\n\x09 * @return -The Temperature, in Degrees Celsius\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Fahrenheit to degrees Celsius\n@param FTemp - The temperature to convert, in degrees Fahrenheit\n@return -The Temperature, in Degrees Celsius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_F_to_C", nullptr, nullptr, sizeof(Simulation_eventConvert_F_to_C_Parms), Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_F_to_C()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_F_to_C_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics
	{
		struct Simulation_eventConvert_F_to_K_Parms
		{
			float FTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::NewProp_FTemp = { "FTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_F_to_K_Parms, FTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_F_to_K_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::NewProp_FTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Fahrenheit to Kelvins\n\x09 * @param FTemp - The temperature to convert, in degrees Fahrenheit\n\x09 * @return -The Temperature, in Kelvins\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Fahrenheit to Kelvins\n@param FTemp - The temperature to convert, in degrees Fahrenheit\n@return -The Temperature, in Kelvins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_F_to_K", nullptr, nullptr, sizeof(Simulation_eventConvert_F_to_K_Parms), Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_F_to_K()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_F_to_K_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics
	{
		struct Simulation_eventConvert_J_to_eV_Parms
		{
			float JEnergy;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JEnergy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::NewProp_JEnergy = { "JEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_J_to_eV_Parms, JEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_J_to_eV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::NewProp_JEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a value in Joules to eV\n\x09 * @param JEnergy - Energy, in kCal\n\x09 * @return The energy in eV*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a value in Joules to eV\n@param JEnergy - Energy, in kCal\n@return The energy in eV" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_J_to_eV", nullptr, nullptr, sizeof(Simulation_eventConvert_J_to_eV_Parms), Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_J_to_eV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_J_to_eV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics
	{
		struct Simulation_eventConvert_K_to_C_Parms
		{
			float KTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::NewProp_KTemp = { "KTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_K_to_C_Parms, KTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_K_to_C_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::NewProp_KTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Kelvin to Celsius\n\x09 * @param KTemp - The temperature, in Kelvins\n\x09 * @return The temperature, in degrees Celsius\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Kelvin to Celsius\n@param KTemp - The temperature, in Kelvins\n@return The temperature, in degrees Celsius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_K_to_C", nullptr, nullptr, sizeof(Simulation_eventConvert_K_to_C_Parms), Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_K_to_C()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_K_to_C_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics
	{
		struct Simulation_eventConvert_K_to_F_Parms
		{
			float KTemp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KTemp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::NewProp_KTemp = { "KTemp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_K_to_F_Parms, KTemp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_K_to_F_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::NewProp_KTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a temperature from Kelvin to Fahrenheit\n\x09 * @param KTemp - The temperature to convert, in Kelvins\n\x09 * @return -The Temperature, in degrees Fahrenheit\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a temperature from Kelvin to Fahrenheit\n@param KTemp - The temperature to convert, in Kelvins\n@return -The Temperature, in degrees Fahrenheit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_K_to_F", nullptr, nullptr, sizeof(Simulation_eventConvert_K_to_F_Parms), Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_K_to_F()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_K_to_F_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics
	{
		struct Simulation_eventConvert_kCal_to_eV_Parms
		{
			float kCalEnergy;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kCalEnergy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::NewProp_kCalEnergy = { "kCalEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_kCal_to_eV_Parms, kCalEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_kCal_to_eV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::NewProp_kCalEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts a value in kCal to eV\n\x09 * @param kCalEnergy - Energy in kCal\n\x09 * @return The energy in eV\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts a value in kCal to eV\n@param kCalEnergy - Energy in kCal\n@return The energy in eV" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_kCal_to_eV", nullptr, nullptr, sizeof(Simulation_eventConvert_kCal_to_eV_Parms), Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics
	{
		struct Simulation_eventConvert_L_to_pm3_Parms
		{
			float LVolume;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LVolume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::NewProp_LVolume = { "LVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_L_to_pm3_Parms, LVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_L_to_pm3_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::NewProp_LVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n  * Converts units from L to pm^3\n\x09 * @param LVolume - volume, in litres\n\x09 * @return The volume in pm^3\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts units from L to pm^3\n@param LVolume - volume, in litres\n@return The volume in pm^3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_L_to_pm3", nullptr, nullptr, sizeof(Simulation_eventConvert_L_to_pm3_Parms), Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_L_to_pm3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_L_to_pm3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics
	{
		struct Simulation_eventConvert_mL_to_pm3_Parms
		{
			float mLVolume;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLVolume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::NewProp_mLVolume = { "mLVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_mL_to_pm3_Parms, mLVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_mL_to_pm3_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::NewProp_mLVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n  * Converts units from mL to pm^3\n\x09 * @param mLVolume - volume, in mL\n\x09 * @return The volume in pm^3\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts units from mL to pm^3\n@param mLVolume - volume, in mL\n@return The volume in pm^3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_mL_to_pm3", nullptr, nullptr, sizeof(Simulation_eventConvert_mL_to_pm3_Parms), Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics
	{
		struct Simulation_eventConvert_pm3_to_L_Parms
		{
			float pm3Volume;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pm3Volume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::NewProp_pm3Volume = { "pm3Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_pm3_to_L_Parms, pm3Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_pm3_to_L_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::NewProp_pm3Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts units from pm^3 to litres\n\x09 * @param pm3Volume - Volume, in p^3\n\x09 * @return Volume in litres\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts units from pm^3 to litres\n@param pm3Volume - Volume, in p^3\n@return Volume in litres" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_pm3_to_L", nullptr, nullptr, sizeof(Simulation_eventConvert_pm3_to_L_Parms), Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_pm3_to_L()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_pm3_to_L_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics
	{
		struct Simulation_eventConvert_pm3_to_mL_Parms
		{
			float pm3Volume;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pm3Volume;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::NewProp_pm3Volume = { "pm3Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_pm3_to_mL_Parms, pm3Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventConvert_pm3_to_mL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::NewProp_pm3Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Utility Functions" },
		{ "Comment", "/**\n\x09 * Converts units from pm^3 to mL\n\x09 * @param pm3Volume - volume, in pm^3\n\x09 * @return The volume in mL\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Converts units from pm^3 to mL\n@param pm3Volume - volume, in pm^3\n@return The volume in mL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "Convert_pm3_to_mL", nullptr, nullptr, sizeof(Simulation_eventConvert_pm3_to_mL_Parms), Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics
	{
		struct Simulation_eventGetMoleculeCounts_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetMoleculeCounts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the counts of each molecule in the simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the counts of each molecule in the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetMoleculeCounts", nullptr, nullptr, sizeof(Simulation_eventGetMoleculeCounts_Parms), Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetMoleculeCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetMoleculeCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics
	{
		struct Simulation_eventGetNumberOfMoleculesByType_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetNumberOfMoleculesByType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the number of a certain type of molecule*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the number of a certain type of molecule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetNumberOfMoleculesByType", nullptr, nullptr, sizeof(Simulation_eventGetNumberOfMoleculesByType_Parms), Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics
	{
		struct Simulation_eventGetNumberOfMoleculesTotal_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetNumberOfMoleculesTotal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the total number of molecules in the simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the total number of molecules in the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetNumberOfMoleculesTotal", nullptr, nullptr, sizeof(Simulation_eventGetNumberOfMoleculesTotal_Parms), Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics
	{
		struct Simulation_eventGetSimulationCellWidth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSimulationCellWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Get the width of one side of the (cube-shaped) simulation cell.\n\x09 * @return Width - Cell width, in pm.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Get the width of one side of the (cube-shaped) simulation cell.\n@return Width - Cell width, in pm." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSimulationCellWidth", nullptr, nullptr, sizeof(Simulation_eventGetSimulationCellWidth_Parms), Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSimulationCellWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSimulationCellWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics
	{
		struct Simulation_eventGetSimulationConcentrations_Parms
		{
			TArray<FMoleculeConcentration> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMoleculeConcentration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSimulationConcentrations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the concentrations of the molecules in the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the concentrations of the molecules in the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSimulationConcentrations", nullptr, nullptr, sizeof(Simulation_eventGetSimulationConcentrations_Parms), Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSimulationConcentrations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSimulationConcentrations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics
	{
		struct Simulation_eventGetSimulationEnergy_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSimulationEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the total energy of the simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the total energy of the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSimulationEnergy", nullptr, nullptr, sizeof(Simulation_eventGetSimulationEnergy_Parms), Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSimulationEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSimulationEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics
	{
		struct Simulation_eventGetSimulationTemp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSimulationTemp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the Temperature of the Simulation, in Kelvins\n\x09 * @return temperature, in Kelvins\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the Temperature of the Simulation, in Kelvins\n@return temperature, in Kelvins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSimulationTemp", nullptr, nullptr, sizeof(Simulation_eventGetSimulationTemp_Parms), Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSimulationTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSimulationTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics
	{
		struct Simulation_eventGetSimulationVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSimulationVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/**\n\x09 * Gets the volume of the simulation cell.\n\x09 * @return The volume of the simulation cell, in pm^3\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the volume of the simulation cell.\n@return The volume of the simulation cell, in pm^3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSimulationVolume", nullptr, nullptr, sizeof(Simulation_eventGetSimulationVolume_Parms), Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSimulationVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSimulationVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics
	{
		struct Simulation_eventGetSolventConcentration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSolventConcentration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the concentration of the solute */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the concentration of the solute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSolventConcentration", nullptr, nullptr, sizeof(Simulation_eventGetSolventConcentration_Parms), Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSolventConcentration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSolventConcentration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics
	{
		struct Simulation_eventGetSolventDensity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventGetSolventDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Getter Functions" },
		{ "Comment", "/** Gets the density of a solvent*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Gets the density of a solvent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "GetSolventDensity", nullptr, nullptr, sizeof(Simulation_eventGetSolventDensity_Parms), Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_GetSolventDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_GetSolventDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Initilizes the Simulation.  Creates the Simulation Cell and populates it with solvent and reactant molecules, then starts the simulation running.\n\x09 * Uses hopefully-reasonably defaults for anything the user has not already set:\n\x09 * - Default simulation cell width is 10000 pm (100 angstroms).\n\x09 * - Default solvent is water.\n\x09 * - Default temperature is 25C.\n\x09 * - If no molecules are loaded, includes two default reactants (for nice visuals), with no reactions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Initilizes the Simulation.  Creates the Simulation Cell and populates it with solvent and reactant molecules, then starts the simulation running.\nUses hopefully-reasonably defaults for anything the user has not already set:\n- Default simulation cell width is 10000 pm (100 angstroms).\n- Default solvent is water.\n- Default temperature is 25C.\n- If no molecules are loaded, includes two default reactants (for nice visuals), with no reactions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitializeSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitializeSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitializeSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics
	{
		struct Simulation_eventInitInteractionRadius_Parms
		{
			float Radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitInteractionRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Set the maximum distance to check for molecule interactions.\n\x09 * @param Radius - Max distance between molecule centres of mass, in Angstroms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Set the maximum distance to check for molecule interactions.\n@param Radius - Max distance between molecule centres of mass, in Angstroms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitInteractionRadius", nullptr, nullptr, sizeof(Simulation_eventInitInteractionRadius_Parms), Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitInteractionRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitInteractionRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics
	{
		struct Simulation_eventInitMoleculeData_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitMoleculeData_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulation_eventInitMoleculeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulation_eventInitMoleculeData_Parms), &Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Load data about the molecules and atoms from a file.  Should be a text file in a particular format, which we will document soon!\n\x09 * @param FileName - Filename (with full path).\n\x09 * @return True if the data was successfully loaded, false if not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Load data about the molecules and atoms from a file.  Should be a text file in a particular format, which we will document soon!\n@param FileName - Filename (with full path).\n@return True if the data was successfully loaded, false if not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitMoleculeData", nullptr, nullptr, sizeof(Simulation_eventInitMoleculeData_Parms), Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitMoleculeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitMoleculeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitReactionData_Statics
	{
		struct Simulation_eventInitReactionData_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitReactionData_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simulation_eventInitReactionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Simulation_eventInitReactionData_Parms), &Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_InitReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitReactionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitReactionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Load list of possible reactions from a file.  Should be a text file in a particular format, which we will document soon!\n\x09 * @param FileName - Filename (with full path).\n\x09 * @return True if the data was successfully loaded, false if not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Load list of possible reactions from a file.  Should be a text file in a particular format, which we will document soon!\n@param FileName - Filename (with full path).\n@return True if the data was successfully loaded, false if not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitReactionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitReactionData", nullptr, nullptr, sizeof(Simulation_eventInitReactionData_Parms), Z_Construct_UFunction_ASimulation_InitReactionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitReactionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitReactionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitReactionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitReactionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitReactionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics
	{
		struct Simulation_eventInitSimulationCell_Parms
		{
			float CellWidth;
			FColor CellColor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellWidth;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CellColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitSimulationCell_Parms, CellWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::NewProp_CellColor = { "CellColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitSimulationCell_Parms, CellColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::NewProp_CellWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::NewProp_CellColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Creates a SimulationCell actor and attaches it to the simulation as the root so that it will follow the simulation for scale and transforms\n\x09 *\x09@param CellWidth: in Unreal Units the width that the simulation cell should be. 1 UU = 1 pM\n\x09 *\x09@param CellColor the color that the borders of the cell should be.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Creates a SimulationCell actor and attaches it to the simulation as the root so that it will follow the simulation for scale and transforms\n     @param CellWidth: in Unreal Units the width that the simulation cell should be. 1 UU = 1 pM\n     @param CellColor the color that the borders of the cell should be." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitSimulationCell", nullptr, nullptr, sizeof(Simulation_eventInitSimulationCell_Parms), Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitSimulationCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitSimulationCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_InitSolvent_Statics
	{
		struct Simulation_eventInitSolvent_Parms
		{
			AMolecule* Solvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Solvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulation_InitSolvent_Statics::NewProp_Solvent = { "Solvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventInitSolvent_Parms, Solvent), Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_InitSolvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_InitSolvent_Statics::NewProp_Solvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_InitSolvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Initializer Functions" },
		{ "Comment", "/**\n\x09 * Sets the solvent molecule to fill the cell with.\n\x09 * @param Solvent - The molecule to use as solvent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Sets the solvent molecule to fill the cell with.\n@param Solvent - The molecule to use as solvent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_InitSolvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "InitSolvent", nullptr, nullptr, sizeof(Simulation_eventInitSolvent_Parms), Z_Construct_UFunction_ASimulation_InitSolvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitSolvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_InitSolvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_InitSolvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_InitSolvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_InitSolvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_LoadChemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_LoadChemData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Load all chemical data files (.pdb format) found in the plugin's Content/ChemData folder, and use them construct prototypes for atoms and molecules.  Does nothing if no pdb files are found.  Called by InitializeSimulation. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Load all chemical data files (.pdb format) found in the plugin's Content/ChemData folder, and use them construct prototypes for atoms and molecules.  Does nothing if no pdb files are found.  Called by InitializeSimulation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_LoadChemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "LoadChemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_LoadChemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_LoadChemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_LoadChemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_LoadChemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Processes the H bonds in the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Processes the H bonds in the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "ProcessHBonds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_ProcessHBonds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_ProcessHBonds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Removes a hydrogen bond from the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Removes a hydrogen bond from the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "RemoveHydrogenBond", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_RemoveHydrogenBond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_RemoveHydrogenBond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics
	{
		struct Simulation_eventRemoveMolecule_Parms
		{
			AMolecule* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventRemoveMolecule_Parms, Target), Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Removes a molecule from the simulation\n\x09 * @param Target - The molecule to remove.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Removes a molecule from the simulation\n@param Target - The molecule to remove." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "RemoveMolecule", nullptr, nullptr, sizeof(Simulation_eventRemoveMolecule_Parms), Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_RemoveMolecule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_RemoveMolecule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_RemoveReaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_RemoveReaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Removes a reaction from the simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Removes a reaction from the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_RemoveReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "RemoveReaction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_RemoveReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_RemoveReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_RemoveReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_RemoveReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the reaction distance in the smulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Sets the reaction distance in the smulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetReactionDistance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetReactionDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetReactionDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics
	{
		struct Simulation_eventSetSimulationCellVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventSetSimulationCellVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Set the total volume of the (cube-shaped) simulation cell.\n\x09 * @param Volume - Cell volume, in pm3 (pm cubed).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Set the total volume of the (cube-shaped) simulation cell.\n@param Volume - Cell volume, in pm3 (pm cubed)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetSimulationCellVolume", nullptr, nullptr, sizeof(Simulation_eventSetSimulationCellVolume_Parms), Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetSimulationCellVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetSimulationCellVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics
	{
		struct Simulation_eventSetSimulationCellWidth_Parms
		{
			float Width;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventSetSimulationCellWidth_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Set the width of one side of the (cube-shaped) simulation cell.\n\x09 * @param Width - Cell width, in pm.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Set the width of one side of the (cube-shaped) simulation cell.\n@param Width - Cell width, in pm." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetSimulationCellWidth", nullptr, nullptr, sizeof(Simulation_eventSetSimulationCellWidth_Parms), Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetSimulationCellWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetSimulationCellWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics
	{
		struct Simulation_eventSetSimulationTemp_Parms
		{
			float temp;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_temp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::NewProp_temp = { "temp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventSetSimulationTemp_Parms, temp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::NewProp_temp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Sets the temperature of the simulation\n\x09 * @param Temp - Desired Temperature, in Kelvins\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Sets the temperature of the simulation\n@param Temp - Desired Temperature, in Kelvins" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetSimulationTemp", nullptr, nullptr, sizeof(Simulation_eventSetSimulationTemp_Parms), Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetSimulationTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetSimulationTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics
	{
		struct Simulation_eventSetSoluteConcentration_Parms
		{
			float NewConcentration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewConcentration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::NewProp_NewConcentration = { "NewConcentration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventSetSoluteConcentration_Parms, NewConcentration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::NewProp_NewConcentration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Sets the concentration of the solute.\n\x09 * @param NewConcentration - Desired concentration, in moles per litre solution.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Sets the concentration of the solute.\n@param NewConcentration - Desired concentration, in moles per litre solution." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetSoluteConcentration", nullptr, nullptr, sizeof(Simulation_eventSetSoluteConcentration_Parms), Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetSoluteConcentration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetSoluteConcentration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_SetTimeScale_Statics
	{
		struct Simulation_eventSetTimeScale_Parms
		{
			float ScaleFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Simulation_eventSetTimeScale_Parms, ScaleFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::NewProp_ScaleFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Setter Functions" },
		{ "Comment", "/**\n\x09 * Sets a scale factor to speed up/slow down the simulation motion.\n\x09 * @param ScaleFactor - Speed multiplier (1=default; larger is faster)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Sets a scale factor to speed up/slow down the simulation motion.\n@param ScaleFactor - Speed multiplier (1=default; larger is faster)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "SetTimeScale", nullptr, nullptr, sizeof(Simulation_eventSetTimeScale_Parms), Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_SetTimeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_SetTimeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Updated all the forces on the molecule */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Updated all the forces on the molecule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "UpdateForcesOnMolecules", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamics - Other Functions" },
		{ "Comment", "/** Updates the Simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Updates the Simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "UpdateSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_UpdateSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_UpdateSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Updates the total energy of the simulation */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Updates the total energy of the simulation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulation, nullptr, "UpdateSystemEnergy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulation_UpdateSystemEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulation_UpdateSystemEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimulation_NoRegister()
	{
		return ASimulation::StaticClass();
	}
	struct Z_Construct_UClass_ASimulation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveReactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveReactions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomDataTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Molecules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Molecules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Molecules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossibleReactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossibleReactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PossibleReactions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrototypeAtoms_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrototypeAtoms_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrototypeAtoms_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrototypeAtoms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrototypeMolecules_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrototypeMolecules_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrototypeMolecules_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrototypeMolecules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationCell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulationCell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SystemEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemEnergyTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SystemEnergyTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimulation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimulation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulation_AddHydrogenBond, "AddHydrogenBond" }, // 3025892348
		{ &Z_Construct_UFunction_ASimulation_AddMolecule, "AddMolecule" }, // 1156029
		{ &Z_Construct_UFunction_ASimulation_AddReaction, "AddReaction" }, // 2843518087
		{ &Z_Construct_UFunction_ASimulation_AddSolvent, "AddSolvent" }, // 445714358
		{ &Z_Construct_UFunction_ASimulation_BuildDefaultPrototypes, "BuildDefaultPrototypes" }, // 71622692
		{ &Z_Construct_UFunction_ASimulation_CalculateDivisionsForNumMolecules, "CalculateDivisionsForNumMolecules" }, // 833374210
		{ &Z_Construct_UFunction_ASimulation_CalculateNetForceForMolecule, "CalculateNetForceForMolecule" }, // 2104728224
		{ &Z_Construct_UFunction_ASimulation_CalculateNumberOfSolventMolecules, "CalculateNumberOfSolventMolecules" }, // 780150848
		{ &Z_Construct_UFunction_ASimulation_CalculateSolventMoleculePosition, "CalculateSolventMoleculePosition" }, // 2018100048
		{ &Z_Construct_UFunction_ASimulation_CalculateSubdivisionPositions, "CalculateSubdivisionPositions" }, // 652597949
		{ &Z_Construct_UFunction_ASimulation_CheckCollision, "CheckCollision" }, // 4186017293
		{ &Z_Construct_UFunction_ASimulation_CheckReaction, "CheckReaction" }, // 2343872814
		{ &Z_Construct_UFunction_ASimulation_Convert_C_to_F, "Convert_C_to_F" }, // 259825980
		{ &Z_Construct_UFunction_ASimulation_Convert_C_to_K, "Convert_C_to_K" }, // 899827859
		{ &Z_Construct_UFunction_ASimulation_Convert_eV_to_J, "Convert_eV_to_J" }, // 121339391
		{ &Z_Construct_UFunction_ASimulation_Convert_eV_to_kCal, "Convert_eV_to_kCal" }, // 3948353940
		{ &Z_Construct_UFunction_ASimulation_Convert_F_to_C, "Convert_F_to_C" }, // 866371997
		{ &Z_Construct_UFunction_ASimulation_Convert_F_to_K, "Convert_F_to_K" }, // 3839485330
		{ &Z_Construct_UFunction_ASimulation_Convert_J_to_eV, "Convert_J_to_eV" }, // 1331298144
		{ &Z_Construct_UFunction_ASimulation_Convert_K_to_C, "Convert_K_to_C" }, // 1897567282
		{ &Z_Construct_UFunction_ASimulation_Convert_K_to_F, "Convert_K_to_F" }, // 3711209177
		{ &Z_Construct_UFunction_ASimulation_Convert_kCal_to_eV, "Convert_kCal_to_eV" }, // 3522442299
		{ &Z_Construct_UFunction_ASimulation_Convert_L_to_pm3, "Convert_L_to_pm3" }, // 3639007499
		{ &Z_Construct_UFunction_ASimulation_Convert_mL_to_pm3, "Convert_mL_to_pm3" }, // 2937409892
		{ &Z_Construct_UFunction_ASimulation_Convert_pm3_to_L, "Convert_pm3_to_L" }, // 3206859261
		{ &Z_Construct_UFunction_ASimulation_Convert_pm3_to_mL, "Convert_pm3_to_mL" }, // 2973443933
		{ &Z_Construct_UFunction_ASimulation_GetMoleculeCounts, "GetMoleculeCounts" }, // 1512691193
		{ &Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesByType, "GetNumberOfMoleculesByType" }, // 3226058082
		{ &Z_Construct_UFunction_ASimulation_GetNumberOfMoleculesTotal, "GetNumberOfMoleculesTotal" }, // 2893225936
		{ &Z_Construct_UFunction_ASimulation_GetSimulationCellWidth, "GetSimulationCellWidth" }, // 551204579
		{ &Z_Construct_UFunction_ASimulation_GetSimulationConcentrations, "GetSimulationConcentrations" }, // 1458371637
		{ &Z_Construct_UFunction_ASimulation_GetSimulationEnergy, "GetSimulationEnergy" }, // 371039023
		{ &Z_Construct_UFunction_ASimulation_GetSimulationTemp, "GetSimulationTemp" }, // 1790452559
		{ &Z_Construct_UFunction_ASimulation_GetSimulationVolume, "GetSimulationVolume" }, // 461336459
		{ &Z_Construct_UFunction_ASimulation_GetSolventConcentration, "GetSolventConcentration" }, // 112362524
		{ &Z_Construct_UFunction_ASimulation_GetSolventDensity, "GetSolventDensity" }, // 1602569151
		{ &Z_Construct_UFunction_ASimulation_InitializeSimulation, "InitializeSimulation" }, // 3532156670
		{ &Z_Construct_UFunction_ASimulation_InitInteractionRadius, "InitInteractionRadius" }, // 1034801997
		{ &Z_Construct_UFunction_ASimulation_InitMoleculeData, "InitMoleculeData" }, // 855555879
		{ &Z_Construct_UFunction_ASimulation_InitReactionData, "InitReactionData" }, // 1455922265
		{ &Z_Construct_UFunction_ASimulation_InitSimulationCell, "InitSimulationCell" }, // 1615140046
		{ &Z_Construct_UFunction_ASimulation_InitSolvent, "InitSolvent" }, // 1368811793
		{ &Z_Construct_UFunction_ASimulation_LoadChemData, "LoadChemData" }, // 2854173205
		{ &Z_Construct_UFunction_ASimulation_ProcessHBonds, "ProcessHBonds" }, // 78499772
		{ &Z_Construct_UFunction_ASimulation_RemoveHydrogenBond, "RemoveHydrogenBond" }, // 1053075337
		{ &Z_Construct_UFunction_ASimulation_RemoveMolecule, "RemoveMolecule" }, // 234489797
		{ &Z_Construct_UFunction_ASimulation_RemoveReaction, "RemoveReaction" }, // 1918315556
		{ &Z_Construct_UFunction_ASimulation_SetReactionDistance, "SetReactionDistance" }, // 2205523834
		{ &Z_Construct_UFunction_ASimulation_SetSimulationCellVolume, "SetSimulationCellVolume" }, // 2369272537
		{ &Z_Construct_UFunction_ASimulation_SetSimulationCellWidth, "SetSimulationCellWidth" }, // 3623548658
		{ &Z_Construct_UFunction_ASimulation_SetSimulationTemp, "SetSimulationTemp" }, // 53313530
		{ &Z_Construct_UFunction_ASimulation_SetSoluteConcentration, "SetSoluteConcentration" }, // 69347469
		{ &Z_Construct_UFunction_ASimulation_SetTimeScale, "SetTimeScale" }, // 1229679029
		{ &Z_Construct_UFunction_ASimulation_UpdateForcesOnMolecules, "UpdateForcesOnMolecules" }, // 2500989284
		{ &Z_Construct_UFunction_ASimulation_UpdateSimulation, "UpdateSimulation" }, // 1302087042
		{ &Z_Construct_UFunction_ASimulation_UpdateSystemEnergy, "UpdateSystemEnergy" }, // 63768140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Simulation.h" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions_Inner = { "ActiveReactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions_MetaData[] = {
		{ "Comment", "/** An array of active reaction objects*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "An array of active reaction objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions = { "ActiveReactions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, ActiveReactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_AtomDataTable_MetaData[] = {
		{ "Comment", "/** Table describing each available atom. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Table describing each available atom." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_AtomDataTable = { "AtomDataTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, AtomDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_AtomDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_AtomDataTable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules_Inner = { "Molecules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMolecule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules_MetaData[] = {
		{ "Comment", "/** Array of molecule objects in the simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Array of molecule objects in the simulation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules = { "Molecules", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, Molecules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions_Inner = { "PossibleReactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions_MetaData[] = {
		{ "Comment", "/** Array of Possible reactions*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Array of Possible reactions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions = { "PossibleReactions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, PossibleReactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_ValueProp = { "PrototypeAtoms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_Key_KeyProp = { "PrototypeAtoms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_MetaData[] = {
		{ "Comment", "/** An array of prototype atom objects.  Keys are AMBER94 Types. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "An array of prototype atom objects.  Keys are AMBER94 Types." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms = { "PrototypeAtoms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, PrototypeAtoms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_ValueProp = { "PrototypeMolecules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMoleculePrototype, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_Key_KeyProp = { "PrototypeMolecules_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_MetaData[] = {
		{ "Comment", "/** An array of prototype molecule objects. Keys are molecule names. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "An array of prototype molecule objects. Keys are molecule names." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules = { "PrototypeMolecules", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, PrototypeMolecules), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_SimulationCell_MetaData[] = {
		{ "Comment", "/** SimulationCell object*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "SimulationCell object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_SimulationCell = { "SimulationCell", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, SimulationCell), Z_Construct_UClass_ASimulationCell_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_SimulationCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_SimulationCell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergy_MetaData[] = {
		{ "Comment", "/** Total Energy of the system, in eV. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Total Energy of the system, in eV." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergy = { "SystemEnergy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, SystemEnergy), METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergyTolerance_MetaData[] = {
		{ "Comment", "/**Allowable change in the total system in one time step, in eV*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Allowable change in the total system in one time step, in eV" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergyTolerance = { "SystemEnergyTolerance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, SystemEnergyTolerance), METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergyTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergyTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_Temperature_MetaData[] = {
		{ "Comment", "/** Temperature in the simulation, in Kelvins.  Default is 25 C, the IUPAC standard ambient temperature. */" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Temperature in the simulation, in Kelvins.  Default is 25 C, the IUPAC standard ambient temperature." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, Temperature), METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulation_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** Factor affecting speed of simulation*/" },
		{ "ModuleRelativePath", "Public/Simulation.h" },
		{ "ToolTip", "Factor affecting speed of simulation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimulation_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulation, TimeScale), METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::NewProp_TimeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_ActiveReactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_AtomDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_Molecules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PossibleReactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeAtoms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_PrototypeMolecules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_SimulationCell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_SystemEnergyTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_Temperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulation_Statics::NewProp_TimeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimulation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimulation_Statics::ClassParams = {
		&ASimulation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimulation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimulation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimulation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimulation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimulation, 310511602);
	template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<ASimulation>()
	{
		return ASimulation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimulation(Z_Construct_UClass_ASimulation, &ASimulation::StaticClass, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("ASimulation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimulation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
