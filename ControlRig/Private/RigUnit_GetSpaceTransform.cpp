#include "RigUnit_GetSpaceTransform.h"

FRigUnit_GetSpaceTransform::FRigUnit_GetSpaceTransform() {
    this->SpaceType = EBoneGetterSetterMode::LocalSpace;
    this->CachedSpaceIndex = 0;
}

