#include "CurrentPlatformSettings.h"

int32 UCurrentPlatformSettings::SetStreamingPoolSize(const FString& LevelName, bool bResetThePool) {
    return 0;
}

void UCurrentPlatformSettings::SetCascadeComponentParameters(UParticleSystemComponent* CascadeComponent) {
}

void UCurrentPlatformSettings::SetCascadeActorParameters(AEmitter* CascadeEmitter) {
}

UCurrentPlatformSettings::UCurrentPlatformSettings() {
    this->PlatformOverrides.AddDefaulted(3);
}

