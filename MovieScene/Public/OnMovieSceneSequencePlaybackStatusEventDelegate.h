#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.h"
#include "OnMovieSceneSequencePlaybackStatusEventDelegate.generated.h"

class UMovieSceneSequencePlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovieSceneSequencePlaybackStatusEvent, UMovieSceneSequencePlayer*, Sequence, TEnumAsByte<EMovieScenePlayerStatus::Type>, Status);

