// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealBootcampGameGameModeBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UnrealBootcampPlayerController.h"


AUnrealBootcampGameGameModeBase::AUnrealBootcampGameGameModeBase() {
	//PlayerControllerClass = AUnrealBootcampPlayerController::StaticClass();
}

void AUnrealBootcampGameGameModeBase::BeginPlay() {
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(GetWorld(), FString("Merhaba Bootcamp!"), true, true, FColor::Red, 10.f);
}