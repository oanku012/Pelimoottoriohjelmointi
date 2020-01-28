// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatterycollectTuto/BatterycollectTutoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatterycollectTutoGameMode() {}
// Cross Module References
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatterycollectTutoGameMode_NoRegister();
	BATTERYCOLLECTTUTO_API UClass* Z_Construct_UClass_ABatterycollectTutoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BatterycollectTuto();
// End Cross Module References
	void ABatterycollectTutoGameMode::StaticRegisterNativesABatterycollectTutoGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABatterycollectTutoGameMode_NoRegister()
	{
		return ABatterycollectTutoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatterycollectTutoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatterycollectTuto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatterycollectTutoGameMode.h" },
		{ "ModuleRelativePath", "BatterycollectTutoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "/*The rate at which the character loses power*/" },
		{ "ModuleRelativePath", "BatterycollectTutoGameMode.h" },
		{ "ToolTip", "The rate at which the character loses power" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatterycollectTutoGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::NewProp_DecayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::NewProp_DecayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatterycollectTutoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::ClassParams = {
		&ABatterycollectTutoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatterycollectTutoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatterycollectTutoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatterycollectTutoGameMode, 929157302);
	template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<ABatterycollectTutoGameMode>()
	{
		return ABatterycollectTutoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatterycollectTutoGameMode(Z_Construct_UClass_ABatterycollectTutoGameMode, &ABatterycollectTutoGameMode::StaticClass, TEXT("/Script/BatterycollectTuto"), TEXT("ABatterycollectTutoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatterycollectTutoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
