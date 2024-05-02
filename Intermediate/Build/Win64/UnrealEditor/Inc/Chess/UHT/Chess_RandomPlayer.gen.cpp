// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_RandomPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_RandomPlayer() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_RandomPlayer();
	CHESS_API UClass* Z_Construct_UClass_AChess_RandomPlayer_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_UChess_PlayerInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	void AChess_RandomPlayer::StaticRegisterNativesAChess_RandomPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_RandomPlayer);
	UClass* Z_Construct_UClass_AChess_RandomPlayer_NoRegister()
	{
		return AChess_RandomPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AChess_RandomPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_RandomPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_RandomPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Chess_RandomPlayer.h" },
		{ "ModuleRelativePath", "Public/Chess_RandomPlayer.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChess_RandomPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChess_PlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AChess_RandomPlayer, IChess_PlayerInterface), false },  // 3906917743
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_RandomPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_RandomPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_RandomPlayer_Statics::ClassParams = {
		&AChess_RandomPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChess_RandomPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_RandomPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_RandomPlayer()
	{
		if (!Z_Registration_Info_UClass_AChess_RandomPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_RandomPlayer.OuterSingleton, Z_Construct_UClass_AChess_RandomPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_RandomPlayer.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_RandomPlayer>()
	{
		return AChess_RandomPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_RandomPlayer);
	AChess_RandomPlayer::~AChess_RandomPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_RandomPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_RandomPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_RandomPlayer, AChess_RandomPlayer::StaticClass, TEXT("AChess_RandomPlayer"), &Z_Registration_Info_UClass_AChess_RandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_RandomPlayer), 3162632138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_RandomPlayer_h_3938885525(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_RandomPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_RandomPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
