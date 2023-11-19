#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DestroyableByPushableInterface.generated.h"

class UPushableComponent;

UINTERFACE(Blueprintable)
class UDestroyableByPushableInterface : public UInterface {
    GENERATED_BODY()
};

class IDestroyableByPushableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushableBeginOverlap(UPushableComponent* Pushable);
    
};

