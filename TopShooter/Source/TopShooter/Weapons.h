// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class ABullets;

UCLASS()
class TOPSHOOTER_API AWeapons : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapons();


protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	USceneComponent* spawnPoint;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ShootProjectile(FVector forwardPlayer);
	void ResetShooting();



	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABullets> bulletType;

	
private:

	bool shooting;
	FTimerHandle FireRatioDelay;
	float shootingRate = 0.3f;
};
