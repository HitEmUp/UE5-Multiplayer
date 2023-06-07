// Fill out your copyright notice in the Description page of Project Settings.


#include "SamsHelperFunction.h"


TArray<int32> USamsHelperFunction::GetRandomNumbers(int32 Size, bool dupplicationAllowed)
{
	TArray<int32> RandomArray;
	RandomArray.Reserve(Size);

	for (int i = 0; i < Size; i++)
	{
		RandomArray.Add(FMath::RandRange(0, 4));
	}

	return RandomArray;
}

