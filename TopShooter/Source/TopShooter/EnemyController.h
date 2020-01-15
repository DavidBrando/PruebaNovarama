// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"

#include "AIController.h"
#include "EnemyController.generated.h"



/**
 * 
 */
UCLASS()
class TOPSHOOTER_API AEnemyController : public AAIController
{
	GENERATED_BODY()


public:

	AEnemyController();


public:

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn *InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void OnActorDetected(AActor *actor, FAIStimulus Stimuli);



protected:

	UPROPERTY(transient)
		class UBlackboardComponent* blackboardComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, transient)
		class UBehaviorTreeComponent* BTComp;

	uint8 EnemyKeyID;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float AIRadius = 1000.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float AIAge = 5.0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float AIRadiusLost = AIRadius + 250.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	float AIFov = 60.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	class UAISenseConfig_Sight* SightConfig;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	class UAIPerceptionComponent* Perception;
};
