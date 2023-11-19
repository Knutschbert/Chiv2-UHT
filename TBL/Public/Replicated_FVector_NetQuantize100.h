#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "Replicated_FVector_NetQuantize100.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FVector_NetQuantize100 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Value;
    
public:
    TBL_API FReplicated_FVector_NetQuantize100();
};

