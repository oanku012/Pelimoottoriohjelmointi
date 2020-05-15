// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatterycollectTutoGameMode.generated.h"

//enum to store the current state of gameplay
UENUM(BlueprintType)
enum class EBatteryPlayState:uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatterycollectTutoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABatterycollectTutoGameMode();

	virtual void Tick(float DeltaTime) override;

	

	//Returns power needed to win, needed for the HUD
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	virtual void BeginPlay() override;

	//Returns the current playing state
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	//Sets a new player state
	void SetCurrentState(EBatteryPlayState NewState);

protected: 
	/*The rate at which the character loses power*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float DecayRate;

	//The power needed to win game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float PowerToWin;

	//The widget class to use for our HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	//The instance of the HUD
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private: 
	//Keeps track of the current playstate
	EBatteryPlayState CurrentState;


	TArray<class ASpawnVolume*> SpawnVolumeActors;

	//Handle any function calls that rely upon changing the playing state of our game
	void HandleNewState(EBatteryPlayState NewState);
};



