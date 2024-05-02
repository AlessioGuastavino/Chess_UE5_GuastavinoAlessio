// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/DynamicPiece.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicPiece() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_ADynamicPiece();
	CHESS_API UClass* Z_Construct_UClass_ADynamicPiece_NoRegister();
	CHESS_API UEnum* Z_Construct_UEnum_Chess_ECategory();
	CHESS_API UEnum* Z_Construct_UEnum_Chess_EPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECategory;
	static UEnum* ECategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chess_ECategory, (UObject*)Z_Construct_UPackage__Script_Chess(), TEXT("ECategory"));
		}
		return Z_Registration_Info_UEnum_ECategory.OuterSingleton;
	}
	template<> CHESS_API UEnum* StaticEnum<ECategory>()
	{
		return ECategory_StaticEnum();
	}
	struct Z_Construct_UEnum_Chess_ECategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chess_ECategory_Statics::Enumerators[] = {
		{ "ECategory::MOVE", (int64)ECategory::MOVE },
		{ "ECategory::PIECE", (int64)ECategory::PIECE },
		{ "ECategory::UN_DEF", (int64)ECategory::UN_DEF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chess_ECategory_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This class provides a base class for suggested move and piece blueprints\n" },
		{ "ModuleRelativePath", "Public/DynamicPiece.h" },
		{ "MOVE.DisplayName", "Move" },
		{ "MOVE.Name", "ECategory::MOVE" },
		{ "PIECE.DisplayName", "Piece" },
		{ "PIECE.Name", "ECategory::PIECE" },
		{ "ToolTip", "This class provides a base class for suggested move and piece blueprints" },
		{ "UN_DEF.DisplayName", "Undefined" },
		{ "UN_DEF.Name", "ECategory::UN_DEF" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chess_ECategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chess,
		nullptr,
		"ECategory",
		"ECategory",
		Z_Construct_UEnum_Chess_ECategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_ECategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chess_ECategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_ECategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chess_ECategory()
	{
		if (!Z_Registration_Info_UEnum_ECategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECategory.InnerSingleton, Z_Construct_UEnum_Chess_ECategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECategory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPiece;
	static UEnum* EPiece_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPiece.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPiece.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chess_EPiece, (UObject*)Z_Construct_UPackage__Script_Chess(), TEXT("EPiece"));
		}
		return Z_Registration_Info_UEnum_EPiece.OuterSingleton;
	}
	template<> CHESS_API UEnum* StaticEnum<EPiece>()
	{
		return EPiece_StaticEnum();
	}
	struct Z_Construct_UEnum_Chess_EPiece_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chess_EPiece_Statics::Enumerators[] = {
		{ "EPiece::ANY", (int64)EPiece::ANY },
		{ "EPiece::ROOK", (int64)EPiece::ROOK },
		{ "EPiece::KNIGHT", (int64)EPiece::KNIGHT },
		{ "EPiece::BISHOP", (int64)EPiece::BISHOP },
		{ "EPiece::PAWN", (int64)EPiece::PAWN },
		{ "EPiece::QUEEN", (int64)EPiece::QUEEN },
		{ "EPiece::KING", (int64)EPiece::KING },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chess_EPiece_Statics::Enum_MetaDataParams[] = {
		{ "ANY.DisplayName", "Undefined" },
		{ "ANY.Name", "EPiece::ANY" },
		{ "BISHOP.DisplayName", "Bishop" },
		{ "BISHOP.Name", "EPiece::BISHOP" },
		{ "KING.DisplayName", "King" },
		{ "KING.Name", "EPiece::KING" },
		{ "KNIGHT.DisplayName", "Knight" },
		{ "KNIGHT.Name", "EPiece::KNIGHT" },
		{ "ModuleRelativePath", "Public/DynamicPiece.h" },
		{ "PAWN.DisplayName", "Pawn" },
		{ "PAWN.Name", "EPiece::PAWN" },
		{ "QUEEN.DisplayName", "Queen" },
		{ "QUEEN.Name", "EPiece::QUEEN" },
		{ "ROOK.DisplayName", "Rook" },
		{ "ROOK.Name", "EPiece::ROOK" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chess_EPiece_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chess,
		nullptr,
		"EPiece",
		"EPiece",
		Z_Construct_UEnum_Chess_EPiece_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EPiece_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chess_EPiece_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EPiece_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chess_EPiece()
	{
		if (!Z_Registration_Info_UEnum_EPiece.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPiece.InnerSingleton, Z_Construct_UEnum_Chess_EPiece_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPiece.InnerSingleton;
	}
	void ADynamicPiece::StaticRegisterNativesADynamicPiece()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicPiece);
	UClass* Z_Construct_UClass_ADynamicPiece_NoRegister()
	{
		return ADynamicPiece::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicPiece.h" },
		{ "ModuleRelativePath", "Public/DynamicPiece.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicPiece_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicPiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicPiece_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicPiece, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicPiece_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicPiece_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicPiece_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicPiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicPiece_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicPiece, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicPiece_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicPiece_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicPiece_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicPiece_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicPiece_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicPiece>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicPiece_Statics::ClassParams = {
		&ADynamicPiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADynamicPiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicPiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicPiece()
	{
		if (!Z_Registration_Info_UClass_ADynamicPiece.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicPiece.OuterSingleton, Z_Construct_UClass_ADynamicPiece_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADynamicPiece.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<ADynamicPiece>()
	{
		return ADynamicPiece::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicPiece);
	ADynamicPiece::~ADynamicPiece() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::EnumInfo[] = {
		{ ECategory_StaticEnum, TEXT("ECategory"), &Z_Registration_Info_UEnum_ECategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2171897853U) },
		{ EPiece_StaticEnum, TEXT("EPiece"), &Z_Registration_Info_UEnum_EPiece, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 998862449U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicPiece, ADynamicPiece::StaticClass, TEXT("ADynamicPiece"), &Z_Registration_Info_UClass_ADynamicPiece, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicPiece), 62245980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_638989054(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_DynamicPiece_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
