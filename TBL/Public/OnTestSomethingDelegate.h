#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "OnTestSomethingDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnTestSomething, FBlueprintSessionResult, Item);

