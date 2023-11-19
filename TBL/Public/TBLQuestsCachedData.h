#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "QuestCacheData.h"
#include "TBLQuestsCachedData.generated.h"

class IQuest;
class UQuest;
class UQuestPool;

UCLASS(Blueprintable)
class UTBLQuestsCachedData : public UObject {
    GENERATED_BODY()
public:
    UTBLQuestsCachedData();
    UFUNCTION(BlueprintCallable)
    void InitFromActiveQuests(UQuestPool* InQuestPool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSameData(FQuestCacheData CachedData, TScriptInterface<IQuest> Quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCachedData(TScriptInterface<IQuest> InQuest, FQuestCacheData& OutData) const;
    
};

