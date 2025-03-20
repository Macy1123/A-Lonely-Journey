// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BP_BaseEnemy.h"
#include "PitifulFaces.generated.h"

/**
 * 
 */
UCLASS()
class A_LONELY_JOURNEY_API APitifulFaces : public ABP_BaseEnemy
{
	GENERATED_BODY()
	
public:
	void PitifulFaces();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
