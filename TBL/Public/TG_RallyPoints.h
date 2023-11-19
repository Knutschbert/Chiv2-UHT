#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_TargetGenerator.h"
#include "TG_RallyPoints.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_RallyPoints : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UTG_RallyPoints();
};

