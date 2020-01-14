// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons.h"
#include "Engine/World.h"
#include "Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
AWeapons::AWeapons()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	mesh->SetupAttachment(RootComponent);
	spawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Bullet Spawn"));
	spawnPoint->SetupAttachment(mesh, "Muzzle");
	shooting = false;
}

// Called when the game starts or when spawned
void AWeapons::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AWeapons::ShootProjectile() {


	if (shooting == false) {
		
		shooting = true;

		FHitResult OutHit;
		FVector start = spawnPoint->GetComponentLocation();
		FVector end = (spawnPoint->GetForwardVector() * 500.0f) + start;

		FCollisionQueryParams ColisionParams;
		
		DrawDebugLine(GetWorld(), start, end, FColor::Green, shootingRate);

		bool hit = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Visibility, ColisionParams);

		GetWorld()->GetTimerManager().SetTimer(FireRatioDelay, this, &AWeapons::ResetShooting, shootingRate, false);

	}



}

void AWeapons::ResetShooting()
{
	shooting = false;
	GetWorld()->GetTimerManager().ClearTimer(FireRatioDelay);

}

