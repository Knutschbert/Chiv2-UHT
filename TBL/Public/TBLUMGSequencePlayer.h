#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UMGSequencePlayer -FallbackName=UMGSequencePlayer
#include "TBLUMGSequencePlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTBLUMGSequencePlayer : public UUMGSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingAdvancedAnimation;
    
public:
    UTBLUMGSequencePlayer();
};

