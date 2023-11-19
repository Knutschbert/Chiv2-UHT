#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameProgressInterface.generated.h"

class ATBLTeam;

UINTERFACE(Blueprintable)
class UGameProgressInterface : public UInterface {
    GENERATED_BODY()
};

class IGameProgressInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastTeamUpdated(ATBLTeam* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastSetActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BroadcastProgressUpdated(float Progress, ATBLTeam* Team);
    
};

