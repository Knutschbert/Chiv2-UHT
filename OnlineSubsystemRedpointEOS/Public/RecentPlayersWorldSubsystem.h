#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "RecentPlayersWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMREDPOINTEOS_API URecentPlayersWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    URecentPlayersWorldSubsystem();
};

