// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMolecule;
struct FVector;
struct FColor;
struct FMoleculeConcentration;
#ifdef MOLECULARDYNAMICSPLUGIN_Simulation_generated_h
#error "Simulation.generated.h already included, missing '#pragma once' in Simulation.h"
#endif
#define MOLECULARDYNAMICSPLUGIN_Simulation_generated_h

#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_SPARSE_DATA
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSystemEnergy); \
	DECLARE_FUNCTION(execUpdateForcesOnMolecules); \
	DECLARE_FUNCTION(execRemoveReaction); \
	DECLARE_FUNCTION(execRemoveMolecule); \
	DECLARE_FUNCTION(execRemoveHydrogenBond); \
	DECLARE_FUNCTION(execSetReactionDistance); \
	DECLARE_FUNCTION(execProcessHBonds); \
	DECLARE_FUNCTION(execCheckReaction); \
	DECLARE_FUNCTION(execCalculateSubdivisionPositions); \
	DECLARE_FUNCTION(execCalculateSolventMoleculePosition); \
	DECLARE_FUNCTION(execCalculateNumberOfSolventMolecules); \
	DECLARE_FUNCTION(execCalculateNetForceForMolecule); \
	DECLARE_FUNCTION(execCalculateDivisionsForNumMolecules); \
	DECLARE_FUNCTION(execBuildDefaultPrototypes); \
	DECLARE_FUNCTION(execAddReaction); \
	DECLARE_FUNCTION(execAddMolecule); \
	DECLARE_FUNCTION(execAddHydrogenBond); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetSoluteConcentration); \
	DECLARE_FUNCTION(execSetSimulationTemp); \
	DECLARE_FUNCTION(execSetSimulationCellWidth); \
	DECLARE_FUNCTION(execSetSimulationCellVolume); \
	DECLARE_FUNCTION(execConvert_pm3_to_mL); \
	DECLARE_FUNCTION(execConvert_pm3_to_L); \
	DECLARE_FUNCTION(execConvert_mL_to_pm3); \
	DECLARE_FUNCTION(execConvert_L_to_pm3); \
	DECLARE_FUNCTION(execConvert_kCal_to_eV); \
	DECLARE_FUNCTION(execConvert_K_to_F); \
	DECLARE_FUNCTION(execConvert_K_to_C); \
	DECLARE_FUNCTION(execConvert_J_to_eV); \
	DECLARE_FUNCTION(execConvert_F_to_K); \
	DECLARE_FUNCTION(execConvert_F_to_C); \
	DECLARE_FUNCTION(execConvert_eV_to_kCal); \
	DECLARE_FUNCTION(execConvert_eV_to_J); \
	DECLARE_FUNCTION(execConvert_C_to_K); \
	DECLARE_FUNCTION(execConvert_C_to_F); \
	DECLARE_FUNCTION(execUpdateSimulation); \
	DECLARE_FUNCTION(execCheckCollision); \
	DECLARE_FUNCTION(execInitSolvent); \
	DECLARE_FUNCTION(execInitSimulationCell); \
	DECLARE_FUNCTION(execInitReactionData); \
	DECLARE_FUNCTION(execInitMoleculeData); \
	DECLARE_FUNCTION(execInitInteractionRadius); \
	DECLARE_FUNCTION(execInitializeSimulation); \
	DECLARE_FUNCTION(execGetSolventDensity); \
	DECLARE_FUNCTION(execGetSimulationVolume); \
	DECLARE_FUNCTION(execGetSimulationCellWidth); \
	DECLARE_FUNCTION(execGetSolventConcentration); \
	DECLARE_FUNCTION(execGetSimulationConcentrations); \
	DECLARE_FUNCTION(execGetSimulationTemp); \
	DECLARE_FUNCTION(execGetSimulationEnergy); \
	DECLARE_FUNCTION(execGetNumberOfMoleculesTotal); \
	DECLARE_FUNCTION(execGetNumberOfMoleculesByType); \
	DECLARE_FUNCTION(execGetMoleculeCounts);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSystemEnergy); \
	DECLARE_FUNCTION(execUpdateForcesOnMolecules); \
	DECLARE_FUNCTION(execRemoveReaction); \
	DECLARE_FUNCTION(execRemoveMolecule); \
	DECLARE_FUNCTION(execRemoveHydrogenBond); \
	DECLARE_FUNCTION(execSetReactionDistance); \
	DECLARE_FUNCTION(execProcessHBonds); \
	DECLARE_FUNCTION(execCheckReaction); \
	DECLARE_FUNCTION(execCalculateSubdivisionPositions); \
	DECLARE_FUNCTION(execCalculateSolventMoleculePosition); \
	DECLARE_FUNCTION(execCalculateNumberOfSolventMolecules); \
	DECLARE_FUNCTION(execCalculateNetForceForMolecule); \
	DECLARE_FUNCTION(execCalculateDivisionsForNumMolecules); \
	DECLARE_FUNCTION(execBuildDefaultPrototypes); \
	DECLARE_FUNCTION(execAddReaction); \
	DECLARE_FUNCTION(execAddMolecule); \
	DECLARE_FUNCTION(execAddHydrogenBond); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetSoluteConcentration); \
	DECLARE_FUNCTION(execSetSimulationTemp); \
	DECLARE_FUNCTION(execSetSimulationCellWidth); \
	DECLARE_FUNCTION(execSetSimulationCellVolume); \
	DECLARE_FUNCTION(execConvert_pm3_to_mL); \
	DECLARE_FUNCTION(execConvert_pm3_to_L); \
	DECLARE_FUNCTION(execConvert_mL_to_pm3); \
	DECLARE_FUNCTION(execConvert_L_to_pm3); \
	DECLARE_FUNCTION(execConvert_kCal_to_eV); \
	DECLARE_FUNCTION(execConvert_K_to_F); \
	DECLARE_FUNCTION(execConvert_K_to_C); \
	DECLARE_FUNCTION(execConvert_J_to_eV); \
	DECLARE_FUNCTION(execConvert_F_to_K); \
	DECLARE_FUNCTION(execConvert_F_to_C); \
	DECLARE_FUNCTION(execConvert_eV_to_kCal); \
	DECLARE_FUNCTION(execConvert_eV_to_J); \
	DECLARE_FUNCTION(execConvert_C_to_K); \
	DECLARE_FUNCTION(execConvert_C_to_F); \
	DECLARE_FUNCTION(execUpdateSimulation); \
	DECLARE_FUNCTION(execCheckCollision); \
	DECLARE_FUNCTION(execInitSolvent); \
	DECLARE_FUNCTION(execInitSimulationCell); \
	DECLARE_FUNCTION(execInitReactionData); \
	DECLARE_FUNCTION(execInitMoleculeData); \
	DECLARE_FUNCTION(execInitInteractionRadius); \
	DECLARE_FUNCTION(execInitializeSimulation); \
	DECLARE_FUNCTION(execGetSolventDensity); \
	DECLARE_FUNCTION(execGetSimulationVolume); \
	DECLARE_FUNCTION(execGetSimulationCellWidth); \
	DECLARE_FUNCTION(execGetSolventConcentration); \
	DECLARE_FUNCTION(execGetSimulationConcentrations); \
	DECLARE_FUNCTION(execGetSimulationTemp); \
	DECLARE_FUNCTION(execGetSimulationEnergy); \
	DECLARE_FUNCTION(execGetNumberOfMoleculesTotal); \
	DECLARE_FUNCTION(execGetNumberOfMoleculesByType); \
	DECLARE_FUNCTION(execGetMoleculeCounts);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimulation(); \
	friend struct Z_Construct_UClass_ASimulation_Statics; \
public: \
	DECLARE_CLASS(ASimulation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASimulation)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_INCLASS \
private: \
	static void StaticRegisterNativesASimulation(); \
	friend struct Z_Construct_UClass_ASimulation_Statics; \
public: \
	DECLARE_CLASS(ASimulation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASimulation)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimulation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimulation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimulation(ASimulation&&); \
	NO_API ASimulation(const ASimulation&); \
public:


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimulation(ASimulation&&); \
	NO_API ASimulation(const ASimulation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimulation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimulation)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveReactions() { return STRUCT_OFFSET(ASimulation, ActiveReactions); } \
	FORCEINLINE static uint32 __PPO__Molecules() { return STRUCT_OFFSET(ASimulation, Molecules); } \
	FORCEINLINE static uint32 __PPO__PossibleReactions() { return STRUCT_OFFSET(ASimulation, PossibleReactions); } \
	FORCEINLINE static uint32 __PPO__PrototypeAtoms() { return STRUCT_OFFSET(ASimulation, PrototypeAtoms); } \
	FORCEINLINE static uint32 __PPO__PrototypeMolecules() { return STRUCT_OFFSET(ASimulation, PrototypeMolecules); } \
	FORCEINLINE static uint32 __PPO__SimulationCell() { return STRUCT_OFFSET(ASimulation, SimulationCell); } \
	FORCEINLINE static uint32 __PPO__SystemEnergy() { return STRUCT_OFFSET(ASimulation, SystemEnergy); } \
	FORCEINLINE static uint32 __PPO__SystemEnergyTolerance() { return STRUCT_OFFSET(ASimulation, SystemEnergyTolerance); } \
	FORCEINLINE static uint32 __PPO__Temperature() { return STRUCT_OFFSET(ASimulation, Temperature); } \
	FORCEINLINE static uint32 __PPO__TimeScale() { return STRUCT_OFFSET(ASimulation, TimeScale); }


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_33_PROLOG
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_RPC_WRAPPERS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_INCLASS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_INCLASS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<class ASimulation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Public_Simulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
