#pragma once
#include "CoreMinimal.h"
#include "ControlRigSignatureDelegate.generated.h"

class UControlRigComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlRigSignature, UControlRigComponent*, Component);

