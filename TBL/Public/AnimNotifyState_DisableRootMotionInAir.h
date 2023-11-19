#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_DisableRootMotionInAir.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_DisableRootMotionInAir : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableRootMotionInAir();
};

