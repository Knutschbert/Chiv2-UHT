#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CloudStorageBase -FallbackName=CloudStorageBase
#include "TBLCloudStorage.generated.h"

UCLASS(Blueprintable, NonTransient)
class TBL_API UTBLCloudStorage : public UCloudStorageBase {
    GENERATED_BODY()
public:
    UTBLCloudStorage();
};

