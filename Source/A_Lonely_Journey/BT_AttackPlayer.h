// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BT_AttackPlayer.generated.h"

/**
 * 
 */
UCLASS()
class A_LONELY_JOURNEY_API UBT_AttackPlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& b, uint8* node) override;

	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
};
