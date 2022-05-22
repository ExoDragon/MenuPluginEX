// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExBaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MENUSYSTEMEX_API UExBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	virtual void SetupWidget();

	UFUNCTION(BlueprintCallable)
	virtual void RemoveWidget();
};
