// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatterycollectTutoGameMode.generated.h"

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
};



