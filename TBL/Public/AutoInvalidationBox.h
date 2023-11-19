#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StaggeredUpdater -ObjectName=EStaggeredUpdateCategory -FallbackName=EStaggeredUpdateCategory
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=InvalidationBox -FallbackName=InvalidationBox
#include "AutoInvalidationBox.generated.h"

UCLASS(Blueprintable)
class UAutoInvalidationBox : public UInvalidationBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaggeredUpdateCategory UpdateCategory;
    
    UAutoInvalidationBox();
};

