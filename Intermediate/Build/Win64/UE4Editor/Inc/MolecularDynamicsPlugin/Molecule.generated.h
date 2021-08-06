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

#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_SPARSE_DATA
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractingMolecules); \
	DECLARE_FUNCTION(execSetInteractingMolecules); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetDipoleMoment); \
	DECLARE_FUNCTION(execGetTotalMass); \
	DECLARE_FUNCTION(execGetMolecularFormula); \
	DECLARE_FUNCTION(execGetName);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractingMolecules); \
	DECLARE_FUNCTION(execSetInteractingMolecules); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetDipoleMoment); \
	DECLARE_FUNCTION(execGetTotalMass); \
	DECLARE_FUNCTION(execGetMolecularFormula); \
	DECLARE_FUNCTION(execGetName);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMolecule(); \
	friend struct Z_Construct_UClass_AMolecule_Statics; \
public: \
	DECLARE_CLASS(AMolecule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMolecule)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMolecule(); \
	friend struct Z_Construct_UClass_AMolecule_Statics; \
public: \
	DECLARE_CLASS(AMolecule, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMolecule)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_STANDARD_CONSTRUCTORS \
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


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMolecule(AMolecule&&); \
	NO_API AMolecule(const AMolecule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMolecule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMolecule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMolecule)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CenterOfMassIndicator() { return STRUCT_OFFSET(AMolecule, CenterOfMassIndicator); } \
	FORCEINLINE static uint32 __PPO__IsPrototype() { return STRUCT_OFFSET(AMolecule, IsPrototype); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(AMolecule, Name); } \
	FORCEINLINE static uint32 __PPO__MolecularFormula() { return STRUCT_OFFSET(AMolecule, MolecularFormula); } \
	FORCEINLINE static uint32 __PPO__Atoms() { return STRUCT_OFFSET(AMolecule, Atoms); } \
	FORCEINLINE static uint32 __PPO__Bonds() { return STRUCT_OFFSET(AMolecule, Bonds); } \
	FORCEINLINE static uint32 __PPO__TotalMass() { return STRUCT_OFFSET(AMolecule, TotalMass); } \
	FORCEINLINE static uint32 __PPO__DipoleMoment() { return STRUCT_OFFSET(AMolecule, DipoleMoment); } \
	FORCEINLINE static uint32 __PPO__InteractingMolecules() { return STRUCT_OFFSET(AMolecule, InteractingMolecules); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(AMolecule, Position); } \
	FORCEINLINE static uint32 __PPO__Orientation() { return STRUCT_OFFSET(AMolecule, Orientation); } \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(AMolecule, Velocity); } \
	FORCEINLINE static uint32 __PPO__AngularVelocity() { return STRUCT_OFFSET(AMolecule, AngularVelocity); } \
	FORCEINLINE static uint32 __PPO__NetForce() { return STRUCT_OFFSET(AMolecule, NetForce); } \
	FORCEINLINE static uint32 __PPO__NetTorque() { return STRUCT_OFFSET(AMolecule, NetTorque); }


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_12_PROLOG
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_RPC_WRAPPERS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_INCLASS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_INCLASS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<class AMolecule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Molecule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
