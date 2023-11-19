#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "TBLLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ATBLLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ATBLLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarmupComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStateChanged(FName NewState);
    
    UFUNCTION(BlueprintCallable)
    void GameStateSetup();
    
};

