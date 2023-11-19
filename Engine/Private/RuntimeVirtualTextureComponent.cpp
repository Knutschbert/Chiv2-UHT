#include "RuntimeVirtualTextureComponent.h"

FTransform URuntimeVirtualTextureComponent::GetVirtualTextureTransform() const {
    return FTransform{};
}

URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent() {
    this->VirtualTexture = NULL;
    this->bUseStreamingLowMipsInEditor = false;
    this->BoundsSourceActor = NULL;
}

