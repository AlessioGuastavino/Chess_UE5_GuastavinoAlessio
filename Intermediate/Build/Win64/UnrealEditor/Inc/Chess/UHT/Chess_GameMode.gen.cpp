// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_GameMode() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_GameField_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_AChess_GameMode();
	CHESS_API UClass* Z_Construct_UClass_AChess_GameMode_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_AHistorical_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	DEFINE_FUNCTION(AChess_GameMode::execResetField)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetField();
		P_NATIVE_END;
	}
	void AChess_GameMode::StaticRegisterNativesAChess_GameMode()
	{
		UClass* Class = AChess_GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetField", &AChess_GameMode::execResetField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChess_GameMode_ResetField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChess_GameMode_ResetField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChess_GameMode_ResetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChess_GameMode, nullptr, "ResetField", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChess_GameMode_ResetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChess_GameMode_ResetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChess_GameMode_ResetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChess_GameMode_ResetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_GameMode);
	UClass* Z_Construct_UClass_AChess_GameMode_NoRegister()
	{
		return AChess_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChess_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFieldClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameFieldClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchHistoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MatchHistoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoardSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChess_GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChess_GameMode_ResetField, "ResetField" }, // 3372160535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Chess_GameMode.h" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::NewProp_GameFieldClass_MetaData[] = {
		{ "Category", "Chess_GameMode" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameMode_Statics::NewProp_GameFieldClass = { "GameFieldClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameMode, GameFieldClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AChess_GameField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_GameFieldClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_GameFieldClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::NewProp_MatchHistoryClass_MetaData[] = {
		{ "Category", "Chess_GameMode" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameMode_Statics::NewProp_MatchHistoryClass = { "MatchHistoryClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameMode, MatchHistoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHistorical_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_MatchHistoryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_MatchHistoryClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::NewProp_BoardSize_MetaData[] = {
		{ "Category", "Chess_GameMode" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChess_GameMode_Statics::NewProp_BoardSize = { "BoardSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameMode, BoardSize), METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_BoardSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_BoardSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::NewProp_CameraPos_MetaData[] = {
		{ "Category", "Chess_GameMode" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChess_GameMode_Statics::NewProp_CameraPos = { "CameraPos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameMode, CameraPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_CameraPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_CameraPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameMode_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Chess_GameMode" },
		{ "ModuleRelativePath", "Public/Chess_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChess_GameMode_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameMode, Offset), METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChess_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameMode_Statics::NewProp_GameFieldClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameMode_Statics::NewProp_MatchHistoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameMode_Statics::NewProp_BoardSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameMode_Statics::NewProp_CameraPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameMode_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_GameMode_Statics::ClassParams = {
		&AChess_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChess_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChess_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_GameMode()
	{
		if (!Z_Registration_Info_UClass_AChess_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_GameMode.OuterSingleton, Z_Construct_UClass_AChess_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_GameMode.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_GameMode>()
	{
		return AChess_GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_GameMode);
	AChess_GameMode::~AChess_GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_GameMode, AChess_GameMode::StaticClass, TEXT("AChess_GameMode"), &Z_Registration_Info_UClass_AChess_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_GameMode), 1337104736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameMode_h_2449352869(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
