// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTurret.h"
#include "Engine/World.h"

void UTankTurret::Rotate(float RelativeSpeed) {
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed*MaxDeggresPerSeconds*GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;

	//auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDeggres, MaxElevationDeggres);

	SetRelativeRotation(FRotator(0, Rotation, 0));

}


