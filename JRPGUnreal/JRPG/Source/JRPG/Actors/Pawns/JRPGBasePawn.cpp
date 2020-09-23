// Fill out your copyright notice in the Description page of Project Settings.


#include "JRPGBasePawn.h"


// Sets default values
AJRPGBasePawn::AJRPGBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FString name = "";
	PawnStats stats:

}

// Called when the game starts or when spawned
void AJRPGBasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJRPGBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJRPGBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

