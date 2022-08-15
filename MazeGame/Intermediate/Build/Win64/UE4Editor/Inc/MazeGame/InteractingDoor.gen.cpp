// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGame/Public/InteractingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractingDoor() {}
// Cross Module References
	MAZEGAME_API UClass* Z_Construct_UClass_AInteractingDoor_NoRegister();
	MAZEGAME_API UClass* Z_Construct_UClass_AInteractingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MazeGame();
// End Cross Module References
	void AInteractingDoor::StaticRegisterNativesAInteractingDoor()
	{
	}
	UClass* Z_Construct_UClass_AInteractingDoor_NoRegister()
	{
		return AInteractingDoor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractingDoor.h" },
		{ "ModuleRelativePath", "Public/InteractingDoor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractingDoor_Statics::ClassParams = {
		&AInteractingDoor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AInteractingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractingDoor, 3228797852);
	template<> MAZEGAME_API UClass* StaticClass<AInteractingDoor>()
	{
		return AInteractingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractingDoor(Z_Construct_UClass_AInteractingDoor, &AInteractingDoor::StaticClass, TEXT("/Script/MazeGame"), TEXT("AInteractingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
