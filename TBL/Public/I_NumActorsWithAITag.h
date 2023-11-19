#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_InputAxis.h"
#include "I_NumActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_NumActorsWithAITag : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UI_NumActorsWithAITag();
};

