#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "TBLPlayerStart.generated.h"

class AController;

UCLASS(Blueprintable)
class ATBLPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrioirtyLevel;
    
    ATBLPlayerStart();
    UFUNCTION(BlueprintCallable)
    bool IsValidSpawnFor(AController* Controller);
    
};

