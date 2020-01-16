// Fill out your copyright notice in the Description page of Project Settings.


#include "HealhSystemComponent.h"

// Sets default values for this component's properties
UHealhSystemComponent::UHealhSystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealhSystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealhSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UHealhSystemComponent::GetFactorizedHealth()
{
	return health / maxHealth;
}

bool UHealhSystemComponent::TakeDamage(float dmg)
{
	health -= dmg;

	if (health <= 0.00000001f) {
		alive = false;
	}

	return alive;

}

void UHealhSystemComponent::Heal(float vCuracion)
{

	health += vCuracion;

	if (health >= maxHealth) {
		health = maxHealth;
	}

}

void UHealhSystemComponent::SettingHeal(float h)
{
	alive = true;
	health = h;
	maxHealth = h;
	
}

