#pragma once
#include "CoreMinimal.h"
#include "EMaterialShadingRate.generated.h"

UENUM(BlueprintType)
enum EMaterialShadingRate {
    MSR_1X1,
    MSR_1X2,
    MSR_2X1 = 0x4,
    MSR_2X2,
    MSR_2X4,
    MSR_4X2 = 0x9,
    MSR_4X4,
};

