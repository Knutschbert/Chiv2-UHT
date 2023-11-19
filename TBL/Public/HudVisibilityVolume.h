#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "HudVisibilityVolume.generated.h"

UCLASS(Blueprintable)
class AHudVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    AHudVisibilityVolume();
};

