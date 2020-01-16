// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "TopShooterCharacter.h"
#include "HealhSystemComponent.h"


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

	healthSystem = CreateDefaultSubobject<UHealhSystemComponent>(TEXT("EnemyInfo"));
	this->AddOwnedComponent(healthSystem);
	healthSystem->SettingHeal(40.0f);
	attacking = false;
	damage = 15.0f;

	//if(alive == true)
	//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "true");

	
}

// Called when the game starts or when spawned
void AEnemies::BeginPlay()
{
	Super::BeginPlay();

	arm1->OnComponentBeginOverlap.AddDynamic(this, &AEnemies::OnOverlapBegin);
	arm2->OnComponentBeginOverlap.AddDynamic(this, &AEnemies::OnOverlapBegin);

	
}

float AEnemies::TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, DamageCauser->GetName() + " ME PEGA CON: " + FString::SanitizeFloat(Damage));

	bool alive = healthSystem->TakeDamage(Damage);

	//if (alive == false) {
	//	Destroy();
	//}
	if (alive == false) {

		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, "false");
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Ignore);
		GetCharacterMovement()->StopMovementImmediately();
		float time = PlayAnimMontage(AnimMontage);

		GetWorld()->GetTimerManager().SetTimer(DeadDelay, this, &AEnemies::DeadFunction, time, false);

	}
	
	return ActualDamage;
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

void AEnemies::LookAt(FVector v)
{

	const FVector myPos = GetActorLocation();
	FRotator rot = UKismetMathLibrary::FindLookAtRotation(myPos, v);

	//GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Cyan, rot.ToString());

	SetActorRotation(FRotator(0.0f, rot.Yaw, 0.0f));
}


void AEnemies::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

	ATopShooterCharacter *character = Cast<ATopShooterCharacter>(OtherActor);

	if (character != nullptr) {

		
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, character->GetName());
		
		TSubclassOf<UDamageType> const ValidDamageTypeClass;
		FDamageEvent DamageEvent(ValidDamageTypeClass);
		
		OtherActor->TakeDamage(damage, DamageEvent, nullptr, this);


	}


}

void AEnemies::DeadFunction()
{
	Destroy();
}



