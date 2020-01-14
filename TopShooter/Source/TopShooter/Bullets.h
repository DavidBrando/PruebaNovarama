// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullets.generated.h"

class UCapsuleComponent;
class UParticleSystemComponent;
class USceneComponent;
class UProjectileMovementComponent;

UCLASS()
class TOPSHOOTER_API ABullets : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullets();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = BulletInfo, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* capsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = BulletInfo, meta = (AllowPrivateAccess = "true"))
	USceneComponent* root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = BulletInfo, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent *bullet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = BulletInfo, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent *projectileMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
