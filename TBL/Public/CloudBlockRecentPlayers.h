#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlockPlayerEntry.h"
#include "RecentPlayerEntry.h"
#include "CloudBlockRecentPlayers.generated.h"

UCLASS(Blueprintable, Config=GameBlockRecentPlayers)
class UCloudBlockRecentPlayers : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 UserChangelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FBlockPlayerEntry> Blocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FRecentPlayerEntry> Recents;
    
    UCloudBlockRecentPlayers();
};

