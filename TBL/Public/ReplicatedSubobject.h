#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplicatedSubobject.generated.h"

UCLASS(Abstract, Blueprintable)
class TBL_API UReplicatedSubobject : public UObject {
    GENERATED_BODY()
public:
    UReplicatedSubobject();
};

