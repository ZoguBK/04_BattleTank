// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle) {

	auto ForceAplied = GetForwardVector()*Throttle*TrackMaxDrivingForce;
	auto ForceLocatio = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceAplied, ForceLocatio);

}


