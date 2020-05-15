// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatterycollectTutoCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "Pickup.h"
#include "BatteryPickup.h"
#include "NPC.h"

//////////////////////////////////////////////////////////////////////////
// ABatterycollectTutoCharacter

ABatterycollectTutoCharacter::ABatterycollectTutoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create the collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->SetupAttachment(RootComponent);
	CollectionSphere->SetSphereRadius(200.f);

	//Set up initial power default
	InitialPower = 2000.f;
	CurrentPower = InitialPower;

	SpeedFactor = 0.75f;
	BaseSpeed = 10.0f;

	//Set the ticking functionality to true
	PrimaryActorTick.bCanEverTick = true;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

// Called every frame

//MAYBE CHANGE THIS TO A FIXEDUPDATE SOMEHOW?
void ABatterycollectTutoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	HandleNearbyActors();

}

//////////////////////////////////////////////////////////////////////////
// Input

void ABatterycollectTutoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAction("Collect", IE_Pressed, this, &ABatterycollectTutoCharacter::CollectPickups);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABatterycollectTutoCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABatterycollectTutoCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABatterycollectTutoCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABatterycollectTutoCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABatterycollectTutoCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABatterycollectTutoCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABatterycollectTutoCharacter::OnResetVR);
}


void ABatterycollectTutoCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABatterycollectTutoCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ABatterycollectTutoCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ABatterycollectTutoCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABatterycollectTutoCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABatterycollectTutoCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		if (GetCharacterMovement()->MovementMode == MOVE_Swimming)
		{
			//const FRotator Rotation = GetFollowCamera()->GetRelativeRotationFromWorld;
			const FVector Direction = FollowCamera->GetForwardVector();

			AddMovementInput(Direction, Value);

		}
		else {

			// find out which way is forward
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			// get forward vector
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			AddMovementInput(Direction, Value);

		}
	}
}

void ABatterycollectTutoCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ABatterycollectTutoCharacter::HandleNearbyActors () {

	//Get all overlapping actors and store them in an array
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	if (CollectedActors.Num() > 0) {

		//Keep track of the collected battery power
		float CollectedPower = 0;

		//The amount of power drained by an enemy or enemies
		//float enemyDrainPower = 0;

		//For each actor we collected
		for (int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
		{
			//Cast the actor to APickup
			APickup* const TestPickup = Cast<APickup>(CollectedActors[iCollected]);

			//If the cast is successful and the pickup is valid and active
			if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive()) {

				//Call the pickup's WasCollected function
				TestPickup->WasCollected();
				//Check to see if the pickup is also a battery
				ABatteryPickup* const TestBattery = Cast<ABatteryPickup>(TestPickup);
				if (TestBattery) {

					if (TestBattery->good) {
						//increase the collected power if it's a good battery
						CollectedPower += TestBattery->GetPower();
					}
					else {
						//Decrease the collected power if it's a bad battery
						CollectedPower -= TestBattery->GetPower();
					}
				}
				//Deactivate the pickup
				TestPickup->SetActive(false);
			}
			else {
				//ACharacter* const BadMan = Cast<ACharacter>(CollectedActors[iCollected]);

				ANPC* const BadMan = Cast<ANPC>(CollectedActors[iCollected]);
				

				if (BadMan && !BadMan->IsPendingKill()) {
					CollectedPower -= BadMan->GetPowerDrainValue();

				}
			}

			
		}

		if (CollectedPower != 0)
		{
			UpdatePower(CollectedPower);
		}
	}
}

float ABatterycollectTutoCharacter::GetInitialPower() {
	return InitialPower;
}

float ABatterycollectTutoCharacter::GetCurrentPower() {
	return CurrentPower;
}

void ABatterycollectTutoCharacter::UpdatePower(float PowerChange)
{
	//change power
	CurrentPower = CurrentPower + PowerChange;
	//Change speed based on power
	GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + SpeedFactor * CurrentPower;
	//call visual effect
	PowerChangeEffect();
}

// Needed for edited defaults to take effect in the character
// i.e. this gets called after the constructor when the character is spawned
// into the game (similar to Unity's Awake()-function)
void ABatterycollectTutoCharacter::PostInitProperties()
{
	Super::PostInitProperties();
	this->CurrentPower = this->InitialPower;
}
