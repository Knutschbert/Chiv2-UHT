#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "ProgressBarCostsOverlay.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UProgressBarCostsOverlay : public UProgressBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat OverlayPercentDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush OverlayFillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DamageFillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageLingerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRemovedPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DamageFillColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverlayFillColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateColor DamageFillColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateColor OverlayFillColorAndOpacityDelegate;
    
    UProgressBarCostsOverlay();
    UFUNCTION(BlueprintCallable)
    void SetOverlayPercent(float InOverlayPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayFillColorAndOpacity(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageFillColorAndOpacity(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetFillDynamicMaterial();
    
};

