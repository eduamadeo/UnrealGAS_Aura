// Copyright eduamadeo


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AuraAttributeSet;
}

void UAuraWidgetController::BroadcasttInitialValues()
{

}

void UAuraWidgetController::BindCallbacksToDependencies()
{

}
