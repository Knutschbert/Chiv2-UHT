#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "RagdollTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FRagdollTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TBL_API FRagdollTickFunction();
};

template<>
struct TStructOpsTypeTraits<FRagdollTickFunction> : public TStructOpsTypeTraitsBase2<FRagdollTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

