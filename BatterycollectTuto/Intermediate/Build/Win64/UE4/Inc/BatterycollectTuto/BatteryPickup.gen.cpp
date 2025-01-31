// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatterycollectTuto/BatteryPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatteryPickup();
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatterycollectTuto();
// End Cross Module References
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BatteryPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_good_MetaData[];
#endif
		static void NewProp_good_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_good;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatterycollectTuto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BatteryPickup.h" },
		{ "ModuleRelativePath", "BatteryPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "/*Set the amount of power the battery gives to the character*/" },
		{ "ModuleRelativePath", "BatteryPickup.h" },
		{ "ToolTip", "Set the amount of power the battery gives to the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower = { "BatteryPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryPickup, BatteryPower), METADATA_PARAMS(Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryPickup.h" },
	};
#endif
	void Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good_SetBit(void* Obj)
	{
		((ABatteryPickup*)Obj)->good = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good = { "good", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABatteryPickup), &Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPickup_Statics::NewProp_BatteryPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPickup_Statics::NewProp_good,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPickup_Statics::ClassParams = {
		&ABatteryPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABatteryPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryPickup, 852865270);
	template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<ABatteryPickup>()
	{
		return ABatteryPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, &ABatteryPickup::StaticClass, TEXT("/Script/BatterycollectTuto"), TEXT("ABatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
