#include "RigUnit_GetControlRotator.h"

FRigUnit_GetControlRotator::FRigUnit_GetControlRotator() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->CachedControlIndex = 0;
}

