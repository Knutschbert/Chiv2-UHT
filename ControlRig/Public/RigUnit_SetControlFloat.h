#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetControlFloat : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_SetControlFloat();
};

