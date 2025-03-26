// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"


UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary 
{
	GENERATED_BODY()
public:
	static FString UserName;

	UFUNCTION(BlueprintCallable)
	static void SetUserName(const FString& NewName);
	UFUNCTION(BlueprintCallable)
	static FString GetUserName();
};
