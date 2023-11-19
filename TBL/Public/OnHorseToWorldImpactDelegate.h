#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EHorseImpactLocation.h"
#include "EHorseToWorldImpactType.h"
#include "OnHorseToWorldImpactDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHorseToWorldImpact, FHitResult, Hit, EHorseImpactLocation, ImpactLocation, EHorseToWorldImpactType, ImpactType, FName, ImpactCombatState, float, ImpactSpeed);

