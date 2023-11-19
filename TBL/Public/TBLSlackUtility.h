#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SlackMessage.h"
#include "TBLSlackUtility.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, MinimalAPI, Config=Game)
class UTBLSlackUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLSlackUtility();
    UFUNCTION(BlueprintCallable)
    static void SendSlackMessage(FSlackMessage Message);
    
};

