#pragma once
#include "CoreMinimal.h"
#include "Struct.h"
#include "Function.generated.h"

UCLASS(Blueprintable, Within=Class)
class UFunction : public UStruct {
    GENERATED_BODY()
public:
    UFunction();
};

