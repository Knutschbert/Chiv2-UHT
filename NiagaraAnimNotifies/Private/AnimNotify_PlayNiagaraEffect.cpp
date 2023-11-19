#include "AnimNotify_PlayNiagaraEffect.h"

UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() const {
    return NULL;
}

UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect() {
    this->Template = NULL;
    this->Attached = true;
}

