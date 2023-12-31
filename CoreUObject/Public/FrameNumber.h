#pragma once
#include "CoreMinimal.h"
#include "FrameNumber.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FFrameNumber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    COREUOBJECT_API FFrameNumber();
};

