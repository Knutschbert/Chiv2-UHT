#include "RigUnit_SetRelativeBoneTransform.h"

FRigUnit_SetRelativeBoneTransform::FRigUnit_SetRelativeBoneTransform() {
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
    this->CachedBoneIndex = 0;
    this->CachedSpaceIndex = 0;
}

