#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatCeil.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatCeil();
};

