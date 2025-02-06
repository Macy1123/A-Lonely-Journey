// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "A_Lonely_Journey/BP_BaseEnemy.h"
#include "BP_Wisp.generated.h"

UCLASS()
class A_LONELY_JOURNEY_API ABP_Wisp : public ABP_BaseEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Wisp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
