#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SafeZone -FallbackName=SafeZone
#include "TBLSafeZone.generated.h"

UCLASS(Blueprintable)
class UTBLSafeZone : public USafeZone {
    GENERATED_BODY()
public:
    UTBLSafeZone();
};

