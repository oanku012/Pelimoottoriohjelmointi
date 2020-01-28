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

protected: 
	/*The rate at which the character loses power*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power")
	float DecayRate;
};



