#include "RigVMRegisterOffset.h"

FRigVMRegisterOffset::FRigVMRegisterOffset() {
    this->Type = ERigVMRegisterType::Plain;
    this->ScriptStruct = NULL;
    this->ElementSize = 0;
}

