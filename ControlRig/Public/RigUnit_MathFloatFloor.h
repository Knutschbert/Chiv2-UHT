#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatFloor.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatFloor();
};

