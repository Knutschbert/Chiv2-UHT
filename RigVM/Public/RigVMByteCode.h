#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCode.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMByteCode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteCode;
    
public:
    FRigVMByteCode();
};

