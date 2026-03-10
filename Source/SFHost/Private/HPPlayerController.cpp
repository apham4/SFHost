// Copyright 2026 Anh Pham. All Rights Reserved.


#include "HPPlayerController.h"
#include "HPHUDBase.h"
#include "CommonActivatableWidget.h"

void AHPPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (!IsLocalPlayerController() || !IsValid(HUDBaseClass))
	{
		return;
	}

	HUDBaseInstance = CreateWidget<UHPHUDBase>(this, HUDBaseClass);
	if (IsValid(HUDBaseInstance))
	{
		HUDBaseInstance->AddToViewport();
		if (IsValid(StartingWidgetClass))
		{
			HUDBaseInstance->PushWidgetToStack(StartingWidgetClass);
		}
	}

	FInputModeUIOnly inputModeData;
	SetInputMode(inputModeData);
	bShowMouseCursor = true;
}