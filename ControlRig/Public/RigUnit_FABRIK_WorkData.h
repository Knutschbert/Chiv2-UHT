#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=FABRIKChainLink -FallbackName=FABRIKChainLink
#include "RigUnit_FABRIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FABRIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFABRIKChainLink> Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectorIndex;
    
    CONTROLRIG_API FRigUnit_FABRIK_WorkData();
};

