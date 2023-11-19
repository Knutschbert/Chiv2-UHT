#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MapModifierProperty.generated.h"

UCLASS(Abstract, Blueprintable)
class UMapModifierProperty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommandlineStr;
    
    UMapModifierProperty();
    UFUNCTION(BlueprintCallable)
    void SetNameAndDescription(FText inName, FText inDescription);
    
};

