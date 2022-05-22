// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/Container/ExContainerWidget.h"

#include "Widget/Title/ExTitleScreenUserWidget.h"
#include "Components/WidgetSwitcher.h"

FReply UExContainerWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{

	if(!MainWidgetSwitcher)
	{
		return FReply::Handled();
	}

	if(MainWidgetSwitcher->GetNumWidgets() <= 0)
	{
		return FReply::Handled();
	}
	
	if(MainWidgetSwitcher->GetActiveWidget()->IsA(UExTitleScreenUserWidget::StaticClass()))
	{
		OnTitleActionTaken();
	}
	return FReply::Handled();
}

FReply UExContainerWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{

	if(!MainWidgetSwitcher)
	{
		return FReply::Handled();
	}
	
	if(MainWidgetSwitcher->GetNumWidgets() <= 0)
	{
		return FReply::Handled();
	}
	
	if(MainWidgetSwitcher->GetActiveWidget()->IsA(UExTitleScreenUserWidget::StaticClass()))
	{
		OnTitleActionTaken();
	}
	return FReply::Handled();
}

void UExContainerWidget::OnTitleActionTaken()
{
	if(MainWidgetSwitcher->GetNumWidgets() >= 1)
	{
		MainWidgetSwitcher->SetActiveWidgetIndex(1);
	}
}
