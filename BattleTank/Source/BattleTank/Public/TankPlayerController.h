// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

// Forward declarations
class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()	

private:

	UPROPERTY(EditDefaultsOnly)
	float CrossHairXLoacation = 0.5;
	UPROPERTY(EditDefaultsOnly)
	float CrossHairYLoacation = 0.33333;
	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	ATank* GetControlledTank() const;
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector& HitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& WorldDirection) const ;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

};
