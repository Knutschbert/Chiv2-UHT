#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "AbilityCategoryDescription.h"
#include "AbilityDescTableRow.generated.h"

USTRUCT(BlueprintType)
struct FAbilityDescTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityCategoryDescription AbilityDescription;
    
    TBL_API FAbilityDescTableRow();
};

