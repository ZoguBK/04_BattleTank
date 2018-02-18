// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"
#include "Tank.h"

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();

	auto ControledTank = GetControlledTank();
	if (!ControledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possesing a tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possesing: %s"), *ControledTank->GetName());
	}
	
}

ATank* ATankPlayerController::GetControlledTank() const {
	return Cast<ATank>(GetPawn());
}

