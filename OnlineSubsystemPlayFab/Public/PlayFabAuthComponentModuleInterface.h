#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PacketHandler -ObjectName=HandlerComponentFactory -FallbackName=HandlerComponentFactory
#include "PlayFabAuthComponentModuleInterface.generated.h"

UCLASS(Blueprintable)
class UPlayFabAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    UPlayFabAuthComponentModuleInterface();
};

