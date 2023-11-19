#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TBLAutoNavLink.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATBLAutoNavLink : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> FoundLinkPoints;
    
public:
    ATBLAutoNavLink();
};

