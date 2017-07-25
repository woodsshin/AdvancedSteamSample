// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "DemoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class STEAMSAMPLE_413_API UDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// start recording replay
	UFUNCTION(BlueprintCallable, Category = "DemoPlayer")
		void StartCaptureReplay(FString DemoName, FString FriendlyName);

	// stop recording replay
	UFUNCTION(BlueprintCallable, Category = "DemoPlayer")
		void StopCaptureReplay();

	//Play Demo
	UFUNCTION(BlueprintCallable, Category = "DemoPlayer")
		void PlayDemo(const FString& DemoName);
};
