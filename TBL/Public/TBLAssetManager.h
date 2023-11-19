#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "TBLAssetManager.generated.h"

UCLASS(Blueprintable)
class TBL_API UTBLAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UTBLAssetManager();
};

