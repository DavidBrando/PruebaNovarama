// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "TopShooterCharacter.h"


AEnemyController::AEnemyController()
{

	blackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
	BTComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BT"));

	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*Perception);

	SightConfig->SightRadius = AIRadius;
	SightConfig->LoseSightRadius = AIRadiusLost;
	SightConfig->PeripheralVisionAngleDegrees = AIFov;
	SightConfig->SetMaxAge(AIAge);

	SetGenericTeamId(FGenericTeamId(1));


	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	Perception->SetDominantSense(*SightConfig->GetSenseImplementation());
	Perception->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyController::OnActorDetected);
	Perception->ConfigureSense(*SightConfig);

}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyController::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
	
}

void AEnemyController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}




void AEnemyController::OnActorDetected(AActor * actor, FAIStimulus Stimuli)
{

	if (Stimuli.WasSuccessfullySensed()) {

		ATopShooterCharacter *charac = Cast<ATopShooterCharacter>(actor);

		if (charac) {

			GetBlackboardComponent()->SetValueAsObject("Player", charac);

		}

	}
	
}
