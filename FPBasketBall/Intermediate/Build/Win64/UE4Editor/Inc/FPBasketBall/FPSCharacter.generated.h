// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPBASKETBALL_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPBASKETBALL_FPSCharacter_generated_h

#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_SPARSE_DATA
#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPBasketBall"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPBasketBall"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_9_PROLOG
#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_SPARSE_DATA \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_RPC_WRAPPERS \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_INCLASS \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_SPARSE_DATA \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FPBasketBall_Source_FPBasketBall_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPBASKETBALL_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPBasketBall_Source_FPBasketBall_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
