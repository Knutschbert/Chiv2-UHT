#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAnalyticsMenuScreen.h"
#include "AnalyticsUtilitiesLibrary.generated.h"

UCLASS(Blueprintable)
class TBL_API UAnalyticsUtilitiesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnalyticsUtilitiesLibrary();
    UFUNCTION(BlueprintCallable)
    static void NotifySocialScreenOpened();
    
    UFUNCTION(BlueprintCallable)
    static void AnalyticsEventOpenedMenuScreen(EAnalyticsMenuScreen Screen);
    
    UFUNCTION(BlueprintCallable)
    static void AnalyticsEventDeveloperMessageClickedUrl(const FString& AccountId, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void AnalyticsEventClosedMenuScreen(EAnalyticsMenuScreen Screen);
    
    UFUNCTION(BlueprintCallable)
    static void AnalyticsEventClickedOnCampaignProgress();
    
};

