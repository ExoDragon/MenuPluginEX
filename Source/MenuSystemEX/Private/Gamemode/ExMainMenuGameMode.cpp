// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode/ExMainMenuGameMode.h"

#include "Widget/Container/ExContainerWidget.h"

void AExMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController)
	{
		ExContainerWidget = Cast<UExContainerWidget>(CreateWidget(PlayerController, WidgetClass));
		if(ExContainerWidget)
		{
			ExContainerWidget->SetupWidget();
		}
	}
}
