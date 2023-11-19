#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettings.h"
#include "MeshSimplificationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class UMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshReductionModuleName;
    
    UMeshSimplificationSettings();
};

