#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ETrapEventResult.h"
#include "TrapEventInterface.generated.h"

class ATBLCharacterBase;

UINTERFACE(Blueprintable)
class UTrapEventInterface : public UInterface {
    GENERATED_BODY()
};

class ITrapEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HandleTrapEvent(ETrapEventResult Result, ATBLCharacterBase* TargetCharacter);
    
};

