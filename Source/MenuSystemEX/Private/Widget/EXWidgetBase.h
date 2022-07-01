// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EXWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class UEXWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual void SetupWidget();

	UFUNCTION(BlueprintCallable)
	virtual void RemoveWidget();
	
};
