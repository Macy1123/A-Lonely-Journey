// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class A_LONELY_JOURNEY_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:

	AEnemyAIController(FObjectInitializer const& OI);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBehaviorTree* BTree;


	FName playerKey;

	class UAISenseConfig_Sight* sightConfig;

	virtual void OnPossess(APawn* possPawn) override;

	void SetupSight();
	//Blackboard 

	UFUNCTION()
	void InEnemySight(AActor* actor, FAIStimulus const simu);

	void HandlePerception(AActor actor);

};
