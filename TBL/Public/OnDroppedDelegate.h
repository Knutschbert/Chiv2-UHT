#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "OnDroppedDelegate.generated.h"

class AInventoryItem;
class ATBLCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDropped, AInventoryItem*, Item, ATBLCharacter*, Character, FTransform, Transform);

