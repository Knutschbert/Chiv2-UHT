#include "PhysicsAsset.h"

UPhysicsAsset::UPhysicsAsset() {
    this->bNotForDedicatedServer = false;
    this->ThumbnailInfo = NULL;
    this->bShouldUsePhysicsAssetPool = false;
}

