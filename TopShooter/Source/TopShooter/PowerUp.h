// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

class USphereComponent;
class UParticleSystemComponent;
class USceneComponent;

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ETypePowerUp : uint8
{
	FastFire 	UMETA(DisplayName = "Fast Fire"),
	PowerShoot 	UMETA(DisplayName = "Power Shoot"),
	Heal	 	UMETA(DisplayName = "Heal Up")
};


UCLASS()
class TOPSHOOTER_API APowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Comp, meta = (AllowPrivateAccess = "true"))
		USphereComponent* sphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Comp, meta = (AllowPrivateAccess = "true"))
		USceneComponent* root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Comp, meta = (AllowPrivateAccess = "true"))
		UParticleSystemComponent *powerUp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = PowerUpInfo, meta = (AllowPrivateAccess = "true"))
		float value; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = PowerUpInfo, meta = (AllowPrivateAccess = "true"))
		TEnumAsByte<ETypePowerUp> TypePowerUp;

	float time = 3.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
