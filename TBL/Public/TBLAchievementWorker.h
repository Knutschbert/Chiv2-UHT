#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RemoteTaskList.h"
#include "TBLAchievementWorker.generated.h"

class ATBLPlayerController;
class UTBLAchievementTask;

UCLASS(Abstract, Blueprintable)
class UTBLAchievementWorker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTBLAchievementTask*> LocalTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATBLPlayerController*, FRemoteTaskList> RemoteTasks;
    
public:
    UTBLAchievementWorker();
};

