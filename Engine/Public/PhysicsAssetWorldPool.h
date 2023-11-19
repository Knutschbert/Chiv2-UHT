#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "PhysicsAssetPool.h"
#include "PhysicsAssetWorldPool.generated.h"

class UPhysicsAsset;

UCLASS(Blueprintable)
class ENGINE_API UPhysicsAssetWorldPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicsAsset*, FPhysicsAssetPool> WorldPhysicsAssetPools;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumToPrepopulate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> PhysicsAssetsToPrepopulate;
    
    UPhysicsAssetWorldPool();
};

