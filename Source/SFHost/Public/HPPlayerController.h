// Copyright 2026 Anh Pham. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HPPlayerController.generated.h"

/**
 * PlayerController class for initializing the HUD Base.
 */
UCLASS()
class SFHOST_API AHPPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HPPlayerController")
	TSubclassOf<class UHPHUDBase> HUDBaseClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HPPlayerController")
	TSubclassOf<class UCommonActivatableWidget> StartingWidgetClass;

	UPROPERTY()
	class UHPHUDBase* HUDBaseInstance;
};
