// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widget/ExBaseUserWidget.h"
#include "ExContainerWidget.generated.h"

/**
 * 
 */
UCLASS()
class MENUSYSTEMEX_API UExContainerWidget : public UExBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(meta=(BindWidget))
	class UWidgetSwitcher* MainWidgetSwitcher;
	
protected:
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	void OnTitleActionTaken();
	
};
