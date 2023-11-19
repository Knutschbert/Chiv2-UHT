#include "RigUnit_DistributeRotation.h"

FRigUnit_DistributeRotation::FRigUnit_DistributeRotation() {
    this->RotationEaseType = EControlRigAnimEasingType::Linear;
    this->bPropagateToChildren = false;
}

