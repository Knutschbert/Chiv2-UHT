#pragma once
#include "CoreMinimal.h"
#include "RepFloat16.generated.h"

USTRUCT(BlueprintType)
struct FRepFloat16 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    ENGINE_API FRepFloat16();
};

