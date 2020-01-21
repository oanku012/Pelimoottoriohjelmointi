// Fill out your copyright notice in the Description page of Project Settings.

#include "BatterycollectTuto.h"
#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"

//Set default values
ABatteryPickup::ABatteryPickup() {
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation()
{
	//Use the base pickup behavior
	Super::WasCollected_Implementation();
	//Destroy the battery
	Destroy();
}
