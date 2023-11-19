#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatusK2.generated.h"

UENUM(BlueprintType)
enum class EMovieScenePlayerStatusK2 : uint8 {
    Stopped,
    Playing,
    Recording,
    Scrubbing,
    Jumping,
    Stepping,
    Paused,
    MAX,
};

