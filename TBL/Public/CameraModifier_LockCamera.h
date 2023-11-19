#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "CameraModifier_LockCamera.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_LockCamera : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo CameraPOV;
    
public:
    UCameraModifier_LockCamera();
};

