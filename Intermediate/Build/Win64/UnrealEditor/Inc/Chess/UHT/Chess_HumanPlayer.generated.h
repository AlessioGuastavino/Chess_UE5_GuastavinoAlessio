// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chess_HumanPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicPiece;
#ifdef CHESS_Chess_HumanPlayer_generated_h
#error "Chess_HumanPlayer.generated.h already included, missing '#pragma once' in Chess_HumanPlayer.h"
#endif
#define CHESS_Chess_HumanPlayer_generated_h

#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_SPARSE_DATA
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClick);


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClick);


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_ACCESSORS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChess_HumanPlayer(); \
	friend struct Z_Construct_UClass_AChess_HumanPlayer_Statics; \
public: \
	DECLARE_CLASS(AChess_HumanPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AChess_HumanPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AChess_HumanPlayer*>(this); }


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAChess_HumanPlayer(); \
	friend struct Z_Construct_UClass_AChess_HumanPlayer_Statics; \
public: \
	DECLARE_CLASS(AChess_HumanPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AChess_HumanPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<AChess_HumanPlayer*>(this); }


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChess_HumanPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChess_HumanPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChess_HumanPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChess_HumanPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChess_HumanPlayer(AChess_HumanPlayer&&); \
	NO_API AChess_HumanPlayer(const AChess_HumanPlayer&); \
public: \
	NO_API virtual ~AChess_HumanPlayer();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChess_HumanPlayer(AChess_HumanPlayer&&); \
	NO_API AChess_HumanPlayer(const AChess_HumanPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChess_HumanPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChess_HumanPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChess_HumanPlayer) \
	NO_API virtual ~AChess_HumanPlayer();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_22_PROLOG
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_RPC_WRAPPERS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_INCLASS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class AChess_HumanPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h


#define FOREACH_ENUM_ESTATE(op) \
	op(EState::UNCHOSEN) \
	op(EState::SELECTED) \
	op(EState::PROMOTION) 

enum class EState : int16;
template<> struct TIsUEnumClass<EState> { enum { Value = true }; };
template<> CHESS_API UEnum* StaticEnum<EState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
