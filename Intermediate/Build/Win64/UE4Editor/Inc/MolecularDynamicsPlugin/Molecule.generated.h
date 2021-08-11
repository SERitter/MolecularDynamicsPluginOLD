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
#ifdef MOLECULARDYNAMICSPLUGIN_Molecule_generated_h
#error "Molecule.generated.h already included, missing '#pragma once' in Molecule.h"
#endif
#define MOLECULARDYNAMICSPLUGIN_Molecule_generated_h

#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_SPARSE_DATA
#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractingMolecules); \
	DECLARE_FUNCTION(execSetInteractingMolecules); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetNumAtoms); \
	DECLARE_FUNCTION(execGetDipoleMoment); \
	DECLARE_FUNCTION(execGetTotalMass); \
	DECLARE_FUNCTION(execGetMoleculeFormula); \
	DECLARE_FUNCTION(execGetMoleculeName);


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractingMolecules); \
	DECLARE_FUNCTION(execSetInteractingMolecules); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetNumAtoms); \
	DECLARE_FUNCTION(execGetDipoleMoment); \
	DECLARE_FUNCTION(execGetTotalMass); \
	DECLARE_FUNCTION(execGetMoleculeFormula); \
	DECLARE_FUNCTION(execGetMoleculeName);


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMolecule(); \
	friend struct Z_Construct_UClass_AMolecule_Statics; \
public: \
	DECLARE_CLASS(AMolecule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMolecule)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMolecule(); \
	friend struct Z_Construct_UClass_AMolecule_Statics; \
public: \
	DECLARE_CLASS(AMolecule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMolecule)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMolecule(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMolecule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMolecule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMolecule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMolecule(AMolecule&&); \
	NO_API AMolecule(const AMolecule&); \
public:


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMolecule(AMolecule&&); \
	NO_API AMolecule(const AMolecule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMolecule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMolecule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMolecule)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CenterOfMassIndicator() { return STRUCT_OFFSET(AMolecule, CenterOfMassIndicator); } \
	FORCEINLINE static uint32 __PPO__MoleculeName() { return STRUCT_OFFSET(AMolecule, MoleculeName); } \
	FORCEINLINE static uint32 __PPO__MoleculeFormula() { return STRUCT_OFFSET(AMolecule, MoleculeFormula); } \
	FORCEINLINE static uint32 __PPO__MoleculeIndex() { return STRUCT_OFFSET(AMolecule, MoleculeIndex); } \
	FORCEINLINE static uint32 __PPO__Atoms() { return STRUCT_OFFSET(AMolecule, Atoms); } \
	FORCEINLINE static uint32 __PPO__Bonds() { return STRUCT_OFFSET(AMolecule, Bonds); } \
	FORCEINLINE static uint32 __PPO__TotalMass() { return STRUCT_OFFSET(AMolecule, TotalMass); } \
	FORCEINLINE static uint32 __PPO__DipoleMoment() { return STRUCT_OFFSET(AMolecule, DipoleMoment); } \
	FORCEINLINE static uint32 __PPO__InteractingMolecules() { return STRUCT_OFFSET(AMolecule, InteractingMolecules); } \
	FORCEINLINE static uint32 __PPO__AngularVelocity() { return STRUCT_OFFSET(AMolecule, AngularVelocity); } \
	FORCEINLINE static uint32 __PPO__NetForce() { return STRUCT_OFFSET(AMolecule, NetForce); } \
	FORCEINLINE static uint32 __PPO__NetTorque() { return STRUCT_OFFSET(AMolecule, NetTorque); }


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_16_PROLOG
#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_SPARSE_DATA \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_RPC_WRAPPERS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_INCLASS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_SPARSE_DATA \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_INCLASS_NO_PURE_DECLS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<class AMolecule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
