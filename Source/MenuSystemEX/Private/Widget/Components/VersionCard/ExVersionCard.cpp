// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/Components/VersionCard/ExVersionCard.h"
#include "Components/TextBlock.h"

void UExVersionCard::NativeConstruct()
{
	Super::NativeConstruct();
	SetVersionText();
}

void UExVersionCard::SetVersionText()
{
	if(GConfig)
	{
		FString ProjectVersion;
		GConfig->GetString(
			TEXT("/Script/EngineSettings.generalProjectSettings"),
			TEXT("ProjectVersion"),
			ProjectVersion,
			GGameIni
		);

		FText ProjectVersionText = FText::FromString(FString::Printf(TEXT("Version %s"), *ProjectVersion));
		if(VersionText)
		{
			VersionText->SetText(ProjectVersionText);
		}
	}
}
