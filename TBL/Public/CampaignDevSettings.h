#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "CampaignDevSettings.generated.h"

class UCampaignImpl;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UCampaignDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCampaignImpl>> HardcodedOwnedCampaigns;
    
    UCampaignDevSettings();
};

