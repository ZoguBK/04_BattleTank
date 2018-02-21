// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()	

public:
	
	virtual void BeginPlay() override;
	ATank* GetControlledTank() const;
	void Tick(float DeltaTime) override;
	void AimTowordsCrsshair();
	bool GetSightRayHitLocation(FVector& HitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& WorldDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairLocationX =.5;
	UPROPERTY(EditAnywhere)
	float CrossHairLocationY = .33333;
	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

};
