#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptionsScreenPropertyCurrentValueChangedDelegate.h"
#include "OptionsScreenProperty.generated.h"

UCLASS(Blueprintable)
class UOptionsScreenProperty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionsScreenPropertyCurrentValueChanged CurrentValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyOnlyImmediately;
    
    UOptionsScreenProperty();
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool IsDefaultValue();
    
    UFUNCTION(BlueprintCallable)
    void Apply();
    
};

