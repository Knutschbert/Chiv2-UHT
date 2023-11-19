#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "UtilityAI_Action.h"
#include "A_ChargeSiegeEngine.generated.h"

class AAIController;
class ASiegeEngine;
class ATBLCharacter;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UA_ChargeSiegeEngine : public UUtilityAI_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATBLCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASiegeEngine> CurrentSiegeEngine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ChargeTimerHandle;
    
public:
    UA_ChargeSiegeEngine();
protected:
    UFUNCTION(BlueprintCallable)
    void TryCharge();
    
};

