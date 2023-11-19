#pragma once
#include "CoreMinimal.h"
#include "CRFourPointBezier.h"
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorMakeBezierFourPoint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCRFourPointBezier Bezier;
    
    CONTROLRIG_API FRigUnit_MathVectorMakeBezierFourPoint();
};

