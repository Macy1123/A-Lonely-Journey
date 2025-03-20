// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_BaseEnemy.h"
#include "EnemyAIController.h"
#include "BP_Projectile.h"

// Sets default values
ABP_BaseEnemy::ABP_BaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ABP_BaseEnemy::FireProjectile()
{
	FActorSpawnParameters sParameters;
	sParameters.Owner = ProjectileObject->GetController();
	sParameters.Instigator = ProjectileObject;
	GetWorld()->SpawnActor<AActor>(SpawnClass, GetMesh()->GetSocketLocation("ProjectileSocket"), ProjectileObject->GetBaseAimRotation(), sParameters);

	if (sParameters.Owner == nullptr)
	{


	}
}

// Called when the game starts or when spawned
void ABP_BaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_BaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

