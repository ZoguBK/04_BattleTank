// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "BattleTank.h"
#include "TankAimingComponent.h"
#include "Engine/World.h"


void ATankAIController::BeginPlay() {

	Super::BeginPlay();

}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	auto ControledTank = GetPawn();

	if (!ensure(PlayerTank && ControledTank)) { return; }
	
	MoveToActor(PlayerTank, AcceptanceRadius);
	
	auto AimingComponent = ControledTank->FindComponentByClass<UTankAimingComponent>();	
	AimingComponent->AimAt(PlayerTank->GetActorLocation());

	AimingComponent->Fire(); // TODO FIX Firing
	
}
