// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UStaticMeshComponent;
struct FVector;
class AAtom;
struct FLinearColor;
#ifdef MOLECULARDYNAMICSPLUGIN_Atom_generated_h
#error "Atom.generated.h already included, missing '#pragma once' in Atom.h"
#endif
#define MOLECULARDYNAMICSPLUGIN_Atom_generated_h

#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_SPARSE_DATA
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetAtomIndex); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetAtomIndex); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetVanDerWaalsMagnitude); \
	DECLARE_FUNCTION(execGetVanDerWaalsRadius); \
	DECLARE_FUNCTION(execGetCovalentRadius); \
	DECLARE_FUNCTION(execGetCharge); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execInitAtomExactCopy); \
	DECLARE_FUNCTION(execInitAtomCopy); \
	DECLARE_FUNCTION(execInitAtomPrototype);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetAtomIndex); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetAtomIndex); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetVanDerWaalsMagnitude); \
	DECLARE_FUNCTION(execGetVanDerWaalsRadius); \
	DECLARE_FUNCTION(execGetCovalentRadius); \
	DECLARE_FUNCTION(execGetCharge); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execInitAtomExactCopy); \
	DECLARE_FUNCTION(execInitAtomCopy); \
	DECLARE_FUNCTION(execInitAtomPrototype);


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtom(); \
	friend struct Z_Construct_UClass_AAtom_Statics; \
public: \
	DECLARE_CLASS(AAtom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAtom)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAtom(); \
	friend struct Z_Construct_UClass_AAtom_Statics; \
public: \
	DECLARE_CLASS(AAtom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(AAtom)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtom(AAtom&&); \
	NO_API AAtom(const AAtom&); \
public:


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtom(AAtom&&); \
	NO_API AAtom(const AAtom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAtom)


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(AAtom, Name); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(AAtom, Type); } \
	FORCEINLINE static uint32 __PPO__Symbol() { return STRUCT_OFFSET(AAtom, Symbol); } \
	FORCEINLINE static uint32 __PPO__AtomRepresentation() { return STRUCT_OFFSET(AAtom, AtomRepresentation); } \
	FORCEINLINE static uint32 __PPO__AtomMaterial() { return STRUCT_OFFSET(AAtom, AtomMaterial); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(AAtom, Color); } \
	FORCEINLINE static uint32 __PPO__CovalentRadius() { return STRUCT_OFFSET(AAtom, CovalentRadius); } \
	FORCEINLINE static uint32 __PPO__Charge() { return STRUCT_OFFSET(AAtom, Charge); } \
	FORCEINLINE static uint32 __PPO__Mass() { return STRUCT_OFFSET(AAtom, Mass); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(AAtom, Position); } \
	FORCEINLINE static uint32 __PPO__VanDerWaalsRadius() { return STRUCT_OFFSET(AAtom, VanDerWaalsRadius); } \
	FORCEINLINE static uint32 __PPO__VanDerWaalsMagnitude() { return STRUCT_OFFSET(AAtom, VanDerWaalsMagnitude); } \
	FORCEINLINE static uint32 __PPO__AtomArrayIndex() { return STRUCT_OFFSET(AAtom, AtomArrayIndex); }


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_11_PROLOG
#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_RPC_WRAPPERS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_INCLASS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_PRIVATE_PROPERTY_OFFSET \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_SPARSE_DATA \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_INCLASS_NO_PURE_DECLS \
	DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<class AAtom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DynamicsPlugin_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Atom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
