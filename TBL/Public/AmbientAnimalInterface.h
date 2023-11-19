#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AmbientAnimalInterface.generated.h"

UINTERFACE(Blueprintable)
class UAmbientAnimalInterface : public UInterface {
    GENERATED_BODY()
};

class IAmbientAnimalInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RandomizeAnimal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimalHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimalFlee(const FVector& StimulusLocation);
    
};

