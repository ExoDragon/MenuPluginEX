// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExVersionCard.generated.h"

/**
 * 
 */
UCLASS()
class MENUSYSTEMEX_API UExVersionCard : public UUserWidget
{
	GENERATED_BODY()
private:
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* VersionText;
	
protected:

	virtual void NativeConstruct() override;
	
public:
	void SetVersionText();
	
};
