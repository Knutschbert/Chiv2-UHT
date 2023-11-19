#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponentInstanceData -FallbackName=ActorComponentInstanceData
#include "ControlRigComponentInstanceData.generated.h"

class UControlRig;

USTRUCT(BlueprintType)
struct FControlRigComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRig* AnimControlRig;
    
    CONTROLRIG_API FControlRigComponentInstanceData();
};

