#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TBLOverviewScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLOverviewScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UTBLOverviewScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoadout(bool bReset);
    
};

