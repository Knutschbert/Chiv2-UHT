#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_Constricted.generated.h"

UCLASS(Blueprintable)
class TBL_API UNavArea_Constricted : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_Constricted();
};

