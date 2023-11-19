#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraActor -FallbackName=CineCameraActor
#include "FirstPersonCineCameraActor.generated.h"

UCLASS(Blueprintable)
class AFirstPersonCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    AFirstPersonCineCameraActor();
};

