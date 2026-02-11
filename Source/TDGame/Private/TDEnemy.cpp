// Fill out your copyright notice in the Description page of Project Settings.


#include "TDEnemy.h"

// Sets default values
ATDEnemy::ATDEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create the root
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// create the camera
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemy Mesh"));
	EnemyMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATDEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATDEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

