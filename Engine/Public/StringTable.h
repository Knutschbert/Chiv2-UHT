#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StringTable.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UStringTable : public UObject {
    GENERATED_BODY()
public:
    UStringTable();
};

