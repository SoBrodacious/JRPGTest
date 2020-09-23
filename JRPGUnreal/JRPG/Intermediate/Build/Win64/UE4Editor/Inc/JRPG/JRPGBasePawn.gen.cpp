// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JRPG/Actors/Pawns/JRPGBasePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJRPGBasePawn() {}
// Cross Module References
	JRPG_API UClass* Z_Construct_UClass_AJRPGBasePawn_NoRegister();
	JRPG_API UClass* Z_Construct_UClass_AJRPGBasePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_JRPG();
// End Cross Module References
	void AJRPGBasePawn::StaticRegisterNativesAJRPGBasePawn()
	{
	}
	UClass* Z_Construct_UClass_AJRPGBasePawn_NoRegister()
	{
		return AJRPGBasePawn::StaticClass();
	}
	struct Z_Construct_UClass_AJRPGBasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJRPGBasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJRPGBasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/Pawns/JRPGBasePawn.h" },
		{ "ModuleRelativePath", "Actors/Pawns/JRPGBasePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJRPGBasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJRPGBasePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJRPGBasePawn_Statics::ClassParams = {
		&AJRPGBasePawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJRPGBasePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJRPGBasePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJRPGBasePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJRPGBasePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJRPGBasePawn, 3630258410);
	template<> JRPG_API UClass* StaticClass<AJRPGBasePawn>()
	{
		return AJRPGBasePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJRPGBasePawn(Z_Construct_UClass_AJRPGBasePawn, &AJRPGBasePawn::StaticClass, TEXT("/Script/JRPG"), TEXT("AJRPGBasePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJRPGBasePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
