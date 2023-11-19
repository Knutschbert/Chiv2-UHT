#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RandomCarryableSpawnSpec.h"
#include "Templates/SubclassOf.h"
#include "RandomCarryableSpawnLoadout.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class URandomCarryableSpawnLoadout : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomCarryableSpawnSpec> CarryableSpecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TotalPercent;
    
    URandomCarryableSpawnLoadout();
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AInventoryItem> GetRandomCarryable();
    
};

