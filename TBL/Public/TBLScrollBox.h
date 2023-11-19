#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "TBLScrollBox.generated.h"

class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UTBLScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
public:
    UTBLScrollBox();
};

