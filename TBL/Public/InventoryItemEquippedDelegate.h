#pragma once
#include "CoreMinimal.h"
#include "InventoryItemEquippedDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemEquipped, AInventoryItem*, InventoryItem);

