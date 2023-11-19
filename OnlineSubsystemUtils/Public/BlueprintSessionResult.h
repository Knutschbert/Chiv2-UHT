#pragma once
#include "CoreMinimal.h"
#include "BlueprintSessionResult.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintSessionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsServerSelected;
    
    ONLINESUBSYSTEMUTILS_API FBlueprintSessionResult();
};

