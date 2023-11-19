#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UtilityAI_InputAxis.h"
#include "I_NumUnloadedLoadableActorsWithAITag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_NumUnloadedLoadableActorsWithAITag : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UI_NumUnloadedLoadableActorsWithAITag();
};

