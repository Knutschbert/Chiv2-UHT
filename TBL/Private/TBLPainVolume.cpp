#include "TBLPainVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

void ATBLPainVolume::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ATBLPainVolume::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

ATBLPainVolume::ATBLPainVolume() {
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->CaptureBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CaptureBox"));
    this->DamagePerSecondToApplyOnTimeExpire = 0.00f;
}

