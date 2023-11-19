#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EXCloudWidgetBehavior.h"
#include "GameStreamingStateChangedDelegate.h"
#include "TBLXCloudManager.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class UTBLXCloudManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStreamingStateChanged OnGameStreamingStateChanged;
    
    UTBLXCloudManager();
    UFUNCTION(BlueprintCallable)
    void UnbindWidget(UWidget* Widget, EXCloudWidgetBehavior WidgetType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUIScalingFactor(float ScaleFactor, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMaxScalingPhysicalDimensions(const FIntPoint& MaxDimensions, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStreamingToDevice(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDeviceSmallEnoughToScaleBP(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BindWidget(UWidget* Widget, EXCloudWidgetBehavior WidgetType);
    
};

