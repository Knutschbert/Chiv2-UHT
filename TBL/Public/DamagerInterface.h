#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DamagerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UDamagerInterface : public UInterface {
    GENERATED_BODY()
};

class IDamagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDealTeamDamageAgainst(AActor* TargetTeammate);
    
};

