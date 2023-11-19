#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETravelType -FallbackName=ETravelType
#include "OnClientPreTravelDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClientPreTravel, const FString&, PendingURL, TEnumAsByte<ETravelType>, TravelType, bool, bIsSeamlessTravel);

