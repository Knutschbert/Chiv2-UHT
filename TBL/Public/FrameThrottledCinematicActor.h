#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EFrameThrottleBranch.h"
#include "FrameThrottledCinematicActor.generated.h"

UCLASS(Blueprintable)
class AFrameThrottledCinematicActor : public AActor {
    GENERATED_BODY()
public:
    AFrameThrottledCinematicActor();
private:
    UFUNCTION(BlueprintCallable)
    static void AttemptThrottledCall(EFrameThrottleBranch& Branches);
    
};

