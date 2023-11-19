#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "UtilityAI_InputAxis.h"
#include "I_AreMoreLoadingBotsNeeded.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UI_AreMoreLoadingBotsNeeded : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUtilityAI_Behavior>> LoadingBehaviourClasses;
    
public:
    UI_AreMoreLoadingBotsNeeded();
};

