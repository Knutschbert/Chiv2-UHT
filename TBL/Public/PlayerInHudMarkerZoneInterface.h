#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PlayerInHudMarkerZoneInterface.generated.h"

UINTERFACE()
class UPlayerInHudMarkerZoneInterface : public UInterface {
    GENERATED_BODY()
};

class IPlayerInHudMarkerZoneInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool IsLocalPlayerInHudMarkerZone() PURE_VIRTUAL(IsLocalPlayerInHudMarkerZone, return false;);
    
};

