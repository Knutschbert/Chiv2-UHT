#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_GetControlBool.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_GetControlBool : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlBool();
};

