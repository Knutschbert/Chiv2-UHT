#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DelegateWrapper_ActorDestroyed.generated.h"

class AActor;

UCLASS(Blueprintable)
class UDelegateWrapper_ActorDestroyed : public UObject {
    GENERATED_BODY()
public:
    UDelegateWrapper_ActorDestroyed();
    UFUNCTION(BlueprintCallable)
    void OnExecute(AActor* Actor);
    
};

