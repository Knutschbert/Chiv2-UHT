#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "CameraModifier_CancelRotation.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_CancelRotation : public UCameraModifier {
    GENERATED_BODY()
public:
    UCameraModifier_CancelRotation();
};

