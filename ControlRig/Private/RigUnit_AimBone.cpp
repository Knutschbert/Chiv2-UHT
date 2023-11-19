#include "RigUnit_AimBone.h"

FRigUnit_AimBone::FRigUnit_AimBone() {
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
    this->BoneIndex = 0;
    this->PrimaryCachedSpaceIndex = 0;
    this->SecondaryCachedSpaceIndex = 0;
}

