#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "RuntimeMeshMergeLODSettings.h"
#include "RuntimeMeshMergeSettings.generated.h"

UCLASS(Blueprintable)
class URuntimeMeshMergeSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeMeshMergeLODSettings> LODSettings;
    
    URuntimeMeshMergeSettings();
};

