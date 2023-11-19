#include "PhysicsAssetWorldPool.h"

UPhysicsAssetWorldPool::UPhysicsAssetWorldPool() {
    this->NumToPrepopulate = 64;
    this->PhysicsAssetsToPrepopulate.AddDefaulted(2);
}

