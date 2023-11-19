#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Console -FallbackName=Console
#include "DebugInputCharDelegate.h"
#include "TBLConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTBLConsole : public UConsole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugInputChar DebugInputChar;
    
    UTBLConsole();
};

