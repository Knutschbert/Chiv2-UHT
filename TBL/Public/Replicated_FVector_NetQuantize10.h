#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
#include "Replicated_FVector_NetQuantize10.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector_NetQuantize10 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 Value;
    
public:
    TBL_API FReplicated_FVector_NetQuantize10();
};

