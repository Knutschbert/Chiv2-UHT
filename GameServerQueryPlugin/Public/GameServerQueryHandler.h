#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameServerQueryHandler.generated.h"

UCLASS(Abstract, Blueprintable)
class UGameServerQueryHandler : public UObject {
    GENERATED_BODY()
public:
    UGameServerQueryHandler();
};

