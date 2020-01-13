// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TopShooterGameMode.h"
#include "TopShooterPlayerController.h"
#include "TopShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopShooterGameMode::ATopShooterGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopShooterPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}