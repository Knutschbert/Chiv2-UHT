#pragma once
#include "CoreMinimal.h"
#include "ChannelMapInfo.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FChannelMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelIndex;
    
    FChannelMapInfo();
};

