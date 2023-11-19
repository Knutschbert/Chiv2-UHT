#include "ParticleLOD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

UParticleSystem* AParticleLOD::GetCascadeTemplate() {
    return NULL;
}

AParticleLOD::AParticleLOD() {
    this->CascadeEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Emitter"));
    this->CascadeEffect = NULL;
    this->bDebugMode = false;
    this->CascadeEffect_Debug = NULL;
    this->DebugScale = 100.00f;
}

