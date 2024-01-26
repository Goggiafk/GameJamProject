// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJamProject/Characters/NPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEJAMPROJECT_API UClass* Z_Construct_UClass_ANPCCharacter();
	GAMEJAMPROJECT_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameJamProject();
// End Cross Module References
	void ANPCCharacter::StaticRegisterNativesANPCCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
	UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
	{
		return ANPCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANPCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJamProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/NPCCharacter.h" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
		&ANPCCharacter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANPCCharacter()
	{
		if (!Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton, Z_Construct_UClass_ANPCCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton;
	}
	template<> GAMEJAMPROJECT_API UClass* StaticClass<ANPCCharacter>()
	{
		return ANPCCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
	ANPCCharacter::~ANPCCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 2004270611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_1189234948(TEXT("/Script/GameJamProject"),
		Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
