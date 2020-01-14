// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons.h"
#include "Engine/World.h"
#include "Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Bullets.h"


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
	powerShoots = false;
	
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


void AWeapons::ShootProjectile(FVector forwardPlayer) {


	if (shooting == false) {
		
		shooting = true;

		FHitResult OutHit;
		FVector start = spawnPoint->GetComponentLocation();
		//FVector end = (spawnPoint->GetForwardVector() * 500.0f) + start;
		FVector end = (forwardPlayer * 500.0f) + start;

		FCollisionQueryParams ColisionParams;
		
		DrawDebugLine(GetWorld(), start, end, FColor::Green, shootingRate);

		bool hit = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Visibility, ColisionParams);

		GetWorld()->GetTimerManager().SetTimer(FireRatioDelay, this, &AWeapons::ResetShooting, shootingRate, false);

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this->GetOwner();
		FRotator rot;
		
		if (hit) {
			
			rot = UKismetMathLibrary::FindLookAtRotation(start, OutHit.ImpactPoint);

		}

		else {

			rot = UKismetMathLibrary::FindLookAtRotation(start, OutHit.TraceEnd);

		}



		ABullets* b = GetWorld()->SpawnActor<ABullets>(bulletType, start, rot, SpawnParams);
		

		if(powerShoots)
			b->SetDamage(40.0f);



	}



}

void AWeapons::SetFireRate(float f)
{

	shootingRate = 0.15;

	GetWorld()->GetTimerManager().SetTimer(ResetPowerUpFire, this, &AWeapons::ResetPowerUpFireRate, f, false);


}

void AWeapons::SetPowerShoot(float b)
{
	powerShoots = true; 
	GetWorld()->GetTimerManager().SetTimer(ResetPowerUpShoot, this, &AWeapons::ResetPowerUpShootStrong, b, false);

}


void AWeapons::ResetShooting()
{
	shooting = false;
	GetWorld()->GetTimerManager().ClearTimer(FireRatioDelay);

}

void AWeapons::ResetPowerUpFireRate()
{
	shootingRate = defaultRate;
	GetWorld()->GetTimerManager().ClearTimer(ResetPowerUpFire);

}

void AWeapons::ResetPowerUpShootStrong()
{
	powerShoots = false;
	GetWorld()->GetTimerManager().ClearTimer(ResetPowerUpShoot);

}
