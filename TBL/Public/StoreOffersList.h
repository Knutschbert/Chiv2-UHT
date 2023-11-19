#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "StoreOffersList.generated.h"

class UTBLScrollBarStyleDataAsset;

UCLASS(Blueprintable)
class UStoreOffersList : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTBLScrollBarStyleDataAsset* ScrollBarStyle;
    
    UStoreOffersList();
};

