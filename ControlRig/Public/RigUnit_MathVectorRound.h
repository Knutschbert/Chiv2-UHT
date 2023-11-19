#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorRound.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorRound();
};

