// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPBasketBall/FPBasketBallGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPBasketBallGameModeBase() {}
// Cross Module References
	FPBASKETBALL_API UClass* Z_Construct_UClass_AFPBasketBallGameModeBase_NoRegister();
	FPBASKETBALL_API UClass* Z_Construct_UClass_AFPBasketBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPBasketBall();
// End Cross Module References
	void AFPBasketBallGameModeBase::StaticRegisterNativesAFPBasketBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFPBasketBallGameModeBase_NoRegister()
	{
		return AFPBasketBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPBasketBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPBasketBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPBasketBallGameModeBase.h" },
		{ "ModuleRelativePath", "FPBasketBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPBasketBallGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::ClassParams = {
		&AFPBasketBallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPBasketBallGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPBasketBallGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPBasketBallGameModeBase, 4248477767);
	template<> FPBASKETBALL_API UClass* StaticClass<AFPBasketBallGameModeBase>()
	{
		return AFPBasketBallGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPBasketBallGameModeBase(Z_Construct_UClass_AFPBasketBallGameModeBase, &AFPBasketBallGameModeBase::StaticClass, TEXT("/Script/FPBasketBall"), TEXT("AFPBasketBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPBasketBallGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
