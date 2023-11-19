#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TBLBPCheatManager.generated.h"

class ATBLCharacter;
class ATBLPlayerController;

UCLASS(Abstract, Blueprintable)
class UTBLBPCheatManager : public UObject {
    GENERATED_BODY()
public:
    UTBLBPCheatManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLPlayerController* GetOwnerPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATBLCharacter* GetOwnerCharacter();
    
};

