// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraManCharacter.h"

#include "Camera/CameraComponent.h"

// Sets default values
ACameraManCharacter::ACameraManCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraMan = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraMan"));
	RotationLerpSpeed = 1.0f;
	ShouldRotate = false;
}

void ACameraManCharacter::ChangeCinematicCameraRotation(const FRotator& NewRotation, float Duration)
{
	TargetRotation = NewRotation;
	RotationLerpSpeed = 1.0f / Duration;
	ShouldRotate = true;
}

// Called when the game starts or when spawned
void ACameraManCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACameraManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(ShouldRotate)
	{
		if(CameraMan)
		{
			FRotator CurrentRotation = FMath::Lerp(CameraMan->GetComponentRotation(), TargetRotation, RotationLerpSpeed * DeltaTime);

			CameraMan->SetWorldRotation(CurrentRotation);
			if(CurrentRotation == TargetRotation)
			{
				ShouldRotate = false;
			}
		}
	}
}

