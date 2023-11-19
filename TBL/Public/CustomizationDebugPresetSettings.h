#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CustomizationPreset.h"
#include "CustomizationDebugPresetSettings.generated.h"

UCLASS(Blueprintable)
class UCustomizationDebugPresetSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationPreset> Presets;
    
    UCustomizationDebugPresetSettings();
};

