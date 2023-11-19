#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptionsScreenCategory.generated.h"

class UOptionsScreenSubCategory;

UCLASS(Blueprintable)
class UOptionsScreenCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptionsScreenSubCategory*> Subcategories;
    
    UOptionsScreenCategory();
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAll();
    
};

