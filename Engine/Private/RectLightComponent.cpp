#include "RectLightComponent.h"

void URectLightComponent::SetSourceWidth(float bNewValue) {
}

void URectLightComponent::SetSourceTexture(UTexture* bNewValue) {
}

void URectLightComponent::SetSourceHeight(float NewValue) {
}

void URectLightComponent::SetBarnDoorLength(float NewValue) {
}

void URectLightComponent::SetBarnDoorAngle(float NewValue) {
}

URectLightComponent::URectLightComponent() {
    this->SourceWidth = 64.00f;
    this->SourceHeight = 64.00f;
    this->BarnDoorAngle = 88.00f;
    this->BarnDoorLength = 20.00f;
    this->SourceTexture = NULL;
}

