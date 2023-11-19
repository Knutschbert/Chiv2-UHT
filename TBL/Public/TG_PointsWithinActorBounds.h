#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_TargetGenerator.h"
#include "TG_PointsWithinActorBounds.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_PointsWithinActorBounds : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationDensity;
    
    UTG_PointsWithinActorBounds();
};

