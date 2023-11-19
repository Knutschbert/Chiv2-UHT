#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "ETBLLinkBehavior.h"
#include "TBLNavLink.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATBLNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETBLLinkBehavior::Type> LinkBehaviorLeftToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETBLLinkBehavior::Type> LinkBehaviorRightToLeft;
    
    ATBLNavLink();
};

