#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GamepadLookResponseCurves.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UGamepadLookResponseCurves : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> Curves;
    
    UGamepadLookResponseCurves();
};

