#include "ReflectionCaptureComponent.h"

UReflectionCaptureComponent::UReflectionCaptureComponent() {
    this->CaptureOffsetComponent = NULL;
    this->ReflectionSourceType = EReflectionSourceType::CapturedScene;
    this->Cubemap = NULL;
    this->SourceCubemapAngle = 0.00f;
    this->Brightness = 1.00f;
}

