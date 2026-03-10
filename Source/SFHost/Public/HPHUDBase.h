// Copyright 2026 Anh Pham. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HPHUDBase.generated.h"

/**
 * Base widget for the CommonUI interface. Contains the Activatable Widget Stack required for CommonUI.
 */
UCLASS()
class SFHOST_API UHPHUDBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "HPHUDBase")
	class UCommonActivatableWidget* PushWidgetToStack(TSubclassOf<class UCommonActivatableWidget> WidgetClass);

protected:
	UPROPERTY(BlueprintReadOnly, Category = "HPHUDBase", meta = (BindWidget))
	class UCommonActivatableWidgetStack* WidgetStack;
};
