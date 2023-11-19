#include "WaterActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void AWaterActor::PerformDeadCharactersIteration() {
}


void AWaterActor::OnWaterMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWaterActor::OnKilled(const FDeathDamageTakenEvent Event) {
}

AWaterActor::AWaterActor() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterMesh"));
    this->ZPlanExtent = 100.00f;
}

