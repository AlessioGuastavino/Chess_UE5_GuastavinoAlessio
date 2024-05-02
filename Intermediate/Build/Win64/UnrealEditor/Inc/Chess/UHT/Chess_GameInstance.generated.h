// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chess_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_Chess_GameInstance_generated_h
#error "Chess_GameInstance.generated.h already included, missing '#pragma once' in Chess_GameInstance.h"
#endif
#define CHESS_Chess_GameInstance_generated_h

#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_SPARSE_DATA
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInfoMessage); \
	DECLARE_FUNCTION(execGetInfoMessage); \
	DECLARE_FUNCTION(execSetTurnMessage); \
	DECLARE_FUNCTION(execGetTurnMessage); \
	DECLARE_FUNCTION(execGetAIScore); \
	DECLARE_FUNCTION(execGetHumanScore);


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInfoMessage); \
	DECLARE_FUNCTION(execGetInfoMessage); \
	DECLARE_FUNCTION(execSetTurnMessage); \
	DECLARE_FUNCTION(execGetTurnMessage); \
	DECLARE_FUNCTION(execGetAIScore); \
	DECLARE_FUNCTION(execGetHumanScore);


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_ACCESSORS
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChess_GameInstance(); \
	friend struct Z_Construct_UClass_UChess_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UChess_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(UChess_GameInstance)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUChess_GameInstance(); \
	friend struct Z_Construct_UClass_UChess_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UChess_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(UChess_GameInstance)


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChess_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChess_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChess_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChess_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChess_GameInstance(UChess_GameInstance&&); \
	NO_API UChess_GameInstance(const UChess_GameInstance&); \
public: \
	NO_API virtual ~UChess_GameInstance();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChess_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChess_GameInstance(UChess_GameInstance&&); \
	NO_API UChess_GameInstance(const UChess_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChess_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChess_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChess_GameInstance) \
	NO_API virtual ~UChess_GameInstance();


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_10_PROLOG
#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_RPC_WRAPPERS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_INCLASS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_SPARSE_DATA \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_ACCESSORS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class UChess_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
