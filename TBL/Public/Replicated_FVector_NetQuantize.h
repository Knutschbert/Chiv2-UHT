#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "Replicated_FVector_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector_NetQuantize {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Value;
    
public:
    TBL_API FReplicated_FVector_NetQuantize();
};

