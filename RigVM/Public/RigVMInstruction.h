#pragma once
#include "CoreMinimal.h"
#include "ERigVMOpCode.h"
#include "RigVMInstruction.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMInstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMOpCode OpCode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ByteCodeIndex;
    
    FRigVMInstruction();
};

