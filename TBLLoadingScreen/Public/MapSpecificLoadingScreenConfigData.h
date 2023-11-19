#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MapSpecificLoadingScreenConfigData.generated.h"

USTRUCT(BlueprintType)
struct FMapSpecificLoadingScreenConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Texture;
    
    TBLLOADINGSCREEN_API FMapSpecificLoadingScreenConfigData();
};

