// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "BattleTank.h"
#include "Tank.h"
#include "Engine/World.h"


void ATankAIController::BeginPlay() {

	Super::BeginPlay();

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControledTank = Cast<ATank>(GetPawn());
	if (PlayerTank)
	{
		ControledTank->AimAt(PlayerTank->GetActorLocation());
		ControledTank->Fire();
	}
}
