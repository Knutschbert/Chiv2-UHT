#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SizeBox -FallbackName=SizeBox
#include "EXCloudWidgetBehavior.h"
#include "XCloudSizeBox.generated.h"

UCLASS(Blueprintable)
class UXCloudSizeBox : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXCloudWidgetBehavior WidgetBehavior;
    
    UXCloudSizeBox();
};

