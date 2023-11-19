#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "PlayerTask.generated.h"

class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UPlayerTask : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLPlayerController* PlayerController;
    
    UPlayerTask();
};

