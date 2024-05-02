// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Square.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquare() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_ASquare();
	CHESS_API UClass* Z_Construct_UClass_ASquare_NoRegister();
	CHESS_API UEnum* Z_Construct_UEnum_Chess_EColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColor;
	static UEnum* EColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chess_EColor, (UObject*)Z_Construct_UPackage__Script_Chess(), TEXT("EColor"));
		}
		return Z_Registration_Info_UEnum_EColor.OuterSingleton;
	}
	template<> CHESS_API UEnum* StaticEnum<EColor>()
	{
		return EColor_StaticEnum();
	}
	struct Z_Construct_UEnum_Chess_EColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chess_EColor_Statics::Enumerators[] = {
		{ "EColor::WHITE", (int64)EColor::WHITE },
		{ "EColor::BLACK", (int64)EColor::BLACK },
		{ "EColor::UN_DEF", (int64)EColor::UN_DEF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chess_EColor_Statics::Enum_MetaDataParams[] = {
		{ "BLACK.DisplayName", "Black" },
		{ "BLACK.Name", "EColor::BLACK" },
		{ "ModuleRelativePath", "Public/Square.h" },
		{ "UN_DEF.DisplayName", "Undefined" },
		{ "UN_DEF.Name", "EColor::UN_DEF" },
		{ "WHITE.DisplayName", "White" },
		{ "WHITE.Name", "EColor::WHITE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chess_EColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chess,
		nullptr,
		"EColor",
		"EColor",
		Z_Construct_UEnum_Chess_EColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chess_EColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chess_EColor()
	{
		if (!Z_Registration_Info_UEnum_EColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColor.InnerSingleton, Z_Construct_UEnum_Chess_EColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColor.InnerSingleton;
	}
	void ASquare::StaticRegisterNativesASquare()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASquare);
	UClass* Z_Construct_UClass_ASquare_NoRegister()
	{
		return ASquare::StaticClass();
	}
	struct Z_Construct_UClass_ASquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Color_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Square.h" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Square" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, Color), Z_Construct_UEnum_Chess_EColor, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_Color_MetaData)) }; // 2822157683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_GridPosition_MetaData[] = {
		{ "Category", "Square" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_GridPosition = { "GridPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, GridPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_GridPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_GridPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents_Inner = { "TextComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents = { "TextComponents", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, TextComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquare_Statics::NewProp_AuxText_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Square.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASquare_Statics::NewProp_AuxText = { "AuxText", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASquare, AuxText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::NewProp_AuxText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::NewProp_AuxText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Color_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_GridPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_TextComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquare_Statics::NewProp_AuxText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASquare_Statics::ClassParams = {
		&ASquare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquare()
	{
		if (!Z_Registration_Info_UClass_ASquare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASquare.OuterSingleton, Z_Construct_UClass_ASquare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASquare.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<ASquare>()
	{
		return ASquare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquare);
	ASquare::~ASquare() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::EnumInfo[] = {
		{ EColor_StaticEnum, TEXT("EColor"), &Z_Registration_Info_UEnum_EColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2822157683U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASquare, ASquare::StaticClass, TEXT("ASquare"), &Z_Registration_Info_UClass_ASquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASquare), 4182750359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_3487148472(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Square_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
