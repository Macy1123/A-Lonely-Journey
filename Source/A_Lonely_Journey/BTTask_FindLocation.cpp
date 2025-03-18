// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindLocation.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

EBTNodeResult::Type UBTTask_FindLocation::ExecuteTask(UBehaviorTreeComponent& b, uint8* node)
{
	auto* ownAI = b.GetAIOwner();
	auto* gPawncontr = ownAI->GetPawn();
	auto mBlackb = ownAI->GetBlackboardComponent();

	FVector currlocal = gPawncontr->GetActorLocation();
	FVector randlocal;

	UNavigationSystemV1* navsys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	bool validlocalfound = navsys->K2_GetRandomLocationInNavigableRadius(GetWorld(), currlocal, randlocal, 1000.0f);

	mBlackb->SetValueAsVector(location, randlocal);

	if (validlocalfound)
	{
		return EBTNodeResult::Succeeded;
	}



	return EBTNodeResult::Failed;
}

void UBTTask_FindLocation::OnGameplayTaskActivated(UGameplayTask& Task)
{

}

