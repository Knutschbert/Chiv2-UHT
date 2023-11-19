#pragma once
#include "CoreMinimal.h"
#include "OverrideBlendOut.generated.h"

USTRUCT(BlueprintType)
struct FOverrideBlendOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    ENGINE_API FOverrideBlendOut();
};

