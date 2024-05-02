// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_PlayerController() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_PlayerController();
	CHESS_API UClass* Z_Construct_UClass_AChess_PlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void AChess_PlayerController::StaticRegisterNativesAChess_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_PlayerController);
	UClass* Z_Construct_UClass_AChess_PlayerController_NoRegister()
	{
		return AChess_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AChess_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChessContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChessContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Chess_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Chess_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ChessContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Chess_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ChessContext = { "ChessContext", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_PlayerController, ChessContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ChessContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ChessContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ClickAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Chess_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_PlayerController, ClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ClickAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChess_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ChessContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_PlayerController_Statics::NewProp_ClickAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_PlayerController_Statics::ClassParams = {
		&AChess_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChess_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChess_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChess_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AChess_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_PlayerController.OuterSingleton, Z_Construct_UClass_AChess_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_PlayerController.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_PlayerController>()
	{
		return AChess_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_PlayerController);
	AChess_PlayerController::~AChess_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_PlayerController, AChess_PlayerController::StaticClass, TEXT("AChess_PlayerController"), &Z_Registration_Info_UClass_AChess_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_PlayerController), 2825335270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_PlayerController_h_1177451552(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
