// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyCharacter.h"


// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


//void AEnemyCharacter::CalculateHealth(float Delta)
//{
//	Health += Delta;
//	CalculateDead();
//}
//
//void AEnemyCharacter::CalculateDead()
//{
//	if (Health <= 0)
//		isDead = true;
//	else
//		isDead = false;
//}
//
//#if WITH_EDITOR
//void AEnemyCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
//{
//	isDead = false;
//	Health = 100;
//
//	Super::PostEditChangeProperty(PropertyChangedEvent);
//
//	CalculateDead();
//}
//
//#endif