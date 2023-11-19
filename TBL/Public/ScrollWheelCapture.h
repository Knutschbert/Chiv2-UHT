#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnMouseWheelScrolledDelegate.h"
#include "ScrollWheelCapture.generated.h"

UCLASS(Blueprintable)
class TBL_API UScrollWheelCapture : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseWheelScrolled OnMouseWheelScrolledEvent;
    
    UScrollWheelCapture();
};

