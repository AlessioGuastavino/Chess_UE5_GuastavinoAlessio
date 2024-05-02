// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_GameField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_GameField() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_GameField();
	CHESS_API UClass* Z_Construct_UClass_AChess_GameField_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_ADynamicPiece_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_ASquare_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void AChess_GameField::StaticRegisterNativesAChess_GameField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_GameField);
	UClass* Z_Construct_UClass_AChess_GameField_NoRegister()
	{
		return AChess_GameField::StaticClass();
	}
	struct Z_Construct_UClass_AChess_GameField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoardSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquareSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverSquareHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverSquareHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquareScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SquareScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveRelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PieceRelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PieceRelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackSquare_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackSquare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteSquare_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteSquare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackKingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackKingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackQueenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackQueenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackRookClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackRookClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackKnightClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackKnightClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackBishopClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackBishopClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackPawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlackPawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteKingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteKingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteQueenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteQueenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteRookClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteRookClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteKnightClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteKnightClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteBishopClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteBishopClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhitePawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhitePawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MoveClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BackgroundClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_GameField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chess_GameField.h" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BoardSize_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BoardSize = { "BoardSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BoardSize), METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BoardSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BoardSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareSize_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareSize = { "SquareSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, SquareSize), METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, Padding), METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_NormalizedPadding_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_NormalizedPadding = { "NormalizedPadding", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, NormalizedPadding), METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_NormalizedPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_NormalizedPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_OverSquareHeight_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_OverSquareHeight = { "OverSquareHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, OverSquareHeight), METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_OverSquareHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_OverSquareHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareScale_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareScale = { "SquareScale", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, SquareScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveRelativeScale_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveRelativeScale = { "MoveRelativeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, MoveRelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveRelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveRelativeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_PieceRelativeScale_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_PieceRelativeScale = { "PieceRelativeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, PieceRelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_PieceRelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_PieceRelativeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackSquare_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackSquare = { "BlackSquare", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackSquare), Z_Construct_UClass_UClass, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackSquare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackSquare_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteSquare_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteSquare = { "WhiteSquare", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteSquare), Z_Construct_UClass_UClass, Z_Construct_UClass_ASquare_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteSquare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteSquare_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKingClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKingClass = { "BlackKingClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackKingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKingClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackQueenClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackQueenClass = { "BlackQueenClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackQueenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackQueenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackQueenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackRookClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackRookClass = { "BlackRookClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackRookClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackRookClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackRookClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKnightClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKnightClass = { "BlackKnightClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackKnightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKnightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKnightClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackBishopClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackBishopClass = { "BlackBishopClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackBishopClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackBishopClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackBishopClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackPawnClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackPawnClass = { "BlackPawnClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BlackPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackPawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKingClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKingClass = { "WhiteKingClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteKingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKingClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteQueenClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteQueenClass = { "WhiteQueenClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteQueenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteQueenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteQueenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteRookClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteRookClass = { "WhiteRookClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteRookClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteRookClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteRookClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKnightClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKnightClass = { "WhiteKnightClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteKnightClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKnightClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKnightClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteBishopClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteBishopClass = { "WhiteBishopClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhiteBishopClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteBishopClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteBishopClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhitePawnClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhitePawnClass = { "WhitePawnClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, WhitePawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhitePawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhitePawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveClass = { "MoveClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, MoveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_GameField_Statics::NewProp_BackgroundClass_MetaData[] = {
		{ "Category", "Chess_GameField" },
		{ "ModuleRelativePath", "Public/Chess_GameField.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChess_GameField_Statics::NewProp_BackgroundClass = { "BackgroundClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_GameField, BackgroundClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BackgroundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::NewProp_BackgroundClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChess_GameField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BoardSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_NormalizedPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_OverSquareHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_SquareScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveRelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_PieceRelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackSquare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteSquare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackQueenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackRookClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackKnightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackBishopClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BlackPawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteQueenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteRookClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteKnightClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhiteBishopClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_WhitePawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_MoveClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_GameField_Statics::NewProp_BackgroundClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_GameField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_GameField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_GameField_Statics::ClassParams = {
		&AChess_GameField::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChess_GameField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChess_GameField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_GameField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_GameField()
	{
		if (!Z_Registration_Info_UClass_AChess_GameField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_GameField.OuterSingleton, Z_Construct_UClass_AChess_GameField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_GameField.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_GameField>()
	{
		return AChess_GameField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_GameField);
	AChess_GameField::~AChess_GameField() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameField_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_GameField, AChess_GameField::StaticClass, TEXT("AChess_GameField"), &Z_Registration_Info_UClass_AChess_GameField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_GameField), 3676164126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameField_h_104068903(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_GameField_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
