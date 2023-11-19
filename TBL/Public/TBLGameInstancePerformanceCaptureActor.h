#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TBLGameInstancePerformanceCaptureActor.generated.h"

UCLASS(Blueprintable)
class ATBLGameInstancePerformanceCaptureActor : public AActor {
    GENERATED_BODY()
public:
    ATBLGameInstancePerformanceCaptureActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Run();
    
};

