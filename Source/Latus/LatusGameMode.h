// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LatusGameMode.generated.h"

UCLASS(minimalapi)
class ALatusGameMode : public AGameModeBase
{
	GENERATED_BODY()

		
public:
	ALatusGameMode();

	virtual void BeginPlay() override;

	enum EHUDState : uint8
	{
		HS_Ingame,
		HS_Inventory,
		HS_Shop_Generate,
		HS_Shop_Weapon,
	};

	void ApplyHUDChange();

	uint8 GetHUDState();

	UFUNCTION(BlueprintCallable, Category = HUD)
	void ChangeHUDState(uint8 NewState);

	bool ApplyHUD(TSubclassOf<class UUserWidget> WidgetToApply, bool bShowMouseCursor, bool EnableClickEvents);

protected:
	uint8 HUDState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD)
		TSubclassOf<class UUserWidget> IngameHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD)
		TSubclassOf<class UUserWidget> InventoryHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD)
		TSubclassOf<class UUserWidget> ShopGeneralHUDClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = HUD)
		TSubclassOf<class UUserWidget> ShopWeaponGeneralHUDClass;

	UPROPERTY()
		class UUserWidget* CurrentWidget;

};



