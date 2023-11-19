#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_TargetGenerator.h"
#include "TG_ActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTG_ActorsWithAITag : public UUtilityAI_TargetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UTG_ActorsWithAITag();
};

