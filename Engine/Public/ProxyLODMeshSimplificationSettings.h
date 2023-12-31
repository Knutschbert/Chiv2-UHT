#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "ProxyLODMeshSimplificationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProxyLODMeshReductionModuleName;
    
    UProxyLODMeshSimplificationSettings();
};

