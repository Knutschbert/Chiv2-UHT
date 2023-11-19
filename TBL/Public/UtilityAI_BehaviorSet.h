#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "UtilityAI_BehaviorSet.generated.h"

class UUtilityAI_Behavior;

UCLASS(Blueprintable, MinimalAPI)
class UUtilityAI_BehaviorSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUtilityAI_Behavior>> Behaviors;
    
    UUtilityAI_BehaviorSet();
};

