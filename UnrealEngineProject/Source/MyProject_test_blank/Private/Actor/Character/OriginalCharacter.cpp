// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Character/OriginalCharacter.h"


// Sets default values
AOriginalCharacter::AOriginalCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AOriginalCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOriginalCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AOriginalCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

