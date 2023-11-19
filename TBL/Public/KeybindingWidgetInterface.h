#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeybindingWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class UKeybindingWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IKeybindingWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeybinding(const FKey& Key, float Height, FVector2D IconSize);
    
};

