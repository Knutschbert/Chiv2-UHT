#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ModifyBoneTransforms_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ModifyBoneTransforms_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CachedBoneIndices;
    
    CONTROLRIG_API FRigUnit_ModifyBoneTransforms_WorkData();
};

