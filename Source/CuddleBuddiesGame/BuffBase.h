// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuffBase.generated.h"

class USphereComponent;

UCLASS()
class CUDDLEBUDDIESGAME_API ABuffBase : public AActor
{

	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABuffBase();

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void NotifyActorBeginOverlap(AActor * OtherActor);

	UFUNCTION(blueprintImplementableEvent, Category = "Pickup")
		void OnActivate(AActor* pickedUpBy);
	
	
};
