// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemies.generated.h"


class UCapsuleComponent;



UCLASS()
class TOPSHOOTER_API AEnemies : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual float TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser) override;



	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		float damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* arm1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* arm2;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		class UHealhSystemComponent* healthSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		bool attacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* AnimMontage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void LookAt(FVector v);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void DeadFunction();


private:

	FTimerHandle DeadDelay;



};
