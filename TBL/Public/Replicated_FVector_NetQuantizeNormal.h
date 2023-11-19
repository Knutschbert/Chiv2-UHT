#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "Replicated_FVector_NetQuantizeNormal.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector_NetQuantizeNormal {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Value;
    
public:
    TBL_API FReplicated_FVector_NetQuantizeNormal();
};

