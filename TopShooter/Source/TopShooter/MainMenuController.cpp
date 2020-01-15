// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AMainMenuController::AMainMenuController() {

	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	keyPressed = false;
}

void AMainMenuController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void AMainMenuController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("AnyKey", IE_Pressed, this, &AMainMenuController::KeyPressed);
	InputComponent->BindAction("AnyKey", IE_Released, this, &AMainMenuController::KeyUnpressed);

}

void AMainMenuController::BeginPlay()
{
	Super::BeginPlay();

	if (wMainMenu) {

		MyMainMenu = CreateWidget<UUserWidget>(this, wMainMenu);

		if (MyMainMenu){

			MyMainMenu->AddToViewport();
		}


		bShowMouseCursor = true;
	}

}

void AMainMenuController::KeyPressed()
{
	keyPressed = true;
	UGameplayStatics::OpenLevel(this, "TopDownExampleMap");
}

void AMainMenuController::KeyUnpressed()
{
	keyPressed = false;

}
