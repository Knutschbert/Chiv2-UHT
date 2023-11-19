#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "PendingLevelPlayerController.generated.h"

UCLASS(Blueprintable)
class APendingLevelPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APendingLevelPlayerController();
};

