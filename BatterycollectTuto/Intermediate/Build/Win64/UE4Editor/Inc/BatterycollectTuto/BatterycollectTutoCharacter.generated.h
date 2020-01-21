// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTTUTO_BatterycollectTutoCharacter_generated_h
#error "BatterycollectTutoCharacter.generated.h already included, missing '#pragma once' in BatterycollectTutoCharacter.h"
#endif
#define BATTERYCOLLECTTUTO_BatterycollectTutoCharacter_generated_h

#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_SPARSE_DATA
#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	}


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatterycollectTutoCharacter(); \
	friend struct Z_Construct_UClass_ABatterycollectTutoCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatterycollectTutoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), NO_API) \
	DECLARE_SERIALIZER(ABatterycollectTutoCharacter)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatterycollectTutoCharacter(); \
	friend struct Z_Construct_UClass_ABatterycollectTutoCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatterycollectTutoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatterycollectTuto"), NO_API) \
	DECLARE_SERIALIZER(ABatterycollectTutoCharacter)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatterycollectTutoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatterycollectTutoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatterycollectTutoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatterycollectTutoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatterycollectTutoCharacter(ABatterycollectTutoCharacter&&); \
	NO_API ABatterycollectTutoCharacter(const ABatterycollectTutoCharacter&); \
public:


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatterycollectTutoCharacter(ABatterycollectTutoCharacter&&); \
	NO_API ABatterycollectTutoCharacter(const ABatterycollectTutoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatterycollectTutoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatterycollectTutoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatterycollectTutoCharacter)


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatterycollectTutoCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatterycollectTutoCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ABatterycollectTutoCharacter, CollectionSphere); }


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_9_PROLOG
#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_RPC_WRAPPERS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_INCLASS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_SPARSE_DATA \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTTUTO_API UClass* StaticClass<class ABatterycollectTutoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatterycollectTuto_Source_BatterycollectTuto_BatterycollectTutoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
