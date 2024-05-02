// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chess/Public/Chess_HumanPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChess_HumanPlayer() {}
// Cross Module References
	CHESS_API UClass* Z_Construct_UClass_AChess_HumanPlayer();
	CHESS_API UClass* Z_Construct_UClass_AChess_HumanPlayer_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_ADynamicPiece_NoRegister();
	CHESS_API UClass* Z_Construct_UClass_UChess_PlayerInterface_NoRegister();
	CHESS_API UEnum* Z_Construct_UEnum_Chess_EState();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Chess();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EState;
	static UEnum* EState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chess_EState, (UObject*)Z_Construct_UPackage__Script_Chess(), TEXT("EState"));
		}
		return Z_Registration_Info_UEnum_EState.OuterSingleton;
	}
	template<> CHESS_API UEnum* StaticEnum<EState>()
	{
		return EState_StaticEnum();
	}
	struct Z_Construct_UEnum_Chess_EState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chess_EState_Statics::Enumerators[] = {
		{ "EState::UNCHOSEN", (int64)EState::UNCHOSEN },
		{ "EState::SELECTED", (int64)EState::SELECTED },
		{ "EState::PROMOTION", (int64)EState::PROMOTION },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chess_EState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_HumanPlayer.h" },
		{ "PROMOTION.Comment", "// When I already selected a piece to move, you can deselect the piece riclickisng it\n" },
		{ "PROMOTION.DisplayName", "Promotion" },
		{ "PROMOTION.Name", "EState::PROMOTION" },
		{ "PROMOTION.ToolTip", "When I already selected a piece to move, you can deselect the piece riclickisng it" },
		{ "SELECTED.Comment", "// When I haven't decided the piece to move yet\n" },
		{ "SELECTED.DisplayName", "Selected" },
		{ "SELECTED.Name", "EState::SELECTED" },
		{ "SELECTED.ToolTip", "When I haven't decided the piece to move yet" },
		{ "UNCHOSEN.DisplayName", "Unchosen" },
		{ "UNCHOSEN.Name", "EState::UNCHOSEN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chess_EState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chess,
		nullptr,
		"EState",
		"EState",
		Z_Construct_UEnum_Chess_EState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chess_EState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chess_EState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chess_EState()
	{
		if (!Z_Registration_Info_UEnum_EState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EState.InnerSingleton, Z_Construct_UEnum_Chess_EState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EState.InnerSingleton;
	}
	DEFINE_FUNCTION(AChess_HumanPlayer::execOnClick)
	{
		P_GET_OBJECT(ADynamicPiece,Z_Param_Clicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick(Z_Param_Clicked);
		P_NATIVE_END;
	}
	void AChess_HumanPlayer::StaticRegisterNativesAChess_HumanPlayer()
	{
		UClass* Class = AChess_HumanPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClick", &AChess_HumanPlayer::execOnClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics
	{
		struct Chess_HumanPlayer_eventOnClick_Parms
		{
			ADynamicPiece* Clicked;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Clicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::NewProp_Clicked = { "Clicked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Chess_HumanPlayer_eventOnClick_Parms, Clicked), Z_Construct_UClass_ADynamicPiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::NewProp_Clicked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chess_HumanPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChess_HumanPlayer, nullptr, "OnClick", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::Chess_HumanPlayer_eventOnClick_Parms), Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChess_HumanPlayer_OnClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChess_HumanPlayer_OnClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChess_HumanPlayer);
	UClass* Z_Construct_UClass_AChess_HumanPlayer_NoRegister()
	{
		return AChess_HumanPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AChess_HumanPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChess_HumanPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Chess,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChess_HumanPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChess_HumanPlayer_OnClick, "OnClick" }, // 1376813134
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChess_HumanPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Chess_HumanPlayer.h" },
		{ "ModuleRelativePath", "Public/Chess_HumanPlayer.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChess_HumanPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChess_PlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AChess_HumanPlayer, IChess_PlayerInterface), false },  // 3906917743
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChess_HumanPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChess_HumanPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChess_HumanPlayer_Statics::ClassParams = {
		&AChess_HumanPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChess_HumanPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChess_HumanPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChess_HumanPlayer()
	{
		if (!Z_Registration_Info_UClass_AChess_HumanPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChess_HumanPlayer.OuterSingleton, Z_Construct_UClass_AChess_HumanPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChess_HumanPlayer.OuterSingleton;
	}
	template<> CHESS_API UClass* StaticClass<AChess_HumanPlayer>()
	{
		return AChess_HumanPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChess_HumanPlayer);
	AChess_HumanPlayer::~AChess_HumanPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::EnumInfo[] = {
		{ EState_StaticEnum, TEXT("EState"), &Z_Registration_Info_UEnum_EState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3535008509U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChess_HumanPlayer, AChess_HumanPlayer::StaticClass, TEXT("AChess_HumanPlayer"), &Z_Registration_Info_UClass_AChess_HumanPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChess_HumanPlayer), 1310277694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_1524489456(TEXT("/Script/Chess"),
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alegu_Documents_Unreal_Projects_Chess_Source_Chess_Public_Chess_HumanPlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
