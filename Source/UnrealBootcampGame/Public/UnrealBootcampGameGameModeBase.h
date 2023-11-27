// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealBootcampGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UNREALBOOTCAMPGAME_API AUnrealBootcampGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AUnrealBootcampGameGameModeBase();
	virtual void BeginPlay() override;
};
