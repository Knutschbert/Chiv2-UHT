#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "TG_PointsOnGrid.h"
#include "TG_PointsBesideActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsBesideActorsWithAITag : public UTG_PointsOnGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorRadiusBoost;
    
    UTG_PointsBesideActorsWithAITag();
};

