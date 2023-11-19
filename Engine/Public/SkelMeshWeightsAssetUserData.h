#pragma once
#include "CoreMinimal.h"
#include "AssetUserData.h"
#include "LODSkelMeshSkinWeights.h"
#include "SkelMeshWeightsAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USkelMeshWeightsAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLODSkelMeshSkinWeights> AlternateSkinWeights;
    
    USkelMeshWeightsAssetUserData();
};

