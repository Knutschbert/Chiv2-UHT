#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "OnGenerateRowSessionResultDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnGenerateRowSessionResult, FBlueprintSessionResult, Item);

