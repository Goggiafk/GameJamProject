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
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEJAMPROJECT_API UClass* Z_Construct_UClass_ANPCCharacter();
	GAMEJAMPROJECT_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	GAMEJAMPROJECT_API UEnum* Z_Construct_UEnum_GameJamProject_EReactionType();
	UPackage* Z_Construct_UPackage__Script_GameJamProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReactionType;
	static UEnum* EReactionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReactionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReactionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJamProject_EReactionType, (UObject*)Z_Construct_UPackage__Script_GameJamProject(), TEXT("EReactionType"));
		}
		return Z_Registration_Info_UEnum_EReactionType.OuterSingleton;
	}
	template<> GAMEJAMPROJECT_API UEnum* StaticEnum<EReactionType>()
	{
		return EReactionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJamProject_EReactionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enumerators[] = {
		{ "EReactionType::Laugh", (int64)EReactionType::Laugh },
		{ "EReactionType::Boo", (int64)EReactionType::Boo },
		{ "EReactionType::Neutral", (int64)EReactionType::Neutral },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boo.Name", "EReactionType::Boo" },
		{ "Laugh.Name", "EReactionType::Laugh" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
		{ "Neutral.Name", "EReactionType::Neutral" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJamProject_EReactionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJamProject,
		nullptr,
		"EReactionType",
		"EReactionType",
		Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJamProject_EReactionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJamProject_EReactionType()
	{
		if (!Z_Registration_Info_UEnum_EReactionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReactionType.InnerSingleton, Z_Construct_UEnum_GameJamProject_EReactionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReactionType.InnerSingleton;
	}
	DEFINE_FUNCTION(ANPCCharacter::execKillPerson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillPerson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCCharacter::execReactToTheJoke)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReactToTheJoke();
		P_NATIVE_END;
	}
	void ANPCCharacter::StaticRegisterNativesANPCCharacter()
	{
		UClass* Class = ANPCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KillPerson", &ANPCCharacter::execKillPerson },
			{ "ReactToTheJoke", &ANPCCharacter::execReactToTheJoke },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "KillPerson", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANPCCharacter_KillPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_KillPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "ReactToTheJoke", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
	UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
	{
		return ANPCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANPCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaughToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LaughToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaughAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LaughAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJamProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCCharacter_KillPerson, "KillPerson" }, // 1499181675
		{ &Z_Construct_UFunction_ANPCCharacter_ReactToTheJoke, "ReactToTheJoke" }, // 1691035735
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/NPCCharacter.h" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughToPlay = { "LaughToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, LaughToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughToPlay_MetaData), Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughAnim = { "LaughAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, LaughAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughAnim_MetaData), Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_ANPCCharacter_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_LaughAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
		&ANPCCharacter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::EnumInfo[] = {
		{ EReactionType_StaticEnum, TEXT("EReactionType"), &Z_Registration_Info_UEnum_EReactionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2096612094U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 3312853748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_2890678587(TEXT("/Script/GameJamProject"),
		Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
