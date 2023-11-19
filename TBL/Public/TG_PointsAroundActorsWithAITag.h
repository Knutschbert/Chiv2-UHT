#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TG_PointsOnGrid.h"
#include "TG_PointsAroundActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsAroundActorsWithAITag : public UTG_PointsOnGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UTG_PointsAroundActorsWithAITag();
};

