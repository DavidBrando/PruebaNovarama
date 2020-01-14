// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TopShooterCharacter.h"
#include "Weapons.h"


// Sets default values
APowerUp::APowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = root;
	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Colider"));
	sphere->SetCollisionProfileName(TEXT("PowerUpSetup"));
	sphere->SetupAttachment(root);
	sphere->SetSphereRadius(64.0f);


	powerUp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PowerUp"));
	powerUp->SetupAttachment(root);
}

// Called when the game starts or when spawned
void APowerUp::BeginPlay()
{
	Super::BeginPlay();
	sphere->OnComponentBeginOverlap.AddDynamic(this, &APowerUp::OnOverlapBegin);

	
}

// Called every frame
void APowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerUp::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	ATopShooterCharacter *character = Cast<ATopShooterCharacter>(OtherActor);


	if (character != nullptr) {

		switch (TypePowerUp)
		{

		case ETypePowerUp::FastFire:

			character->GetCurrentWeapon()->SetFireRate(time);

			break;

		case ETypePowerUp::Heal:

			character->HealSystem(value);

			break;

		case ETypePowerUp::PowerShoot:

			character->GetCurrentWeapon()->SetPowerShoot(time);


			break;


		default:
			break;
		}


		Destroy();

	}

}

