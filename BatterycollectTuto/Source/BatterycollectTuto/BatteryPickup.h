// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTTUTO_API ABatteryPickup : public APickup
{
	GENERATED_BODY()

public:
	//Sets default values for this actor's properties
	ABatteryPickup();
	
	/*Override the WasCollected function - use Implementation because it's a blueprint native event*/
	void WasCollected_Implementation() override;

	/*Public way to access the battery's power level*/
	float GetPower();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	bool good;

protected:
	/*Set the amount of power the battery gives to the character*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;

	
};
