#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EObjectivePointCategory.h"
#include "TeamScoringFormatDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTeamScoringFormatDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectivePointCategory::Type> ScoringType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedText;
    
    TBL_API FTeamScoringFormatDataTable();
};

