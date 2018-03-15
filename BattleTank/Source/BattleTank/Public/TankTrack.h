// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category=Input)
	void SetThrottle(float Throttle);
	
	//Max Force per Track in N
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 400000;
};
