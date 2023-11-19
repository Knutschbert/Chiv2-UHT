#include "SoundSourceBus.h"

USoundSourceBus::USoundSourceBus() {
    this->SourceBusChannels = ESourceBusChannels::Mono;
    this->SourceBusDuration = 0.00f;
    this->bAutoDeactivateWhenSilent = false;
}

