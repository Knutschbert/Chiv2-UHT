#pragma once
#include "CoreMinimal.h"
#include "OnForceFeedbackFinishedDelegate.generated.h"

class UForceFeedbackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceFeedbackFinished, UForceFeedbackComponent*, ForceFeedbackComponent);

