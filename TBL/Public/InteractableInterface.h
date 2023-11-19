#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InteractableInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable)
class UInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractableInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUse(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableUnreachable(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableCaptured(APawn* Pawn);
    
};

