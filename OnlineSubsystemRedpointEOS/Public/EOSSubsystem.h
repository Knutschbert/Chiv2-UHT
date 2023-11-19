#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EOSWidgetDelegateDelegate.h"
#include "EOSSubsystem.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSWidgetDelegate OnAddWidgetToViewport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSWidgetDelegate OnRemoveWidgetFromViewport;
    
    UEOSSubsystem();
};

