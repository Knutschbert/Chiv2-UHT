#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialParameterCollectionInfo.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FMaterialParameterCollectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ParameterCollection;
    
    ENGINE_API FMaterialParameterCollectionInfo();
};

