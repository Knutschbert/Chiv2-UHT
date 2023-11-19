#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraHUD -FallbackName=DebugCameraHUD
#include "TBLDebugCameraHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATBLDebugCameraHUD : public ADebugCameraHUD {
    GENERATED_BODY()
public:
    ATBLDebugCameraHUD();
};

