#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "TBLAchievementSettings.generated.h"

class UTBLAchievementList;
class UTBLAchievementWorker;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UTBLAchievementSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTBLAchievementWorker>> AchievementWorkers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugAchievementCountCap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTBLAchievementList>> AchievementLists;
    
    UTBLAchievementSettings();
};

