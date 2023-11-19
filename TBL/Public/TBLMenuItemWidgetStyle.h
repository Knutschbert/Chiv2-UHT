#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "TBLMenuItemStyle.h"
#include "TBLMenuItemWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLMenuItemWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTBLMenuItemStyle MenuItemStyle;
    
    UTBLMenuItemWidgetStyle();
};

