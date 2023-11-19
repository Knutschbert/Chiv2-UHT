#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "DebuggingUtilsLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UDebuggingUtilsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebuggingUtilsLibrary();
    UFUNCTION(BlueprintCallable)
    static void DebugCounterSet(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void DebugCounterClearAll();
    
    UFUNCTION(BlueprintCallable)
    static void DebugCounterAdd(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void DebugBreakpoint3(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static void DebugBreakpoint2(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static void DebugBreakpoint1(UObject* InObject);
    
};

