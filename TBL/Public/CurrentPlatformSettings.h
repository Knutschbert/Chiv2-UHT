#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "CurrentPlatformSettings.generated.h"

class AEmitter;
class UParticleSystemComponent;

UCLASS(Blueprintable, Config=DeviceProfiles)
class TBL_API UCurrentPlatformSettings : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlatformOverrides;
    
    UCurrentPlatformSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SetStreamingPoolSize(const FString& LevelName, bool bResetThePool);
    
    UFUNCTION(BlueprintCallable)
    void SetCascadeComponentParameters(UParticleSystemComponent* CascadeComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetCascadeActorParameters(AEmitter* CascadeEmitter);
    
};

