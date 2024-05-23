// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Character/OriginalCharacter.h"
#include "GameFramework/Character.h"
#include "PlayerControlCharacter.generated.h"

UCLASS()
class MYPROJECT_TEST_BLANK_API APlayerControlCharacter : public AOriginalCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, EditDefaultsOnly)
	TObjectPtr<USkeletalMeshComponent> MeshBody;
	
	// Sets default values for this character's properties
	APlayerControlCharacter();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
