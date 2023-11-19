#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "CustomFastArraySerializer.generated.h"

USTRUCT(BlueprintType)
struct FCustomFastArraySerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    TBL_API FCustomFastArraySerializer();
};

