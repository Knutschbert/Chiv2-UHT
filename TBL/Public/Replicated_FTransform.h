#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Replicated_FTransform.generated.h"

USTRUCT(BlueprintType)
struct FReplicated_FTransform {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
public:
    TBL_API FReplicated_FTransform();
};

