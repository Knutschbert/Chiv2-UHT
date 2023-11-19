#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "CameraModifier_BlendInRotation.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_BlendInRotation : public UCameraModifier {
    GENERATED_BODY()
public:
    UCameraModifier_BlendInRotation();
};

