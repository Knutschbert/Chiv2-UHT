#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.generated.h"

USTRUCT(BlueprintType)
struct FRigElementKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType Type;
    
    CONTROLRIG_API FRigElementKey();
};

