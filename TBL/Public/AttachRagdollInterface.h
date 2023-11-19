#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "AttachRagdollParams.h"
#include "DeathDamageTakenEvent.h"
#include "AttachRagdollInterface.generated.h"

class ATBLCharacter;

UINTERFACE(Blueprintable)
class UAttachRagdollInterface : public UInterface {
    GENERATED_BODY()
};

class IAttachRagdollInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRagdollDetach(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRagdollAttach(ATBLCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAttachRagdollParams(FAttachRagdollParams& AttachRagdollParams, ATBLCharacter* Character, const FDeathDamageTakenEvent& DamageEvent);
    
};

