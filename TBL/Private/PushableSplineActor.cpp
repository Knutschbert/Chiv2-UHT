#include "PushableSplineActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

void APushableSplineActor::OnLevelLoaded() {
}

APushableSplineActor::APushableSplineActor() {
    this->SplineComponentGenerated = CreateDefaultSubobject<USplineComponent>(TEXT("SplineGenerated"));
    this->SplineComponentOutline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineOutline"));
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->StartingDistance = 0.00f;
    this->AllSubLevelsLoaded = false;
    this->AllowConstructionScriptToRun = false;
}

