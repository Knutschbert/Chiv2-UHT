#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshMergeLODSettings.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeMeshMergeLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RemoveMorphTargets;
    
    ENGINE_API FRuntimeMeshMergeLODSettings();
};

