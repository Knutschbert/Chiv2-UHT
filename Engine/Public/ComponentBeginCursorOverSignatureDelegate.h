#pragma once
#include "CoreMinimal.h"
#include "ComponentBeginCursorOverSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FComponentBeginCursorOverSignature, UPrimitiveComponent*, TouchedComponent);

