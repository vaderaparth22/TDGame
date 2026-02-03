// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BP_CameraPawn.generated.h"

UCLASS()
class TDGAME_API ABP_CameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABP_CameraPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Root;

	class USpringArmComponent* SpringArm;

	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Camera")
	float CameraHeight = 1200.f;
};
