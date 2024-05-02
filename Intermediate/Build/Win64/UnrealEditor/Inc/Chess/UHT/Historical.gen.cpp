// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Historical.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHistorical() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AHistorical();
	CHESS_API UClass* Z_Construct_UClass_AHistorical_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_AMove_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void AHistorical::StaticRegisterNativesAHistorical()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHistorical);
	UClass* Z_Construct_UClass_AHistorical_NoRegister()
	{
		return AHistorical::StaticClass();
	}
	struct Z_Construct_UClass_AHistorical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MoveClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHistorical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHistorical_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Historical.h" },
		{ "ModuleRelativePath", "Public/Historical.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHistorical_Statics::NewProp_MoveClass_MetaData[] = {
		{ "Category", "Historical" },
		{ "Comment", "// GameField reference\n" },
		{ "ModuleRelativePath", "Public/Historical.h" },
		{ "ToolTip", "GameField reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHistorical_Statics::NewProp_MoveClass = { "MoveClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHistorical, MoveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHistorical_Statics::NewProp_MoveClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::NewProp_MoveClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHistorical_Statics::NewProp_MoveSize_MetaData[] = {
		{ "Category", "Historical" },
		{ "Comment", "// All of the following UProperty describe Move positioning and sizing\n" },
		{ "ModuleRelativePath", "Public/Historical.h" },
		{ "ToolTip", "All of the following UProperty describe Move positioning and sizing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHistorical_Statics::NewProp_MoveSize = { "MoveSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHistorical, MoveSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHistorical_Statics::NewProp_MoveSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::NewProp_MoveSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHistorical_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Historical" },
		{ "ModuleRelativePath", "Public/Historical.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHistorical_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHistorical, Padding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHistorical_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHistorical_Statics::NewProp_Displacement_MetaData[] = {
		{ "Category", "Historical" },
		{ "ModuleRelativePath", "Public/Historical.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHistorical_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHistorical, Displacement), METADATA_PARAMS(Z_Construct_UClass_AHistorical_Statics::NewProp_Displacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::NewProp_Displacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHistorical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHistorical_Statics::NewProp_MoveClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHistorical_Statics::NewProp_MoveSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHistorical_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHistorical_Statics::NewProp_Displacement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHistorical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHistorical>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHistorical_Statics::ClassParams = {
		&AHistorical::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHistorical_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHistorical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHistorical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHistorical()
	{
		if (!Z_Registration_Info_UClass_AHistorical.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHistorical.OuterSingleton, Z_Construct_UClass_AHistorical_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHistorical.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AHistorical>()
	{
		return AHistorical::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHistorical);
	AHistorical::~AHistorical() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Historical_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Historical_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHistorical, AHistorical::StaticClass, TEXT("AHistorical"), &Z_Registration_Info_UClass_AHistorical, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHistorical), 2650371977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Historical_h_1877169267(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Historical_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Historical_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
