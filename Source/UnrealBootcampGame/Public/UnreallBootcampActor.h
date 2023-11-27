// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "UnreallBootcampActor.generated.h"

UCLASS()
class UNREALBOOTCAMPGAME_API AUnreallBootcampActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnreallBootcampActor(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	UStaticMeshComponent* GetCubeComponent();

	UFUNCTION()
	void OnRep_Accounts();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "Networking | Login System")
	bool bIsLoggedIn = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Accounts, Category = "Networking | Login System")
	bool bHasAccounts = false;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UStaticMeshComponent *Mesh = nullptr;

};
