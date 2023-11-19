#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "OnRefreshServerCompleteDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRefreshServerComplete, FBlueprintSessionResult, SessionResult, UUserWidget*, ServerEntryWidget);

