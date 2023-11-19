#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "RewardTable.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URewardTable : public UDataTable {
    GENERATED_BODY()
public:
    URewardTable();
};

