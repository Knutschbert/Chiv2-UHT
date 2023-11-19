#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "StagedLevelBlueprintInterface.generated.h"

class IStageInterface;
class UStageInterface;

UINTERFACE(Blueprintable)
class UStagedLevelBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class IStagedLevelBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TScriptInterface<IStageInterface> GetFirstStage();
    
};

