#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ControlRigSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class CONTROLRIG_API UControlRigSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UControlRigSettings();
};

