#include "MovementSyncTimer.h"

FMovementSyncTimer::FMovementSyncTimer() {
    this->Handle = 0;
    this->Frame = 0;
    this->StartTime = 0.00f;
    this->Time = 0.00f;
    this->OverTime = 0.00f;
    this->bComplete = false;
    this->bDynamic = false;
}

