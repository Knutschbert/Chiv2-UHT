#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "TBLAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTBLAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    TBL_API FTBLAnimInstanceProxy();
};

