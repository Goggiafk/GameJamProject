// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StanduperCharacter.generated.h"

UENUM(BlueprintType)
enum class JokeType : uint8
{
	Casual UMETA(DisplayName = "Casual"),
	Dark   UMETA(DisplayName = "Dark"),
	Irony  UMETA(DisplayName = "Irony"),
};

UCLASS()
class GAMEJAMPROJECT_API AStanduperCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStanduperCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* SkeletalMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
