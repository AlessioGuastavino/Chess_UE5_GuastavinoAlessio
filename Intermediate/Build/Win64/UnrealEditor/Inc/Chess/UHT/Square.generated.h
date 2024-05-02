// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Square.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_Square_generated_h
#error "Square.generated.h already included, missing '#pragma once' in Square.h"
#endif
#define CHESS_Square_generated_h

#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_SPARSE_DATA
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_RPC_WRAPPERS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_ACCESSORS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASquare(); \
	friend struct Z_Construct_UClass_ASquare_Statics; \
public: \
	DECLARE_CLASS(ASquare, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(ASquare)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASquare(); \
	friend struct Z_Construct_UClass_ASquare_Statics; \
public: \
	DECLARE_CLASS(ASquare, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(ASquare)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASquare(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASquare) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquare); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquare); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquare(ASquare&&); \
	NO_API ASquare(const ASquare&); \
public: \
	NO_API virtual ~ASquare();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASquare(ASquare&&); \
	NO_API ASquare(const ASquare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASquare); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASquare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASquare) \
	NO_API virtual ~ASquare();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_19_PROLOG
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_RPC_WRAPPERS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_INCLASS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class ASquare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h


#define FOREACH_ENUM_ECOLOR(op) \
	op(EColor::WHITE) \
	op(EColor::BLACK) \
	op(EColor::UN_DEF) 

enum class EColor : uint16;
template<> struct TIsUEnumClass<EColor> { enum { Value = true }; };
template<> CHESS_API UEnum* StaticEnum<EColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
