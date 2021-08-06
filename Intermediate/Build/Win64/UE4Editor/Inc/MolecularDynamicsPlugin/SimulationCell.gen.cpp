// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MolecularDynamicsPlugin/Private/SimulationCell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationCell() {}
// Cross Module References
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ASimulationCell_NoRegister();
	MOLECULARDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_ASimulationCell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MolecularDynamicsPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASimulationCell::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulationCell::execSetWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidth(Z_Param_CellWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulationCell::execSetShapeColor)
	{
		P_GET_STRUCT(FColor,Z_Param_LineColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShapeColor(Z_Param_LineColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulationCell::execInitVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CellWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitVolume(Z_Param_CellWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulationCell::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASimulationCell::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	void ASimulationCell::StaticRegisterNativesASimulationCell()
	{
		UClass* Class = ASimulationCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVolume", &ASimulationCell::execGetVolume },
			{ "GetWidth", &ASimulationCell::execGetWidth },
			{ "InitVolume", &ASimulationCell::execInitVolume },
			{ "SetShapeColor", &ASimulationCell::execSetShapeColor },
			{ "SetVolume", &ASimulationCell::execSetVolume },
			{ "SetWidth", &ASimulationCell::execSetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimulationCell_GetVolume_Statics
	{
		struct SimulationCell_eventGetVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "GetVolume", nullptr, nullptr, sizeof(SimulationCell_eventGetVolume_Parms), Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulationCell_GetWidth_Statics
	{
		struct SimulationCell_eventGetWidth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "GetWidth", nullptr, nullptr, sizeof(SimulationCell_eventGetWidth_Parms), Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulationCell_InitVolume_Statics
	{
		struct SimulationCell_eventInitVolume_Parms
		{
			float CellWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventInitVolume_Parms, CellWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::NewProp_CellWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "InitVolume", nullptr, nullptr, sizeof(SimulationCell_eventInitVolume_Parms), Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_InitVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_InitVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics
	{
		struct SimulationCell_eventSetShapeColor_Parms
		{
			FColor LineColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventSetShapeColor_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::NewProp_LineColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//LineThickness is a protected member, we will have to add a different representation to adjust this value.\n//UFUNCTION()\n//void SetLineThickness(float LineThickness);\n" },
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
		{ "ToolTip", "LineThickness is a protected member, we will have to add a different representation to adjust this value.\nUFUNCTION()\nvoid SetLineThickness(float LineThickness);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "SetShapeColor", nullptr, nullptr, sizeof(SimulationCell_eventSetShapeColor_Parms), Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_SetShapeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_SetShapeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulationCell_SetVolume_Statics
	{
		struct SimulationCell_eventSetVolume_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * sets the dimensions based upon a desired volume\n\x09 * @param Volume: The desired volume in Cubic Unreal Units. 1 UU = 1 pM\n\x09 */" },
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
		{ "ToolTip", "sets the dimensions based upon a desired volume\n@param Volume: The desired volume in Cubic Unreal Units. 1 UU = 1 pM" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "SetVolume", nullptr, nullptr, sizeof(SimulationCell_eventSetVolume_Parms), Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASimulationCell_SetWidth_Statics
	{
		struct SimulationCell_eventSetWidth_Parms
		{
			float CellWidth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimulationCell_eventSetWidth_Parms, CellWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::NewProp_CellWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimulationCell, nullptr, "SetWidth", nullptr, nullptr, sizeof(SimulationCell_eventSetWidth_Parms), Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimulationCell_SetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASimulationCell_SetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASimulationCell_NoRegister()
	{
		return ASimulationCell::StaticClass();
	}
	struct Z_Construct_UClass_ASimulationCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulationVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimulationCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MolecularDynamicsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimulationCell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimulationCell_GetVolume, "GetVolume" }, // 3452058015
		{ &Z_Construct_UFunction_ASimulationCell_GetWidth, "GetWidth" }, // 310141153
		{ &Z_Construct_UFunction_ASimulationCell_InitVolume, "InitVolume" }, // 3843201554
		{ &Z_Construct_UFunction_ASimulationCell_SetShapeColor, "SetShapeColor" }, // 2605044313
		{ &Z_Construct_UFunction_ASimulationCell_SetVolume, "SetVolume" }, // 2943253107
		{ &Z_Construct_UFunction_ASimulationCell_SetWidth, "SetWidth" }, // 454570387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulationCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimulationCell.h" },
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimulationCell_Statics::NewProp_SimulationVolume_MetaData[] = {
		{ "Category", "Simulation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SimulationCell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimulationCell_Statics::NewProp_SimulationVolume = { "SimulationVolume", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASimulationCell, SimulationVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimulationCell_Statics::NewProp_SimulationVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCell_Statics::NewProp_SimulationVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimulationCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimulationCell_Statics::NewProp_SimulationVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimulationCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimulationCell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASimulationCell_Statics::ClassParams = {
		&ASimulationCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimulationCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCell_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimulationCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimulationCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimulationCell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASimulationCell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASimulationCell, 1598536081);
	template<> MOLECULARDYNAMICSPLUGIN_API UClass* StaticClass<ASimulationCell>()
	{
		return ASimulationCell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimulationCell(Z_Construct_UClass_ASimulationCell, &ASimulationCell::StaticClass, TEXT("/Script/MolecularDynamicsPlugin"), TEXT("ASimulationCell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimulationCell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
