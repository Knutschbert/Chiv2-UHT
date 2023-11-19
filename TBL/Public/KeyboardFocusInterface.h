#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "KeyboardFocusInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class UKeyboardFocusInterface : public UInterface {
    GENERATED_BODY()
};

class IKeyboardFocusInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* K2_GetFocusWidget();
    
};

