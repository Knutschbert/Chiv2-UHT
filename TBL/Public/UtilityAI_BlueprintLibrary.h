#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EUtilityAI_TargetType.h"
#include "UtilityAI_Context.h"
#include "UtilityAI_BlueprintLibrary.generated.h"

class AActor;
class ATBLCharacter;
class UObject;

UCLASS(Blueprintable)
class UUtilityAI_BlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilityAI_BlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUtilityAI_TargetType GetTargetType(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetTargetObject(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetLocation(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetTargetActor(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATBLCharacter* GetOwnerCharacter(const FUtilityAI_Context& C);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMoveTargetLocation(const FUtilityAI_Context& C);
    
};

