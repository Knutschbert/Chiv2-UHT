#pragma once
#include "CoreMinimal.h"
#include "Blueprint.h"
#include "AssemblyBlueprint.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAssemblyBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMacro;
    
    UAssemblyBlueprint();
    UFUNCTION(BlueprintCallable)
    void OnBlueprintChanged(UBlueprint* Blueprint);
    
};

