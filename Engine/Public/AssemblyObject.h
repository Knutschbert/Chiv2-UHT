#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssemblyObject.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAssemblyObject : public UObject {
    GENERATED_BODY()
public:
    UAssemblyObject();
};

