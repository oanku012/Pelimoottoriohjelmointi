// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBatteryPlayState : uint8;
#ifdef BATTERYCOLLECTTUTO_BatterycollectTutoGameMode_generated_h
#error "BatterycollectTutoGameMode.generated.h already included, missing '#pragma once' in BatterycollectTutoGameMode.h"
#endif
#define BATTERYCOLLECTTUTO_BatterycollectTutoGameMode_generated_h

#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_SPARSE_DATA
#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBatteryPlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWin(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBatteryPlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWin(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatterycollectTutoGameMode(); \
	friend struct Z_Construct_UClass_ABatterycollectTutoGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatterycollectTutoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), BATTERYCOLLECTTUTO_API) \
	DECLARE_SERIALIZER(ABatterycollectTutoGameMode)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABatterycollectTutoGameMode(); \
	friend struct Z_Construct_UClass_ABatterycollectTutoGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatterycollectTutoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), BATTERYCOLLECTTUTO_API) \
	DECLARE_SERIALIZER(ABatterycollectTutoGameMode)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTERYCOLLECTTUTO_API ABatterycollectTutoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatterycollectTutoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECTTUTO_API, ABatterycollectTutoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatterycollectTutoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECTTUTO_API ABatterycollectTutoGameMode(ABatterycollectTutoGameMode&&); \
	BATTERYCOLLECTTUTO_API ABatterycollectTutoGameMode(const ABatterycollectTutoGameMode&); \
public:


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECTTUTO_API ABatterycollectTutoGameMode(ABatterycollectTutoGameMode&&); \
	BATTERYCOLLECTTUTO_API ABatterycollectTutoGameMode(const ABatterycollectTutoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECTTUTO_API, ABatterycollectTutoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatterycollectTutoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatterycollectTutoGameMode)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(ABatterycollectTutoGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWin() { return STRUCT_OFFSET(ABatterycollectTutoGameMode, PowerToWin); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ABatterycollectTutoGameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ABatterycollectTutoGameMode, CurrentWidget); }


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_19_PROLOG
#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_RPC_WRAPPERS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_INCLASS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_INCLASS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<class ABatterycollectTutoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoGameMode_h


#define FOREACH_ENUM_EBATTERYPLAYSTATE(op) \
	op(EBatteryPlayState::EPlaying) \
	op(EBatteryPlayState::EGameOver) \
	op(EBatteryPlayState::EWon) \
	op(EBatteryPlayState::EUnknown) 

enum class EBatteryPlayState : uint8;
template<> BATTERYCOLLECTTUTO_API UEnum* StaticEnum<EBatteryPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
