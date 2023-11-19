#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CharacterInfo.h"
#include "EFaction.h"
#include "SpawnScoreData.h"
#include "SpawnScoringConfig.h"
#include "SpawnerScoreMethod.generated.h"

UCLASS(Blueprintable)
class USpawnerScoreMethod : public UObject {
    GENERATED_BODY()
public:
    USpawnerScoreMethod();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpawnerScore(TMap<EFaction, FSpawnScoreData>& ScoreResult, const FVector& SpawnLocation, const TArray<FCharacterInfo>& CharacterList, const FSpawnScoringConfig& Config) const;
    
};

