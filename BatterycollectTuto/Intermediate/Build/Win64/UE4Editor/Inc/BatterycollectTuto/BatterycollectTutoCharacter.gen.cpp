// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatterycollectTuto/BatterycollectTutoCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatterycollectTutoCharacter() {}
// Cross Module References
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatterycollectTutoCharacter_NoRegister();
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatterycollectTutoCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BatterycollectTuto();
	BATTERYCOLLECTTUTO_API UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups();
	BATTERYCOLLECTTUTO_API UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower();
	BATTERYCOLLECTTUTO_API UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower();
	BATTERYCOLLECTTUTO_API UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect();
	BATTERYCOLLECTTUTO_API UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABatterycollectTutoCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
	void ABatterycollectTutoCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatterycollectTutoCharacter_PowerChangeEffect),NULL);
	}
	void ABatterycollectTutoCharacter::StaticRegisterNativesABatterycollectTutoCharacter()
	{
		UClass* Class = ABatterycollectTutoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &ABatterycollectTutoCharacter::execCollectPickups },
			{ "GetCurrentPower", &ABatterycollectTutoCharacter::execGetCurrentPower },
			{ "GetInitialPower", &ABatterycollectTutoCharacter::execGetInitialPower },
			{ "UpdatePower", &ABatterycollectTutoCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickups" },
		{ "Comment", "//Called when we press a key to collect any pickups inside the collectionsphere\n" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Called when we press a key to collect any pickups inside the collectionsphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterycollectTutoCharacter, nullptr, "CollectPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics
	{
		struct BatterycollectTutoCharacter_eventGetCurrentPower_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatterycollectTutoCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "/*Accessor function for current power*/" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Accessor function for current power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterycollectTutoCharacter, nullptr, "GetCurrentPower", nullptr, nullptr, sizeof(BatterycollectTutoCharacter_eventGetCurrentPower_Parms), Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics
	{
		struct BatterycollectTutoCharacter_eventGetInitialPower_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatterycollectTutoCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "/*Accessor function for initial power*/" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Accessor function for initial power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterycollectTutoCharacter, nullptr, "GetInitialPower", nullptr, nullptr, sizeof(BatterycollectTutoCharacter_eventGetInitialPower_Parms), Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterycollectTutoCharacter, nullptr, "PowerChangeEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics
	{
		struct BatterycollectTutoCharacter_eventUpdatePower_Parms
		{
			float PowerChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::NewProp_PowerChange = { "PowerChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatterycollectTutoCharacter_eventUpdatePower_Parms, PowerChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::NewProp_PowerChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "/*Function to update the character's power\n\x09* @param powerchange this is the amount to change the power by, and it can be positive or negative\n\x09*/" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Function to update the character's power\n       * @param powerchange this is the amount to change the power by, and it can be positive or negative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatterycollectTutoCharacter, nullptr, "UpdatePower", nullptr, nullptr, sizeof(BatterycollectTutoCharacter_eventUpdatePower_Parms), Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatterycollectTutoCharacter_NoRegister()
	{
		return ABatterycollectTutoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABatterycollectTutoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BatterycollectTuto,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatterycollectTutoCharacter_CollectPickups, "CollectPickups" }, // 3877743196
		{ &Z_Construct_UFunction_ABatterycollectTutoCharacter_GetCurrentPower, "GetCurrentPower" }, // 906378623
		{ &Z_Construct_UFunction_ABatterycollectTutoCharacter_GetInitialPower, "GetInitialPower" }, // 3415932749
		{ &Z_Construct_UFunction_ABatterycollectTutoCharacter_PowerChangeEffect, "PowerChangeEffect" }, // 3566050723
		{ &Z_Construct_UFunction_ABatterycollectTutoCharacter_UpdatePower, "UpdatePower" }, // 694756924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BatterycollectTutoCharacter.h" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CurrentPower_MetaData[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CurrentPower = { "CurrentPower", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, CurrentPower), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CurrentPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CurrentPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//Speed when power level = 0\n" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Speed when power level = 0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//Multiplier for character speed\n" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Multiplier for character speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_SpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_InitialPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//Power of the player when the game starts\n" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Power of the player when the game starts" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_InitialPower = { "InitialPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, InitialPower), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_InitialPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_InitialPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Collection sphere */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Collection sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatterycollectTutoCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CurrentPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_InitialPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatterycollectTutoCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::ClassParams = {
		&ABatterycollectTutoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatterycollectTutoCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatterycollectTutoCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatterycollectTutoCharacter, 3870854236);
	template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<ABatterycollectTutoCharacter>()
	{
		return ABatterycollectTutoCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatterycollectTutoCharacter(Z_Construct_UClass_ABatterycollectTutoCharacter, &ABatterycollectTutoCharacter::StaticClass, TEXT("/Script/BatterycollectTuto"), TEXT("ABatterycollectTutoCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatterycollectTutoCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
