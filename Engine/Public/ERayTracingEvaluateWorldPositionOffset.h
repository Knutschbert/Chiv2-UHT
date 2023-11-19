#pragma once
#include "CoreMinimal.h"
#include "ERayTracingEvaluateWorldPositionOffset.generated.h"

UENUM(BlueprintType)
enum class ERayTracingEvaluateWorldPositionOffset : uint8 {
    Inherit,
    ForceOn,
    ForceOff,
};

