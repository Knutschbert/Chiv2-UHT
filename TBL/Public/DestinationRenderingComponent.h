#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DestinationRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TBL_API UDestinationRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDestinationRenderingComponent();
};

