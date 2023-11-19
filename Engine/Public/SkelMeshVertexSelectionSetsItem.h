#pragma once
#include "CoreMinimal.h"
#include "SkelMeshVertexSelectionSetsItem.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshVertexSelectionSetsItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sets;
    
    ENGINE_API FSkelMeshVertexSelectionSetsItem();
};

