#pragma once
#include "CoreMinimal.h"
#include "PropertyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPropertyChanged, TFieldPath<FProperty>, Property);

