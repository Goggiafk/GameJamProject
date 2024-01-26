// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/NPCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAMPROJECT_NPCCharacter_generated_h
#error "NPCCharacter.generated.h already included, missing '#pragma once' in NPCCharacter.h"
#endif
#define GAMEJAMPROJECT_NPCCharacter_generated_h

#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_SPARSE_DATA
#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKillPerson); \
	DECLARE_FUNCTION(execReactToTheJoke);


#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_ACCESSORS
#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameJamProject"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCharacter) \
	NO_API virtual ~ANPCCharacter();


#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_17_PROLOG
#define FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_SPARSE_DATA \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_ACCESSORS \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAMPROJECT_API UClass* StaticClass<class ANPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_goggi_Documents_Unreal_Projects_GameJamProject_Source_GameJamProject_Characters_NPCCharacter_h


#define FOREACH_ENUM_EREACTIONTYPE(op) \
	op(EReactionType::Laugh) \
	op(EReactionType::Boo) \
	op(EReactionType::Neutral) 

enum class EReactionType : uint8;
template<> struct TIsUEnumClass<EReactionType> { enum { Value = true }; };
template<> GAMEJAMPROJECT_API UEnum* StaticEnum<EReactionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
