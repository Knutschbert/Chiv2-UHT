#include "BreakableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BreakableComponent.h"
#include "StatsComponent.h"

ABreakableActor::ABreakableActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->BreakableComponent = CreateDefaultSubobject<UBreakableComponent>(TEXT("BreakableComponent"));
    this->StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
}

