#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ST_SparseGrid -ObjectName=ST_SGComponent -FallbackName=ST_SGComponent
#include "SGComponent_TargetLocation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USGComponent_TargetLocation : public UST_SGComponent {
    GENERATED_BODY()
public:
    USGComponent_TargetLocation();
};

