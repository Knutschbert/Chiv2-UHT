#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraColorParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraColorParameterTrack();
};

