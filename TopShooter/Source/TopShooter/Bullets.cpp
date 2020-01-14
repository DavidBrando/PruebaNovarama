// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullets.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
ABullets::ABullets()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = root;
	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Colider"));
	capsule->SetCollisionProfileName(TEXT("Trigger"));
	capsule->SetupAttachment(root);

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->InitialSpeed = 750.0f;
	projectileMovement->MaxSpeed = 750.0f;
	projectileMovement->ProjectileGravityScale = 0.0f;


	bullet = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bullet"));
	bullet->SetupAttachment(root);

}

// Called when the game starts or when spawned
void ABullets::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullets::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

