#include "RigVMInstruction.h"

FRigVMInstruction::FRigVMInstruction() {
    this->OpCode = ERigVMOpCode::Execute_0_Operands;
    this->ByteCodeIndex = 0;
}

