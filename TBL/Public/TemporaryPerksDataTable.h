#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ETemporaryPerkType.h"
#include "TemporaryPerksDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTemporaryPerksDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemporaryPerkType TemporaryPerkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TBL_API FTemporaryPerksDataTable();
};

