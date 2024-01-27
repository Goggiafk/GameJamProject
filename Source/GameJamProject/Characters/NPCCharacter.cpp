// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"

#include "Components/AudioComponent.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}

void ANPCCharacter::ReactToTheJoke(bool IsFunny)
{
	AudioComponent->Stop();

	
	USoundBase* SoundToPlay = IsFunny ? LaughToPlay : BooToPlay;
	UAnimationAsset* AnimToPlay = IsFunny ? LaughAnim : BooAnim;

	if (SoundToPlay)
	{
		AudioComponent->SetSound(SoundToPlay);
		AudioComponent->Play();
	}

	if(SkeletalMesh)
	{
		SkeletalMesh->SetAnimation(AnimToPlay);
		SkeletalMesh->Play(true);
	}
}

void ANPCCharacter::KillPerson()
{
	SkeletalMesh->SetSimulatePhysics(true);
	SkeletalMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SkeletalMesh->SetCollisionObjectType(ECC_Pawn);
}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

