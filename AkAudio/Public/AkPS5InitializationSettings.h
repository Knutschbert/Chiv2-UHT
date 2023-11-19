#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPS5AdvancedInitializationSettings.h"
#include "AkPS5InitializationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class AKAUDIO_API UAkPS5InitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkPS5AdvancedInitializationSettings AdvancedSettings;
    
    UAkPS5InitializationSettings();
};
