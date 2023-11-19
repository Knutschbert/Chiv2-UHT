#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnalyticsCore -ObjectName=AnalyticsEvent -FallbackName=AnalyticsEvent
#include "GameAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FGameAnalyticsEvent : public FAnalyticsEvent {
    GENERATED_BODY()
public:
    TBL_API FGameAnalyticsEvent();
};

