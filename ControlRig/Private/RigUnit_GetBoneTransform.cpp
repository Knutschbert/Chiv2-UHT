#include "RigUnit_GetBoneTransform.h"

FRigUnit_GetBoneTransform::FRigUnit_GetBoneTransform() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->CachedBoneIndex = 0;
}

