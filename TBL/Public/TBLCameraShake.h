#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShake -FallbackName=CameraShake
#include "TBLCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLCameraShake : public UCameraShake {
    GENERATED_BODY()
public:
    UTBLCameraShake();
};

