#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlBool.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetControlBool : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_SetControlBool();
};

