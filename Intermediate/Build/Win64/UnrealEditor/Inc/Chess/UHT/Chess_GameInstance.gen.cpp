// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_GameInstance() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_UChess_GameInstance();
	CHESS_API UClass* Z_Construct_UClass_UChess_GameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	DEFINE_FUNCTION(UChess_GameInstance::execSetInfoMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfoMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChess_GameInstance::execGetInfoMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInfoMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChess_GameInstance::execSetTurnMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTurnMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChess_GameInstance::execGetTurnMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTurnMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChess_GameInstance::execGetAIScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAIScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChess_GameInstance::execGetHumanScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHumanScore();
		P_NATIVE_END;
	}
	void UChess_GameInstance::StaticRegisterNativesUChess_GameInstance()
	{
		UClass* Class = UChess_GameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAIScore", &UChess_GameInstance::execGetAIScore },
			{ "GetHumanScore", &UChess_GameInstance::execGetHumanScore },
			{ "GetInfoMessage", &UChess_GameInstance::execGetInfoMessage },
			{ "GetTurnMessage", &UChess_GameInstance::execGetTurnMessage },
			{ "SetInfoMessage", &UChess_GameInstance::execSetInfoMessage },
			{ "SetTurnMessage", &UChess_GameInstance::execSetTurnMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics
	{
		struct Chess_GameInstance_eventGetAIScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventGetAIScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "GetAIScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::Chess_GameInstance_eventGetAIScore_Parms), Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_GetAIScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_GetAIScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics
	{
		struct Chess_GameInstance_eventGetHumanScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventGetHumanScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "GetHumanScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::Chess_GameInstance_eventGetHumanScore_Parms), Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_GetHumanScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_GetHumanScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics
	{
		struct Chess_GameInstance_eventGetInfoMessage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventGetInfoMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "GetInfoMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::Chess_GameInstance_eventGetInfoMessage_Parms), Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics
	{
		struct Chess_GameInstance_eventGetTurnMessage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventGetTurnMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "GetTurnMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::Chess_GameInstance_eventGetTurnMessage_Parms), Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics
	{
		struct Chess_GameInstance_eventSetInfoMessage_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventSetInfoMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "SetInfoMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::Chess_GameInstance_eventSetInfoMessage_Parms), Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics
	{
		struct Chess_GameInstance_eventSetTurnMessage_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_GameInstance_eventSetTurnMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChess_GameInstance, nullptr, "SetTurnMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::Chess_GameInstance_eventSetTurnMessage_Parms), Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChess_GameInstance);
	UClass* Z_Construct_UClass_UChess_GameInstance_NoRegister()
	{
		return UChess_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UChess_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumanScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HumanScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AIScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TurnMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfoMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InfoMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChess_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChess_GameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChess_GameInstance_GetAIScore, "GetAIScore" }, // 2669017189
		{ &Z_Construct_UFunction_UChess_GameInstance_GetHumanScore, "GetHumanScore" }, // 2597284958
		{ &Z_Construct_UFunction_UChess_GameInstance_GetInfoMessage, "GetInfoMessage" }, // 2538485015
		{ &Z_Construct_UFunction_UChess_GameInstance_GetTurnMessage, "GetTurnMessage" }, // 1957256064
		{ &Z_Construct_UFunction_UChess_GameInstance_SetInfoMessage, "SetInfoMessage" }, // 40429395
		{ &Z_Construct_UFunction_UChess_GameInstance_SetTurnMessage, "SetTurnMessage" }, // 4148896233
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChess_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chess_GameInstance.h" },
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_HumanScore_MetaData[] = {
		{ "Category", "Chess_GameInstance" },
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_HumanScore = { "HumanScore", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChess_GameInstance, HumanScore), METADATA_PARAMS(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_HumanScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_HumanScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_AIScore_MetaData[] = {
		{ "Category", "Chess_GameInstance" },
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_AIScore = { "AIScore", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChess_GameInstance, AIScore), METADATA_PARAMS(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_AIScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_AIScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_TurnMessage_MetaData[] = {
		{ "Category", "Chess_GameInstance" },
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_TurnMessage = { "TurnMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChess_GameInstance, TurnMessage), METADATA_PARAMS(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_TurnMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_TurnMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_InfoMessage_MetaData[] = {
		{ "Category", "Chess_GameInstance" },
		{ "ModuleRelativePath", "Public/Chess_GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_InfoMessage = { "InfoMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChess_GameInstance, InfoMessage), METADATA_PARAMS(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_InfoMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_InfoMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChess_GameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_HumanScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_AIScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_TurnMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChess_GameInstance_Statics::NewProp_InfoMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChess_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChess_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChess_GameInstance_Statics::ClassParams = {
		&UChess_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChess_GameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UChess_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChess_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChess_GameInstance()
	{
		if (!Z_Registration_Info_UClass_UChess_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChess_GameInstance.OuterSingleton, Z_Construct_UClass_UChess_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChess_GameInstance.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<UChess_GameInstance>()
	{
		return UChess_GameInstance::StaticClass();
	}
	UChess_GameInstance::UChess_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChess_GameInstance);
	UChess_GameInstance::~UChess_GameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChess_GameInstance, UChess_GameInstance::StaticClass, TEXT("UChess_GameInstance"), &Z_Registration_Info_UClass_UChess_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChess_GameInstance), 3219984809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_2531611751(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
