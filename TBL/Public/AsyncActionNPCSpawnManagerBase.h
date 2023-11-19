#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AsyncActionNPCSpawnManagerBase.generated.h"

class AActor;
class ANPCSpawnManagerBase;

UCLASS(Abstract, Blueprintable)
class TBL_API UAsyncActionNPCSpawnManagerBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ANPCSpawnManagerBase> OwningNPCSpawnManager;
    
public:
    UAsyncActionNPCSpawnManagerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNPCSpawnManagerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void BindToNPCSpawnManager(ANPCSpawnManagerBase* NPCSpawnManager);
    
};

