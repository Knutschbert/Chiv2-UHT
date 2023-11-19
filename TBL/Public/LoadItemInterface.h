#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LoadItemInterface.generated.h"

class AInventoryItem;
class ATBLCharacter;

UINTERFACE(Blueprintable)
class ULoadItemInterface : public UInterface {
    GENERATED_BODY()
};

class ILoadItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadItem(AInventoryItem* Item, ATBLCharacter* Initiator);
    
};

