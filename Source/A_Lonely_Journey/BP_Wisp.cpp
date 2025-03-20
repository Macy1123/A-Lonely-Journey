// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Wisp.h"
//#include "Components/SkeletalMeshComponent.h"
#include <Engine/SkeletalMeshSocket.h>

// Sets default values
ABP_Wisp::ABP_Wisp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABP_Wisp::BeginPlay()
{
	Super::BeginPlay();

	ProjectileObject = Cast<APawn>(this);
	if (!ProjectileObject)
	{
		Destroy();
	}

	//Debug Fire
	FireProjectile();
}

// Called every frame
void ABP_Wisp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FireProjectile();
}

void ABP_Wisp::canShoot()
{
}

