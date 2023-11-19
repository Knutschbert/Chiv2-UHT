#pragma once
#include "CoreMinimal.h"
#include "EControlRotationType.generated.h"

UENUM(BlueprintType)
enum class EControlRotationType : uint8 {
    Pitch,
    Yaw,
    Roll,
};

