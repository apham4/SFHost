// Copyright 2026 Anh Pham. All Rights Reserved.


#include "HPHUDBase.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "CommonActivatableWidget.h"

UCommonActivatableWidget* UHPHUDBase::PushWidgetToStack(TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	if (IsValid(WidgetStack) && IsValid(WidgetClass))
	{
		return WidgetStack->AddWidget<UCommonActivatableWidget>(WidgetClass);
	}
	return nullptr;
}