#include "InterpToMovementComponent.h"

void UInterpToMovementComponent::StopSimulating(const FHitResult& HitResult) {
}

void UInterpToMovementComponent::RestartMovement(float InitialDirection) {
}

void UInterpToMovementComponent::FinaliseControlPoints() {
}

UInterpToMovementComponent::UInterpToMovementComponent() {
    this->Duration = 1.00f;
    this->bPauseOnImpact = false;
    this->bSweep = true;
    this->TeleportType = ETeleportType::None;
    this->BehaviourType = EInterpToBehaviourType::OneShot;
    this->bCheckIfStillInWorld = true;
    this->bForceSubStepping = false;
    this->MaxSimulationTimeStep = 0.05f;
    this->MaxSimulationIterations = 8;
}

