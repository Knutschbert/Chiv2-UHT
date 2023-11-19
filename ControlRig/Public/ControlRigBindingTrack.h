#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSpawnTrack -FallbackName=MovieSceneSpawnTrack
#include "ControlRigBindingTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UControlRigBindingTrack : public UMovieSceneSpawnTrack {
    GENERATED_BODY()
public:
    UControlRigBindingTrack();
};

