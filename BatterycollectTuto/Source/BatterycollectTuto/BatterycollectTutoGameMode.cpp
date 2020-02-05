// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatterycollectTutoGameMode.h"
#include "BatterycollectTutoCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

ABatterycollectTutoGameMode::ABatterycollectTutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//base decay rate
	DecayRate = 0.01f;

	//Set the ticking functionality to true
	PrimaryActorTick.bCanEverTick = true;
}

void ABatterycollectTutoGameMode::BeginPlay() {
	Super::BeginPlay();

	// set the score to beat
	ABatterycollectTutoCharacter* MyCharacter = Cast<ABatterycollectTutoCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	if (HUDWidgetClass != nullptr) 
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();

		}
	}
}

void ABatterycollectTutoGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check that we are using the battery collector character
	ABatterycollectTutoCharacter* MyCharacter = Cast<ABatterycollectTutoCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter) {
		//If the character's power is positive
		if (MyCharacter->GetCurrentPower() > 0) {
			//Decrease the character's power using the decay rate
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
	}

}

float ABatterycollectTutoGameMode::GetPowerToWin() const {
	return PowerToWin;
}
