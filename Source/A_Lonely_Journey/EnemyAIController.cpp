// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "A_Lonely_JourneyCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

AEnemyAIController::AEnemyAIController(FObjectInitializer const& OI)
{
	SetupSight();
}

void AEnemyAIController::OnPossess(APawn* possPawn)
{
	Super::OnPossess(possPawn);

	RunBehaviorTree(BTree);
}

void AEnemyAIController::SetupSight()
{
	sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

	if (sightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception")));
		sightConfig->SightRadius = 900.0f;
		sightConfig->LoseSightRadius = 1000.0f;
		sightConfig->PeripheralVisionAngleDegrees = 40.0f;
		sightConfig->AutoSuccessRangeFromLastSeenLocation = 300.0f;
		sightConfig->DetectionByAffiliation.bDetectEnemies = false;
		sightConfig->DetectionByAffiliation.bDetectFriendlies = false;
		sightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*sightConfig->GetSenseImplementation());
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAIController::InEnemySight);
		GetPerceptionComponent()->ConfigureSense((*sightConfig));
	}
}

void AEnemyAIController::InEnemySight(AActor* actor, FAIStimulus const simu)
{
	if (/*auto* const actCast = Cast<AA_Lonely_JourneyCharacter>(actor)*/ simu.WasSuccessfullySensed())
	{
  		GetBlackboardComponent()->SetValueAsObject("Player", actor);
	}
	else
	{
		GetBlackboardComponent()->ClearValue("Player");
	}
}

void AEnemyAIController::HandlePerception(AActor actor)
{
}
