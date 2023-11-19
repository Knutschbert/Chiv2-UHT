#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnProjectilePenetratedPassiveShieldDelegate.generated.h"

class AInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProjectilePenetratedPassiveShield, AInventoryItem*, Shield, AInventoryItem*, Projectile, FVector, HitLocation);

