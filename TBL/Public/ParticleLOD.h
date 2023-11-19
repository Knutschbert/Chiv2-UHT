#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ParticleLOD.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, Config=DeviceProfiles)
class TBL_API AParticleLOD : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CascadeEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cull;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaScale;
    
    AParticleLOD();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetCascadeTemplate();
    
};

