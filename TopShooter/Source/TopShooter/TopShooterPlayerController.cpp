// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TopShooterPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TopShooterCharacter.h"
#include "Engine/World.h"

ATopShooterPlayerController::ATopShooterPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ATopShooterPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
}

void ATopShooterPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ATopShooterPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ATopShooterPlayerController::OnSetDestinationReleased);

	InputComponent->BindAxis("MoveForward", this, &ATopShooterPlayerController::MoveForwardDiretion);
	InputComponent->BindAxis("MoveRight", this, &ATopShooterPlayerController::MoveRightDiretion);



}

void ATopShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	myPawn = Cast<ATopShooterCharacter>(this->GetPawn());

}



void ATopShooterPlayerController::MoveToMouseCursor()
{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Blue, Hit.ToString());

			// We hit something, move there
			SetNewMoveDestination(Hit.ImpactPoint);

			if (myPawn != nullptr) {

				myPawn->LookAtPosition(Hit.ImpactPoint);
				myPawn->ShootWeapon(Hit.ImpactPoint);
			}
		}
	
}


void ATopShooterPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	//APawn* const MyPawn = GetPawn();
	//if (MyPawn)
	//{
	//	float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

	//	// We need to issue move command only if far enough in order for walk animation to play correctly
	//	if ((Distance > 120.0f))
	//	{
	//		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
	//	}
	//}
}

void ATopShooterPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released

	bMoveToMouseCursor = true;
}

void ATopShooterPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination

	bMoveToMouseCursor = false;
}


void ATopShooterPlayerController::MoveForwardDiretion(float value) {

	if (myPawn != nullptr) {
		myPawn->MoveForward(value);
	}

}


void ATopShooterPlayerController::MoveRightDiretion(float value) {

	if (myPawn != nullptr) {
		myPawn->MoveRight(value);
	}

}
