#include "ParticleModuleSpawn.h"

UParticleModuleSpawn::UParticleModuleSpawn() {
    this->ParticleBurstMethod = EPBM_Instant;
    this->bUseBurstScaleMultiplier = false;
    this->bApplyGlobalSpawnRateScale = true;
}

