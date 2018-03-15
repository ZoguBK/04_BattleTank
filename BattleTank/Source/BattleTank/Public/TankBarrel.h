// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category=Setup)
	float MaxDeggresPerSeconds = 20;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDeggres = 40;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDeggres = 0;

};
