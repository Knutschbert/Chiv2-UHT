#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "TwAkReverbVolume.generated.h"

class UAkLateReverbComponent;

UCLASS(Blueprintable)
class TWAUDIO_API ATwAkReverbVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverbComponent;
    
    ATwAkReverbVolume();
};

