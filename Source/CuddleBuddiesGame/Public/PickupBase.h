// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

UCLASS()
class CUDDLEBUDDIESGAME_API APickupBase : public AActor
{
	class USphereComponent;

	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupBase();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	void NotifyActorBeginOverlap(AActor * OtherActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Pickup")
		void OnActivate(AActor * pickedUpBy);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
