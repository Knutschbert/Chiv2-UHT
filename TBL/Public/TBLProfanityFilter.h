#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TBLProfanityFilter.generated.h"

UCLASS(Blueprintable)
class UTBLProfanityFilter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLProfanityFilter();
    UFUNCTION(BlueprintCallable)
    static FString Apply(const FString& Input);
    
};

