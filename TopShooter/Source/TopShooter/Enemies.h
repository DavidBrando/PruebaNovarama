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



	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		float health;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		float maxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		float damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		bool alive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* arm1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* arm2;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	bool HealSystem(float f);


};
