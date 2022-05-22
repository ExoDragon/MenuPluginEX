// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/Components/TitleCard/ExTitleCard.h"
#include "Components/TextBlock.h"

void UExTitleCard::NativeConstruct()
{
	Super::NativeConstruct();
	SetTitleText();
}

void UExTitleCard::SetTitleText()
{
	if(GConfig)
	{
		FString ProjectName;
		GConfig->GetString(
			TEXT("/Script/EngineSettings.generalProjectSettings"),
			TEXT("ProjectName"),
			ProjectName,
			GGameIni
		);

		FText ProjectText = FText::FromString(ProjectName);
		if(TitleText)
		{
			TitleText->SetTextTransformPolicy(ETextTransformPolicy::ToUpper);
			TitleText->SetText(ProjectText);
		}		
	}
}
