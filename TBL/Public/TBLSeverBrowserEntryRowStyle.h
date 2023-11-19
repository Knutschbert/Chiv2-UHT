#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TableRowStyle -FallbackName=TableRowStyle
#include "TBLSeverBrowserEntryRowStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTBLSeverBrowserEntryRowStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableRowStyle RowStyle;
    
    UTBLSeverBrowserEntryRowStyle();
};

