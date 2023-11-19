#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "TBLFrontendLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class TBL_API ATBLFrontendLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ATBLFrontendLevelScriptActor();
private:
    UFUNCTION(BlueprintCallable)
    void FireLevelEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void CreateLevelEvent(FName EventName);
    
};

