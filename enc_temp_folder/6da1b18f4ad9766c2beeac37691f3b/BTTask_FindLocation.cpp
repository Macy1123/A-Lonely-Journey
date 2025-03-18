// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindLocation.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

EBTNodeResult::Type UBTTask_FindLocation::ExecuteTask(UBehaviorTreeComponent& behaivior, uint8* node)
{
	auto* AI = behaivior.GetAIOwner();
	auto* pawn = AI->GetPawn();
	auto blackboard = AI->GetBlackboardComponent();

	FVector currlocal = pawn->GetActorLocation();
	FVector randlocal;

	//UNavigationSystemV1* navsys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	//bool validlocalfound = navsys->K2_GetRandomLocationInNavigableRadius(GetWorld(), currlocal, randlocal, 1000.0f);

	blackboard->SetValueAsVector(location, randlocal);

	/*if (validlocalfound)
	{
		return EBTNodeResult::Succeeded;
	}*/

	return EBTNodeResult::Failed;
}

void UBTTask_FindLocation::OnGameplayTaskActivated(UGameplayTask& Task)
{

}

