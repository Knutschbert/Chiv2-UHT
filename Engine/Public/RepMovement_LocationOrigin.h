#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize.h"
#include "RepMovement_LocationOrigin.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRepMovement_LocationOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LocationOriginCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LocationOrigin;
    
    FRepMovement_LocationOrigin();
};

