// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindLocation.generated.h"

/**
 * 
 */
UCLASS()
class A_LONELY_JOURNEY_API UBTTask_FindLocation : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& behaivior, uint8* node) override;

	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;

	FName location = "Location";
};
