#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TBLComponent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTBLComponent();
};

