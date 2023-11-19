#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HollowNavBlocker.generated.h"

UCLASS(Abstract, Blueprintable)
class AHollowNavBlocker : public AActor {
    GENERATED_BODY()
public:
    AHollowNavBlocker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

