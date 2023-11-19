#include "AnimMontageInstance.h"

FAnimMontageInstance::FAnimMontageInstance() {
    this->Montage = NULL;
    this->BlendingSections_StartFrame = 0;
    this->BlendingSections_Delay = 0.00f;
    this->BlendingSections_NextSection = 0.00f;
    this->BlendingSections_NextSectionPlayRate = 0.00f;
    this->BlendingSections_BlendOut = false;
    this->bPlaying = false;
    this->DefaultBlendTimeMultiplier = 0.00f;
    this->Position = 0.00f;
    this->PlayRate = 0.00f;
    this->DisableRootMotionCount = 0;
    this->DisableRootMotionInAirCount = 0;
}

