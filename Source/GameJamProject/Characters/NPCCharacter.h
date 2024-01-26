// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NPCCharacter.generated.h"

UENUM(BlueprintType)
enum class EReactionType : uint8
{
	Laugh,
	Boo,
	Neutral,
};

UCLASS()
class GAMEJAMPROJECT_API ANPCCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCCharacter();
	UFUNCTION(BlueprintCallable)
	void ReactToTheJoke();

	UFUNCTION(BlueprintCallable)
	void KillPerson();

	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* LaughToPlay;

	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimationAsset* LaughAnim;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* SkeletalMesh;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Audio", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* AudioComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
