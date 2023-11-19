#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssemblyInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAssemblyInstance : public UObject {
    GENERATED_BODY()
public:
    UAssemblyInstance();
};

