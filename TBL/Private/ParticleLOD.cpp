#include "ParticleLOD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

UParticleSystem* AParticleLOD::GetCascadeTemplate() {
    return NULL;
}

AParticleLOD::AParticleLOD() {
    this->CascadeEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Emitter"));
    this->SpawnScale = 1.00f;
    this->Cull = 1.00f;
    this->AlphaScale = 1.00f;
}

