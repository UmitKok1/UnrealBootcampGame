// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealBootcampPlayerController.h"
#include "Kismet/KismetSystemLibrary.h"

void AUnrealBootcampPlayerController::BeginPlay() {
	Super::BeginPlay();
	MesajYazdir();
}

void AUnrealBootcampPlayerController::MesajYazdir_Implementation() {
	UKismetSystemLibrary::PrintString(this, FString("Merhaba Dunya!"));
}