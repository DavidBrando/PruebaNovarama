// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullets.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"


// Sets default values
ABullets::ABullets()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = root;
	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Colider"));
	capsule->SetCollisionProfileName(TEXT("BulletType"));
	capsule->SetupAttachment(root);

	

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->InitialSpeed = 750.0f;
	projectileMovement->MaxSpeed = 750.0f;
	projectileMovement->ProjectileGravityScale = 0.0f;


	bullet = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bullet"));
	bullet->SetupAttachment(root);

	damage = 25.0f;

}

// Called when the game starts or when spawned
void ABullets::BeginPlay()
{
	Super::BeginPlay();
	capsule->OnComponentBeginOverlap.AddDynamic(this, &ABullets::OnOverlapBegin);

	
}

// Called every frame
void ABullets::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullets::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "Me llaman");

	
	if (OtherActor != nullptr && OtherActor != GetOwner()) {

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, OtherActor->GetName() + "---- ME MUERO");

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, SweepResult.ImpactPoint.ToString());

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosion, GetActorLocation(), FRotator(0.0f));

		TSubclassOf<UDamageType> const ValidDamageTypeClass;
		FDamageEvent DamageEvent(ValidDamageTypeClass);

		OtherActor->TakeDamage(damage, DamageEvent, nullptr, this);

		Destroy();
	

	}




}



