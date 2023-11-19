#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ControlChannel -FallbackName=ControlChannel
#include "EOSControlChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSControlChannel : public UControlChannel {
    GENERATED_BODY()
public:
    UEOSControlChannel();
};

