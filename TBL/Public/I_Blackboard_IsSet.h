#pragma once
#include "CoreMinimal.h"
#include "UtilityAI_InputAxis.h"
#include "I_Blackboard_IsSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UI_Blackboard_IsSet : public UUtilityAI_InputAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName;
    
    UI_Blackboard_IsSet();
};

