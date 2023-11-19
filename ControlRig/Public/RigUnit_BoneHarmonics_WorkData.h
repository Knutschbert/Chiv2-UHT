#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_BoneHarmonics_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_BoneHarmonics_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaveTime;
    
    CONTROLRIG_API FRigUnit_BoneHarmonics_WorkData();
};

