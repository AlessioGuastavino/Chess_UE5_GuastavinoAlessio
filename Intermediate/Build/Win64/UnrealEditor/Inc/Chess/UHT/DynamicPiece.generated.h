// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicPiece.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_DynamicPiece_generated_h
#error "DynamicPiece.generated.h already included, missing '#pragma once' in DynamicPiece.h"
#endif
#define CHESS_DynamicPiece_generated_h

#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_SPARSE_DATA
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_RPC_WRAPPERS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_ACCESSORS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADynamicPiece(); \
	friend struct Z_Construct_UClass_ADynamicPiece_Statics; \
public: \
	DECLARE_CLASS(ADynamicPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(ADynamicPiece)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_INCLASS \
private: \
	static void StaticRegisterNativesADynamicPiece(); \
	friend struct Z_Construct_UClass_ADynamicPiece_Statics; \
public: \
	DECLARE_CLASS(ADynamicPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(ADynamicPiece)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynamicPiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynamicPiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicPiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicPiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicPiece(ADynamicPiece&&); \
	NO_API ADynamicPiece(const ADynamicPiece&); \
public: \
	NO_API virtual ~ADynamicPiece();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADynamicPiece(ADynamicPiece&&); \
	NO_API ADynamicPiece(const ADynamicPiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicPiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicPiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADynamicPiece) \
	NO_API virtual ~ADynamicPiece();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_29_PROLOG
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_RPC_WRAPPERS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_INCLASS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class ADynamicPiece>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h


#define FOREACH_ENUM_ECATEGORY(op) \
	op(ECategory::MOVE) \
	op(ECategory::PIECE) \
	op(ECategory::UN_DEF) 

enum class ECategory : uint32;
template<> struct TIsUEnumClass<ECategory> { enum { Value = true }; };
template<> CHESS_API UEnum* StaticEnum<ECategory>();

#define FOREACH_ENUM_EPIECE(op) \
	op(EPiece::ANY) \
	op(EPiece::ROOK) \
	op(EPiece::KNIGHT) \
	op(EPiece::BISHOP) \
	op(EPiece::PAWN) \
	op(EPiece::QUEEN) \
	op(EPiece::KING) 

enum class EPiece : uint32;
template<> struct TIsUEnumClass<EPiece> { enum { Value = true }; };
template<> CHESS_API UEnum* StaticEnum<EPiece>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
