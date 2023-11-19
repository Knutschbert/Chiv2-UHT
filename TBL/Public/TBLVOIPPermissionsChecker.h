#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TBLVOIPPermissionsChecker.generated.h"

UCLASS(Blueprintable)
class TBL_API UTBLVOIPPermissionsChecker : public UObject {
    GENERATED_BODY()
public:
    UTBLVOIPPermissionsChecker();
private:
    UFUNCTION(BlueprintCallable)
    void QueryVoiceChatPermissions();
    
};

