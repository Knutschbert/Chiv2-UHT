#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "TBLParticleSystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTBLParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UTBLParticleSystemComponent();
};

