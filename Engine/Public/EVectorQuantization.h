#pragma once
#include "CoreMinimal.h"
#include "EVectorQuantization.generated.h"

UENUM(BlueprintType)
enum class EVectorQuantization : uint8 {
    RoundWholeNumber,
    RoundOneDecimal,
    RoundTwoDecimals,
    RoundWholeNumberSmaller,
    TBS_15_15,
    TBS_15_8,
    TBS_14_8,
    TBS_12_12,
    TBS_12_8,
    TBS_10_8,
    TBS_8_12,
    TBS_8_10,
    TBS_8_8,
    TBS_6_6,
    TBS_4_4,
};

