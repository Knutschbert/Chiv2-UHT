#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "QuestDevSettings.generated.h"

class UAchievementQuest;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UQuestDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAchievementQuest>> HardcodedDailyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAchievementQuest>> HardcodedWeeklyQuests;
    
    UQuestDevSettings();
};

