#pragma once
#include "CoreMinimal.h"
#include "TeamObjectiveStageTimeOverride.generated.h"

USTRUCT(BlueprintType)
struct FTeamObjectiveStageTimeOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideTime;
    
    TBL_API FTeamObjectiveStageTimeOverride();
};

