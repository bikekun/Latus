// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "LatusGameMode.h"
#include "LatusHUD.h"
#include "LatusCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "UserWidget.h"
#include "LatusCharacter.h"
#include "Kismet/GameplayStatics.h"

ALatusGameMode::ALatusGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALatusHUD::StaticClass();

	HUDState = EHUDState::HS_Ingame;
}

void ALatusGameMode::BeginPlay()
{
	ApplyHUDChange();
}

void ALatusGameMode::ApplyHUDChange()
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromParent();
	}

	switch (HUDState)
	{
	case EHUDState::HS_Ingame:
		{
		ApplyHUD(IngameHUDClass, false, false);
		break;
		}
	case EHUDState::HS_Inventory:
	{
		ApplyHUD(InventoryHUDClass, true, false);
		break;
	}
	case EHUDState::HS_Shop_Generate:
	{
		ApplyHUD(ShopGeneralHUDClass, true, true);
		break;
	}
	case EHUDState::HS_Shop_Weapon:
	{
		ApplyHUD(ShopWeaponGeneralHUDClass, false, false);
		break;
	}

	default:
	{
		ApplyHUD(IngameHUDClass, false, false);
		break;
	}

	}
}

uint8 ALatusGameMode::GetHUDState()
{
	return HUDState;
}

void ALatusGameMode::ChangeHUDState(uint8 NewState)
{
	HUDState = NewState;
	ApplyHUDChange();
}

bool ALatusGameMode::ApplyHUD(TSubclassOf<UUserWidget> WidgetToApply, bool bShowMouseCursor, bool EnableClickEvents)
{
	ALatusCharacter* Player = Cast<ALatusCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	APlayerController* Controller = GetWorld()->GetFirstPlayerController();

	if (WidgetToApply != nullptr)
	{
		//Настройка отображения курсора и кликов
		Controller->bShowMouseCursor = bShowMouseCursor;
		Controller->bEnableClickEvents = EnableClickEvents;

		//создание виджета и добавления
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetToApply);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			GLog->Log("Widget add to viewport");

			return true;
		}

	}

	return false;

}
