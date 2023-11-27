// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UnrealBootcampPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALBOOTCAMPGAME_API AUnrealBootcampPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintNativeEvent)
	void MesajYazdir();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsLoggedIn = false;
	
};
