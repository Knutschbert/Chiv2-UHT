#pragma once
#include "CoreMinimal.h"
#include "SkelMeshSkinWeightInfo.h"
#include "BlendedLODSkelMeshSkinWeights.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlendedLODSkelMeshSkinWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshSkinWeightInfo> Weights;
    
    FBlendedLODSkelMeshSkinWeights();
};

