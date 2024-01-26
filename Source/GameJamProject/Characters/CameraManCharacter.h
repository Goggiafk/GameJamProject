// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraManCharacter.generated.h"

UCLASS()
class GAMEJAMPROJECT_API ACameraManCharacter : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraManCharacter();

	UFUNCTION(BlueprintCallable, Category = "Cinematic Camera")
	void ChangeCinematicCameraRotation(const FRotator& NewRotation, float Duration);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraMan;

private:
	FRotator TargetRotation;
	float RotationLerpSpeed;
	bool ShouldRotate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return CameraMan; }
};
