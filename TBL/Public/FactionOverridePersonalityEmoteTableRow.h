#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "FactionOverridePersonalityEmoteEntry.h"
#include "PersonalityEmoteOverrideRule.h"
#include "FactionOverridePersonalityEmoteTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFactionOverridePersonalityEmoteTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonalityEmoteOverrideRule> Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionOverridePersonalityEmoteEntry> FactionOverridePersonalityEmotes;
    
    TBL_API FFactionOverridePersonalityEmoteTableRow();
};

