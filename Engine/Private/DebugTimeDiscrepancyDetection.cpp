#include "DebugTimeDiscrepancyDetection.h"

FDebugTimeDiscrepancyDetection::FDebugTimeDiscrepancyDetection() {
    this->ClientError = 0.00f;
    this->TimeDiscrepancy = 0.00f;
    this->LifetimeRawTimeDiscrepancy = 0.00f;
    this->Lifetime = 0.00f;
    this->Resolving = false;
    this->ClientDelta = 0.00f;
    this->ServerDelta = 0.00f;
    this->ClientTimeStamp = 0.00f;
    this->DeltaOverride = 0.00f;
    this->TimeToPayBack = 0.00f;
    this->BaseDelta = 0.00f;
    this->ServerDeltaSinceLastMovementUpdate = 0.00f;
    this->TimeDiscrepancyAccumulatedClientDeltasSinceLastServerTick = 0.00f;
}

