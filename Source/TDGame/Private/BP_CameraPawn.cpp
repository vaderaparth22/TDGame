// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_CameraPawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABP_CameraPawn::ABP_CameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(Root);

    SpringArm->TargetArmLength = CameraHeight;
    SpringArm->SetUsingAbsoluteRotation(true);
    SpringArm->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
    SpringArm->bUsePawnControlRotation = false;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ABP_CameraPawn::BeginPlay()
{
	Super::BeginPlay();
    SpringArm->TargetArmLength = CameraHeight;
}

// Called every frame
void ABP_CameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABP_CameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

