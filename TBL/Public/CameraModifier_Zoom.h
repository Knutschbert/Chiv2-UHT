#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "CameraModifier_Zoom.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_Zoom : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomedFOV;
    
    UCameraModifier_Zoom();
};

