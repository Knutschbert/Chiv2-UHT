#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ParticleLODManager.generated.h"

class AEmitter;

UCLASS(Blueprintable)
class TBL_API AParticleLODManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEmitter*> ParticleLODCascade;
    
    AParticleLODManager();
};

