#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SwatchSelectionsByClass.h"
#include "CharacterCustomizationSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class UCharacterCustomizationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwatchSelectionsByClass> CustomizationSwatches;
    
    UCharacterCustomizationSettings();
};

