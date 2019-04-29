
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "LootBox.generated.h"


	// Custom struct that ties an object class to an integer to determine drop rate

	USTRUCT(BlueprintType)
		struct FLoot_Box
	{
		GENERATED_USTRUCT_BODY()

	public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nebula Structs")
			TSubclassOf <AActor> Item_Class;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nebula Structs", meta = (ClampMin = "0", ClampMax = "100", UIMin = "0", UIMax = "100"))
			int32 Drop_Rate;

	};

	UCLASS()
		class CUDDLEBUDDIESGAME_API ULootBox : public UBlueprintFunctionLibrary
	{
		GENERATED_BODY()

	public:

		/* Input "Loot Box" struct array and their respective "drop rate" ( 50 = 50% chance of being selected),
		output will be the randomly selected class. The boolean output is for error handling to ensure the total "drop rate" = 100
		Node will not function unless the total is exactly 100, negative values will be treated as their positive counterparts */

		UFUNCTION(BlueprintCallable, meta = (Category = "Nebula Nodes", Keywords = "Loot, Drop, Random, Loot Box, Chance"))
			static void Random_Drop_Rate(TArray <FLoot_Box> Loot_Classes, TSubclassOf <AActor> &Drop_Item, bool &Drop_Rate_Equal_100);

	};
