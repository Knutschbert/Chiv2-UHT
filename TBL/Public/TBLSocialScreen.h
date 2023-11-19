#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
#include "TBLScreenWidget.h"
#include "TBLSocialScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLSocialScreen : public UTBLScreenWidget {
    GENERATED_BODY()
public:
    UTBLSocialScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttemptedNavigationFailed(EUINavigation NavigationType);
    
};

