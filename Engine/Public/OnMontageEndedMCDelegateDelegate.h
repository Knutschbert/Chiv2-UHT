#pragma once
#include "CoreMinimal.h"
#include "OnMontageEndedMCDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMontageEndedMCDelegate, UAnimMontage*, Montage, bool, bInterrupted);

