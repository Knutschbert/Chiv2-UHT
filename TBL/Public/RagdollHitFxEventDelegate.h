#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "RagdollHitFxEventDelegate.generated.h"

class AActor;
class AInventoryItem;
class UDamageSource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FRagdollHitFxEvent, AActor*, HitTaker, AActor*, HitCauser, AInventoryItem*, Weapon, const FHitResult&, HitResult, const FVector&, HitDirection, float, Damage, UDamageSource*, DamageSource, AActor*, Projectile, FName, AttackName);

