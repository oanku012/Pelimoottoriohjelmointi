// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatterycollectTutoGameMode.h"
#include "BatterycollectTutoCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PawnMovementComponent.h"

ABatterycollectTutoGameMode::ABatterycollectTutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//base decay rate
	DecayRate = 0.1f;

	//Set the ticking functionality to true
	PrimaryActorTick.bCanEverTick = true;
}

void ABatterycollectTutoGameMode::BeginPlay() {
	Super::BeginPlay();

	//Find all spawn volume actors
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(EBatteryPlayState::EPlaying);

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
		//If our power is greater than needed to win, set the game's state to Won
		if (MyCharacter->GetCurrentPower() > PowerToWin) 
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}
		//If the character's power is positive
		else if (MyCharacter->GetCurrentPower() > 0) {
			//Decrease the character's power using the decay rate
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
		else 
		{
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}

}

float ABatterycollectTutoGameMode::GetPowerToWin() const {
	return PowerToWin;
}

EBatteryPlayState ABatterycollectTutoGameMode::GetCurrentState() const
{
	return CurrentState;
}

void ABatterycollectTutoGameMode::SetCurrentState(EBatteryPlayState NewState) 
{
	//Set current state
	CurrentState = NewState;
	//Handle the new current state
	HandleNewState(CurrentState);
}

void ABatterycollectTutoGameMode::HandleNewState(EBatteryPlayState NewState)
{
	switch (NewState)
	{
			//If the game is playing
		case EBatteryPlayState::EPlaying:
		{
			//Spawn volumes active
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(true);
			}
		}
		break;
		//Unknown/default state
		default:
		case EBatteryPlayState::EUnknown:
		{

		}
		break;
		//If we lost the game
		case EBatteryPlayState::EGameOver:
		{
			// spawn volumes inactive
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}

			//, block player input,
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (PlayerController) 
			{
				PlayerController->SetCinematicMode(true, false, false, true, true);
			}

			// ragdoll character
			ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

			if (MyCharacter) {
				
				MyCharacter->GetMesh()->SetSimulatePhysics(true);
				MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;

			}

		}
		break; 
		//If game is won
		case EBatteryPlayState::EWon:
		{
			//Spawn volumes inactive
			//Spawn volumes active
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}
		
		}
		break;
	}
}