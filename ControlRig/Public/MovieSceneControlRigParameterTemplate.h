#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "MovieSceneControlRigParameterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    CONTROLRIG_API FMovieSceneControlRigParameterTemplate();
};

