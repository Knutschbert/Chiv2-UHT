#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSubTrack -FallbackName=MovieSceneSubTrack
#include "MovieSceneControlRigTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UMovieSceneControlRigTrack();
};

