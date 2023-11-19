#include "MediaComponent.h"

UMediaTexture* UMediaComponent::GetMediaTexture() const {
    return NULL;
}

UMediaPlayer* UMediaComponent::GetMediaPlayer() const {
    return NULL;
}

UMediaComponent::UMediaComponent() {
    this->MediaTexture = NULL;
    this->MediaPlayer = NULL;
}

