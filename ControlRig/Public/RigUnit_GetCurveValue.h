#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_GetCurveValue.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetCurveValue : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedCurveIndex;
    
public:
    CONTROLRIG_API FRigUnit_GetCurveValue();
};

