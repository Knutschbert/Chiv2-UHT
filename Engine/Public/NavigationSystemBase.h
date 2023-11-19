#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationSystemBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig, Transient)
class ENGINE_API UNavigationSystemBase : public UObject {
    GENERATED_BODY()
public:
    UNavigationSystemBase();
};

