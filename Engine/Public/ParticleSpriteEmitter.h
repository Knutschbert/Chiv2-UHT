#pragma once
#include "CoreMinimal.h"
#include "ParticleEmitter.h"
#include "ParticleSpriteEmitter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UParticleSpriteEmitter : public UParticleEmitter {
    GENERATED_BODY()
public:
    UParticleSpriteEmitter();
};

