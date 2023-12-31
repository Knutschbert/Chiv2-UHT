#pragma once
#include "CoreMinimal.h"
#include "WeightedBlendable.h"
#include "WeightedBlendables.generated.h"

USTRUCT(BlueprintType)
struct FWeightedBlendables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> Array;
    
    ENGINE_API FWeightedBlendables();
};

