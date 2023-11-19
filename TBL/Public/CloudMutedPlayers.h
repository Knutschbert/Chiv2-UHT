#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MutedPlayerEntry.h"
#include "CloudMutedPlayers.generated.h"

UCLASS(Blueprintable, Config=UCloudMutedPlayers)
class UCloudMutedPlayers : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 UserChangelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMutedPlayerEntry> Mutes;
    
    UCloudMutedPlayers();
};

