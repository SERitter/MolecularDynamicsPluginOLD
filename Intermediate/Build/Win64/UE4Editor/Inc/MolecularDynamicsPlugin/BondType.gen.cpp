// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/BondType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBondType() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UEnum* Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
// End Cross Module References
	static UEnum* EBondType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType, Z_Construct_UPackage__Script_MolecularDynamicsPlugin(), TEXT("EBondType"));
		}
		return Singleton;
	}
	template<> MOLECULARDYNAMICSPLUGIN_API UEnum* StaticEnum<EBondType>()
	{
		return EBondType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBondType(EBondType_StaticEnum, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("EBondType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType_Hash() { return 2369361024U; }
	UEnum* Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBondType"), 0, Get_Z_Construct_UEnum_MolecularDynamicsPlugin_EBondType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBondType::SINGLE", (int64)EBondType::SINGLE },
				{ "EBondType::DOUBLE", (int64)EBondType::DOUBLE },
				{ "EBondType::TRIPLE", (int64)EBondType::TRIPLE },
				{ "EBondType::HYDROGEN", (int64)EBondType::HYDROGEN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOUBLE.DisplayName", "Double" },
				{ "DOUBLE.Name", "EBondType::DOUBLE" },
				{ "HYDROGEN.DisplayName", "Hydrogen" },
				{ "HYDROGEN.Name", "EBondType::HYDROGEN" },
				{ "ModuleRelativePath", "Private/BondType.h" },
				{ "SINGLE.DisplayName", "Single" },
				{ "SINGLE.Name", "EBondType::SINGLE" },
				{ "TRIPLE.DisplayName", "Triple" },
				{ "TRIPLE.Name", "EBondType::TRIPLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
				nullptr,
				"EBondType",
				"EBondType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
