#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "LastSpectatorPOV.generated.h"

USTRUCT(BlueprintType)
struct FLastSpectatorPOV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Frame;
    
    TBL_API FLastSpectatorPOV();
};

