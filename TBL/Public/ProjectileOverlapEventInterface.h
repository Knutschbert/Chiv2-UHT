#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ProjectileOverlapEventInterface.generated.h"

class AInventoryItem;

UINTERFACE(Blueprintable)
class UProjectileOverlapEventInterface : public UInterface {
    GENERATED_BODY()
};

class IProjectileOverlapEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileOverlap(AInventoryItem* Item, FHitResult HitResult);
    
};

