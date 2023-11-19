#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TBLButtonAnimation_deprecated.h"
#include "TBLMaterialButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UTBLMaterialButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTBLMaterialButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStartingInterpProgress(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayButtonAnimation(FTBLButtonAnimation_deprecated InAnimation, bool ReverseAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMaterial(FName MaterialParamName, float InProgress);
    
};

