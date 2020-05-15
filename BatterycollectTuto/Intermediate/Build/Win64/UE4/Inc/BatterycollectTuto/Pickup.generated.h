// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTTUTO_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define BATTERYCOLLECTTUTO_Pickup_generated_h

#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_SPARSE_DATA
#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_RPC_WRAPPERS \
	virtual void WasCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_EVENT_PARMS
#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_CALLBACK_WRAPPERS
#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(APickup, PickupMesh); }


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_9_PROLOG \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_EVENT_PARMS


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_RPC_WRAPPERS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_CALLBACK_WRAPPERS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_INCLASS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_CALLBACK_WRAPPERS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatterycollectTuto_Source_BatterycollectTuto_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
