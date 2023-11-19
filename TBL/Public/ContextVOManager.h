#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContextVoEntry.h"
#include "TimersArray.h"
#include "ContextVOManager.generated.h"

UCLASS(Blueprintable)
class UContextVOManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, FTimersArray> StageTimerHandles;
    
public:
    UContextVOManager();
    UFUNCTION(BlueprintCallable)
    void RemoveStage(UObject* Stage);
    
    UFUNCTION(BlueprintCallable)
    void AddStageContextVo(UObject* Stage, const TArray<FContextVoEntry> ContextVO);
    
};

