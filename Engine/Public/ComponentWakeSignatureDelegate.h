#pragma once
#include "CoreMinimal.h"
#include "ComponentWakeSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FComponentWakeSignature, UPrimitiveComponent*, WakingComponent, FName, BoneName);

