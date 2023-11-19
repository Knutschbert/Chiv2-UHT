#pragma once
#include "CoreMinimal.h"
#include "SkelMeshSkinWeights.h"
#include "LODSkelMeshSkinWeights.generated.h"

USTRUCT(BlueprintType)
struct FLODSkelMeshSkinWeights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshSkinWeights> VertSetWeights;
    
    ENGINE_API FLODSkelMeshSkinWeights();
};

