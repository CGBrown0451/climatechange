// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Kismet/GameplayStatics.h"
#include "UserWidget.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class CLIMATECHANGE_API AMyHUD : public AHUD
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> HUD;
		UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> PauseMenu;
		UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> PurifierMenu;
	
		UPROPERTY(BlueprintReadOnly)
		UUserWidget* HUDClass;
		UPROPERTY(BlueprintReadOnly)
		UUserWidget* PauseClass;
		UPROPERTY(BlueprintReadOnly)
		UUserWidget* PurifierClass;

		bool OpenMenu(AActor* );
		bool CloseMenu();

};
