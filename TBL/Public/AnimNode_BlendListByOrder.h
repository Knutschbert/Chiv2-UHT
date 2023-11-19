#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_BlendListBase -FallbackName=AnimNode_BlendListBase
#include "AnimNode_BlendListByOrder.generated.h"

USTRUCT(BlueprintType)
struct TBL_API FAnimNode_BlendListByOrder : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> NodeActiveState;
    
    FAnimNode_BlendListByOrder();
};

