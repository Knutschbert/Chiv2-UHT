#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ST_SGComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ST_SPARSEGRID_API UST_SGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UST_SGComponent();
};

