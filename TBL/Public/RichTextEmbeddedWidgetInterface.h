#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RichTextEmbedInfo.h"
#include "RichTextEmbeddedWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class URichTextEmbeddedWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IRichTextEmbeddedWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedEmbedInfo(const FRichTextEmbedInfo& Info);
    
};

