#pragma once
#include "CoreMinimal.h"
#include "TeamObjectiveStageTimeOverride.h"
#include "TeamObjectiveTimeModifier.generated.h"

USTRUCT(BlueprintType)
struct FTeamObjectiveTimeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllStagesOverrideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamObjectiveStageTimeOverride> StageTimeModifiers;
    
    TBL_API FTeamObjectiveTimeModifier();
};

