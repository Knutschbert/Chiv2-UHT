#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TBLEditorFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class TBL_API UTBLEditorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLEditorFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static bool MergeDisplayComponents(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool MergeActorDisplayComponents(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool CompileBlueprint(TArray<UObject*> ObjectList);
    
};

