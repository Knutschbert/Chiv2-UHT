#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NameGenerator.generated.h"

UCLASS(Blueprintable, Config=Game)
class TBL_API UNameGenerator : public UObject {
    GENERATED_BODY()
public:
    UNameGenerator();
};

