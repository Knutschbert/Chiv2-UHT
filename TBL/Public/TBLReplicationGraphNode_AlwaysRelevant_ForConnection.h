#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReplicationGraph -ObjectName=ReplicationGraphNode -FallbackName=ReplicationGraphNode
#include "TBLReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UTBLReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GameplayDebugger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastPawn;
    
public:
    UTBLReplicationGraphNode_AlwaysRelevant_ForConnection();
};

