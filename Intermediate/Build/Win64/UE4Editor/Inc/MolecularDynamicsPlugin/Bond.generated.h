// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAtom;
class ABond;
struct FLinearColor;
#ifdef MOLECULARDYNAMICSPLUGIN_Bond_generated_h
#error "Bond.generated.h already included, missing '#pragma once' in Bond.h"
#endif
#define MOLECULARDYNAMICSPLUGIN_Bond_generated_h

#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_SPARSE_DATA
#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateBondLength); \
	DECLARE_FUNCTION(execUpdateBondEnergy); \
	DECLARE_FUNCTION(execSetAtomB); \
	DECLARE_FUNCTION(execSetAtomA); \
	DECLARE_FUNCTION(execGetAtomB); \
	DECLARE_FUNCTION(execGetAtomA); \
	DECLARE_FUNCTION(execGetBondLength); \
	DECLARE_FUNCTION(execGetBondEnergy); \
	DECLARE_FUNCTION(execGetBondType); \
	DECLARE_FUNCTION(execGetBondName); \
	DECLARE_FUNCTION(execInitBondCopy); \
	DECLARE_FUNCTION(execInitBondPrototype); \
	DECLARE_FUNCTION(execInitBond);


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateBondLength); \
	DECLARE_FUNCTION(execUpdateBondEnergy); \
	DECLARE_FUNCTION(execSetAtomB); \
	DECLARE_FUNCTION(execSetAtomA); \
	DECLARE_FUNCTION(execGetAtomB); \
	DECLARE_FUNCTION(execGetAtomA); \
	DECLARE_FUNCTION(execGetBondLength); \
	DECLARE_FUNCTION(execGetBondEnergy); \
	DECLARE_FUNCTION(execGetBondType); \
	DECLARE_FUNCTION(execGetBondName); \
	DECLARE_FUNCTION(execInitBondCopy); \
	DECLARE_FUNCTION(execInitBondPrototype); \
	DECLARE_FUNCTION(execInitBond);


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABond(); \
	friend struct Z_Construct_UClass_ABond_Statics; \
public: \
	DECLARE_CLASS(ABond, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABond)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABond(); \
	friend struct Z_Construct_UClass_ABond_Statics; \
public: \
	DECLARE_CLASS(ABond, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MolecularDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABond)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABond(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABond) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABond); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABond); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABond(ABond&&); \
	NO_API ABond(const ABond&); \
public:


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABond(ABond&&); \
	NO_API ABond(const ABond&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABond); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABond); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABond)


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AtomA() { return STRUCT_OFFSET(ABond, AtomA); } \
	FORCEINLINE static uint32 __PPO__AtomB() { return STRUCT_OFFSET(ABond, AtomB); } \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(ABond, Name); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ABond, Type); } \
	FORCEINLINE static uint32 __PPO__EquilibriumLength() { return STRUCT_OFFSET(ABond, EquilibriumLength); } \
	FORCEINLINE static uint32 __PPO__Length() { return STRUCT_OFFSET(ABond, Length); } \
	FORCEINLINE static uint32 __PPO__SpringConstant() { return STRUCT_OFFSET(ABond, SpringConstant); } \
	FORCEINLINE static uint32 __PPO__Representation() { return STRUCT_OFFSET(ABond, Representation); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(ABond, Material); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(ABond, Color); }


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_13_PROLOG
#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_SPARSE_DATA \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_RPC_WRAPPERS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_INCLASS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_SPARSE_DATA \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_INCLASS_NO_PURE_DECLS \
	UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<class ABond>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_Bond_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
