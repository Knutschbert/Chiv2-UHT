#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "VideoPlayerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UVideoPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UVideoPlayerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserLoginDowngraded();
    
};

