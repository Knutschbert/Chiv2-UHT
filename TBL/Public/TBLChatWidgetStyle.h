#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "TBLChatStyle.h"
#include "TBLChatWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLChatWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTBLChatStyle ChatStyle;
    
    UTBLChatWidgetStyle();
};

