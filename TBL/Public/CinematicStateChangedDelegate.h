#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CinematicStateChangedDelegate.generated.h"

class UCinematicState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCinematicStateChanged, FGameplayTag, PreviousStateTag, UCinematicState*, PreviousState, FGameplayTag, NewStateTag, UCinematicState*, NewState);

