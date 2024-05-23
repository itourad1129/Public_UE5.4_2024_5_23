// Fill out your copyright notice in the Description page of Project Settings.

#include "Actor/Character/Player/PlayerControlCharacter.h"

// Sets default values
APlayerControlCharacter::APlayerControlCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerControlCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerControlCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerControlCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

