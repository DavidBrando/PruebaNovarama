// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/CapsuleComponent.h"
#include "TopShooterCharacter.h"


// Sets default values
AEnemies::AEnemies()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(34.f, 64.0f);


	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->MaxWalkSpeed = 350.f;

	this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;


	arm1 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Arm1"));

	arm1->SetupAttachment(Cast<USceneComponent>(GetMesh()));

	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
	arm1->AttachToComponent(Cast<USceneComponent>(GetMesh()), rules, "arm1");

	arm2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Arm2"));

	arm2->SetupAttachment(Cast<USceneComponent>(GetMesh()));
	arm2->AttachToComponent(Cast<USceneComponent>(GetMesh()), rules, "arm2");

	//arm1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//arm2->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	health = 40.f;
	maxHealth = health;
	alive = true;

}

// Called when the game starts or when spawned
void AEnemies::BeginPlay()
{
	Super::BeginPlay();

	arm1->OnComponentBeginOverlap.AddDynamic(this, &AEnemies::OnOverlapBegin);
	arm2->OnComponentBeginOverlap.AddDynamic(this, &AEnemies::OnOverlapBegin);

	
}

// Called every frame
void AEnemies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemies::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemies::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	ATopShooterCharacter *character = Cast<ATopShooterCharacter>(OtherActor);

	if (character != nullptr) {

		//UGameplay

	}


}

bool AEnemies::HealSystem(float f)
{

	health += f;

	if (health <= 0.0f) {
		alive = false;
		return true;
	}

	return false;
}

