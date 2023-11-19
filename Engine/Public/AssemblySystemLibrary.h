#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlueprintFunctionLibrary.h"
#include "AssemblySystemLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UAssemblySystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAssemblySystemLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetTextPropertyByName(UObject* Object, FName PropertyName, const FText Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetStructurePropertyByName(UObject* Object, FName PropertyName, const FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetStringPropertyByName(UObject* Object, FName PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetObjectPropertyByNameNonPure(UObject* Object, FName PropertyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetNamePropertyByName(UObject* Object, FName PropertyName, const FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);
    
};

