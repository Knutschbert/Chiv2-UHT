#pragma once
#include "CoreMinimal.h"
#include "EWalkableSlopeBehavior.h"
#include "WalkableSlopeOverride.generated.h"

USTRUCT(BlueprintType)
struct FWalkableSlopeOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkableSlopeAngle;
    
    ENGINE_API FWalkableSlopeOverride();
};

