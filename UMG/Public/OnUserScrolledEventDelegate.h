#pragma once
#include "CoreMinimal.h"
#include "OnUserScrolledEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserScrolledEvent, float, CurrentOffset);

