// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_MinimaxPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_MinimaxPlayer() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_MinimaxPlayer();
	CHESS_API UClass* Z_Construct_UClass_AChess_MinimaxPlayer_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_UChess_PlayerInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void AChess_MinimaxPlayer::StaticRegisterNativesAChess_MinimaxPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_MinimaxPlayer);
	UClass* Z_Construct_UClass_AChess_MinimaxPlayer_NoRegister()
	{
		return AChess_MinimaxPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AChess_MinimaxPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_MinimaxPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_MinimaxPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Chess_MinimaxPlayer.h" },
		{ "ModuleRelativePath", "Public/Chess_MinimaxPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_MinimaxPlayer_Statics::NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Chess_MinimaxPlayer" },
		{ "ModuleRelativePath", "Public/Chess_MinimaxPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChess_MinimaxPlayer_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChess_MinimaxPlayer, MaxDepth), METADATA_PARAMS(Z_Construct_UClass_AChess_MinimaxPlayer_Statics::NewProp_MaxDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_MinimaxPlayer_Statics::NewProp_MaxDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChess_MinimaxPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChess_MinimaxPlayer_Statics::NewProp_MaxDepth,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChess_MinimaxPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChess_PlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AChess_MinimaxPlayer, IChess_PlayerInterface), false },  // 3906917743
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_MinimaxPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_MinimaxPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_MinimaxPlayer_Statics::ClassParams = {
		&AChess_MinimaxPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChess_MinimaxPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChess_MinimaxPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChess_MinimaxPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_MinimaxPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_MinimaxPlayer()
	{
		if (!Z_Registration_Info_UClass_AChess_MinimaxPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_MinimaxPlayer.OuterSingleton, Z_Construct_UClass_AChess_MinimaxPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_MinimaxPlayer.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_MinimaxPlayer>()
	{
		return AChess_MinimaxPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_MinimaxPlayer);
	AChess_MinimaxPlayer::~AChess_MinimaxPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_MinimaxPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_MinimaxPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_MinimaxPlayer, AChess_MinimaxPlayer::StaticClass, TEXT("AChess_MinimaxPlayer"), &Z_Registration_Info_UClass_AChess_MinimaxPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_MinimaxPlayer), 1459199351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_MinimaxPlayer_h_2196957091(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_MinimaxPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_MinimaxPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
