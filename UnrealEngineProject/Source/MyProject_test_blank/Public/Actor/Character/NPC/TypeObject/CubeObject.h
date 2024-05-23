// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "CubeObject.generated.h"

UCLASS()
class MYPROJECT_TEST_BLANK_API ACubeObject : public AActor
{
	GENERATED_BODY()
	const int Niagara_Comp_Num = 8;
	const FName TargetBoneSocketName = "BoneSocket";
	const FVector Sphere_Scale = FVector(20,20,20);
public:	
	// Sets default values for this actor's properties
	ACubeObject();
	UPROPERTY(Transient, EditDefaultsOnly)
	TObjectPtr<USkeletalMesh> SkCubeMesh;
	UPROPERTY(Transient, EditDefaultsOnly)
	TObjectPtr<UNiagaraSystem> NiagaraSystemAsset;
	UPROPERTY(Transient, EditDefaultsOnly)
	TObjectPtr<UAnimSequenceBase> AnimationAsset;
	UPROPERTY(Transient, VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
	UPROPERTY(Transient, VisibleAnywhere)
	TObjectPtr<USphereComponent> SphereComponent;
	UPROPERTY(Transient, VisibleAnywhere)
	TArray<TObjectPtr<UNiagaraComponent>> NiagaraComponents;
	UPROPERTY(Transient, VisibleAnywhere)
	FVector TargetBoneSocketLocation;
	UPROPERTY(Transient, VisibleAnywhere)
	TArray<FName> BoneSocketNames;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
