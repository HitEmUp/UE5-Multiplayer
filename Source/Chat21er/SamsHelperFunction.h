// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SamsHelperFunction.generated.h"

/**
 * 
 */
UCLASS()
class CHAT21ER_API USamsHelperFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Sam")
	static TArray<int32> GetRandomNumbers(int32 Size, bool dupplicationAllowed);
};
