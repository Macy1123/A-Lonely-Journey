// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Projectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABP_Projectile::ABP_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SetRootComponent(SphereCollision);

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>("SphereMesh");
	SphereMesh->SetCollisionProfileName("NoCollision");
	SphereMesh->SetupAttachment(SphereCollision);
}

// Called when the game starts or when spawned
void ABP_Projectile::BeginPlay()
{
	Super::BeginPlay();

	SetActorScale3D(FVector(0.18f, 0.18f, 0.18f));
	FTimerHandle pTimer;
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ABP_Projectile::CommonOverlap);

	//GetWorld()->GetTimerManager().SetTimer(pTimer, this, &ABP_Projectile::K2_DestroyActor, 3.5f);
}

void ABP_Projectile::CommonOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

// Called every frame
void ABP_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

