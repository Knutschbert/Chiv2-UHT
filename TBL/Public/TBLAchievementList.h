#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TBLAchievementList.generated.h"

class UTBLAchievementTask;

UCLASS(Abstract, Blueprintable)
class UTBLAchievementList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UTBLAchievementTask*> Achievements;
    
    UTBLAchievementList();
};

