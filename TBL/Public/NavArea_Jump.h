#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_Jump.generated.h"

UCLASS(Blueprintable)
class UNavArea_Jump : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_Jump();
};

