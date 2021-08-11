// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOLECULARDYNAMICSPLUGIN_BondType_generated_h
#error "BondType.generated.h already included, missing '#pragma once' in BondType.h"
#endif
#define MOLECULARDYNAMICSPLUGIN_BondType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealDynamics_Plugins_MolecularDynamicsPlugin_Source_MolecularDynamicsPlugin_Private_BondType_h


#define FOREACH_ENUM_EBONDTYPE(op) \
	op(EBondType::SINGLE) \
	op(EBondType::DOUBLE) \
	op(EBondType::TRIPLE) \
	op(EBondType::HYDROGEN) 

enum class EBondType : uint8;
template<> MOLECULARDYNAMICSPLUGIN_API UEnum* StaticEnum<EBondType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
