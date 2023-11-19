#include "NetValidation.h"

UNetValidation::UNetValidation() {
    this->DisableValidationCheck.AddDefaulted(1);
    this->ValidationTimingTolerance = 0.15f;
}

