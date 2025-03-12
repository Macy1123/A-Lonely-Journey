// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BP_BaseEnemy.generated.h"

UCLASS()
class A_LONELY_JOURNEY_API ABP_BaseEnemy : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_BaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* Mesh;*/
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
