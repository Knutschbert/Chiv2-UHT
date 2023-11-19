#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSpawnSectionTemplate -FallbackName=MovieSceneSpawnSectionTemplate
#include "ControlRigBindingTemplate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigBindingTemplate : public FMovieSceneSpawnSectionTemplate {
    GENERATED_BODY()
public:
    FControlRigBindingTemplate();
};

