// Fill out your copyright notice in the Description page of Project Settings.


#include "UnreallBootcampActor.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetSystemLibrary.h"

void AUnreallBootcampActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AUnreallBootcampActor, bIsLoggedIn);
	DOREPLIFETIME(AUnreallBootcampActor, bHasAccounts);
	//DOREPLIFETIME(AUnreallBootcampActor, bIsLoggedIn, COND_SkipOwner);
}

// Sets default values
AUnreallBootcampActor::AUnreallBootcampActor(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	SetRootComponent(Mesh);
	bReplicates = true;
	SetReplicateMovement(true);
	//bAlwaysRelevant = true;
}

// Called when the game starts or when spawned
void AUnreallBootcampActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnreallBootcampActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnreallBootcampActor::OnRep_Accounts()
{
	UKismetSystemLibrary::PrintString(this, FString("Degiskenin Degeri Degisti!"));
}

