#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_TargetGenerator.h"
#include "TG_DestinationVolume_WithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTG_DestinationVolume_WithAITag : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridDistance;
    
public:
    UTG_DestinationVolume_WithAITag();
};

