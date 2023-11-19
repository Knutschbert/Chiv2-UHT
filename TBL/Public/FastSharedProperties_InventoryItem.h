#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RepMovement -FallbackName=RepMovement
#include "FastSharedProperties_InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FFastSharedProperties_InventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepMovement ReplicatedMovement;
    
    TBL_API FFastSharedProperties_InventoryItem();
};

