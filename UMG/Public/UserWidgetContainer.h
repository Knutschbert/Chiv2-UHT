#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UserWidgetContainer.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class UUserWidgetContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> MutableObjects;
    
    UUserWidgetContainer();
};

