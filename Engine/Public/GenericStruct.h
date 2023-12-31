#pragma once
#include "CoreMinimal.h"
#include "GenericStruct.generated.h"

USTRUCT(BlueprintType)
struct FGenericStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Data;
    
    ENGINE_API FGenericStruct();
};

