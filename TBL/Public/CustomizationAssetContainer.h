#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CustomizationAssetContainer.generated.h"

class UCTBase;

UCLASS(Blueprintable)
class UCustomizationAssetContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCTBase*> Assets;
    
    UCustomizationAssetContainer();
};

