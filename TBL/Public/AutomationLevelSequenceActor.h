#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "AutomationSequenceEvent.h"
#include "AutomationLevelSequenceActor.generated.h"

UCLASS(Blueprintable, Config=Game)
class AAutomationLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AAutomationLevelSequenceActor();
    UFUNCTION(BlueprintCallable)
    void OnStop();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceEvent(FAutomationSequenceEvent SequenceEvent);
    
};

