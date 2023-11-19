#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PropertyBinding -FallbackName=PropertyBinding
#include "ChatLine.h"
#include "ChatLineBinding.generated.h"

UCLASS(Blueprintable)
class UChatLineBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UChatLineBinding();
    UFUNCTION(BlueprintCallable)
    FChatLine GetValue() const;
    
};

