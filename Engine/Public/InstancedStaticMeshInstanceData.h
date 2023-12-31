#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
#include "InstancedStaticMeshInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FInstancedStaticMeshInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix Transform;
    
    ENGINE_API FInstancedStaticMeshInstanceData();
};

