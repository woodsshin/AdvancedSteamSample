// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamSample_413.h"
#include "DemoGameInstance.h"


void UDemoGameInstance::StartCaptureReplay(FString DemoName, FString FriendlyName)
{
	// destory previous demo
	if (GetWorld()->DemoNetDriver)
	{
		StopCaptureReplay();
	}
	// FDateTime::Now().ToString()
	Super::StartRecordingReplay(DemoName, FriendlyName);
}

void UDemoGameInstance::StopCaptureReplay()
{
	Super::StopRecordingReplay();
}

void UDemoGameInstance::PlayDemo(const FString& DemoName)
{
	// Play the demo
	PlayReplay(DemoName);
}