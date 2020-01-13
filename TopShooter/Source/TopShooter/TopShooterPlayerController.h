// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TopShooterPlayerController.generated.h"

class ATopShooterCharacter;

UCLASS()
class ATopShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATopShooterPlayerController();

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface
	virtual void BeginPlay();

	/** Navigate player to the current mouse cursor location. */
	void MoveToMouseCursor();
	
	/** Navigate player to the given world location. */
	void SetNewMoveDestination(const FVector DestLocation);

	/** Input handlers for SetDestination action. */
	void OnSetDestinationPressed();
	void OnSetDestinationReleased();

	void MoveForwardDiretion(float value);

	void MoveRightDiretion(float value);



protected: 

	ATopShooterCharacter *myPawn;

};


