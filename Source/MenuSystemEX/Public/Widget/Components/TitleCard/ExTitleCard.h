// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExTitleCard.generated.h"

/**
 * 
 */
UCLASS()
class MENUSYSTEMEX_API UExTitleCard : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* TitleText;
	
protected:
	virtual void NativeConstruct() override;
	
public:
	void SetTitleText();
};
