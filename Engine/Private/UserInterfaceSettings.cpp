#include "UserInterfaceSettings.h"

UUserInterfaceSettings::UUserInterfaceSettings() {
    this->RenderFocusRule = ERenderFocusRule::Never;
    this->ApplicationScale = 1.00f;
    this->UIScaleRule = EUIScalingRule::ShortestSide;
    this->bAllowHighDPIInGameMode = true;
    this->bLoadWidgetsOnDedicatedServer = false;
    this->CustomScalingRuleClassInstance = NULL;
    this->CustomScalingRule = NULL;
}

