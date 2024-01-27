// Fill out your copyright notice in the Description page of Project Settings.


#include "StanduperCharacter.h"

// Sets default values
AStanduperCharacter::AStanduperCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
}

// Called when the game starts or when spawned
void AStanduperCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AStanduperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

