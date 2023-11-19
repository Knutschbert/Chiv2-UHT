#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBarStyle -FallbackName=ScrollBarStyle
#include "TBLScrollBarStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class UTBLScrollBarStyleDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle Style;
    
    UTBLScrollBarStyleDataAsset();
};

