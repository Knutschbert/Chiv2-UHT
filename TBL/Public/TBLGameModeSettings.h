#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TBLGameModeSettings.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, NotPlaceable)
class UTBLGameModeSettings : public UObject {
    GENERATED_BODY()
public:
    UTBLGameModeSettings();
};

