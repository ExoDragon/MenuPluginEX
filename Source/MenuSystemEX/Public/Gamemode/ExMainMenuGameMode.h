// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"

#include "ExMainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MENUSYSTEMEX_API AExMainMenuGameMode : public AGameMode
{
	GENERATED_BODY()
public:
		
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Widgets)
	TSubclassOf<class UUserWidget> WidgetClass;
	UPROPERTY(EditDefaultsOnly)
	class UExContainerWidget* ExContainerWidget;
	
	virtual void BeginPlay() override;
	
private:
	
	
};
