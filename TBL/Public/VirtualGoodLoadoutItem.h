#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "VirtualGood.h"
#include "VirtualGoodLoadoutItem.generated.h"

UCLASS(Blueprintable)
class TBL_API UVirtualGoodLoadoutItem : public UVirtualGood {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Loadout;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath Item;
    
    UVirtualGoodLoadoutItem();
};

