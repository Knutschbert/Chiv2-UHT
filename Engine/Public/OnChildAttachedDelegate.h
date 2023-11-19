#pragma once
#include "CoreMinimal.h"
#include "OnChildAttachedDelegate.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChildAttached, USceneComponent*, Child);

