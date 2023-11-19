#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_ForceDefault.generated.h"

UCLASS(Blueprintable)
class UNavArea_ForceDefault : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_ForceDefault();
};

