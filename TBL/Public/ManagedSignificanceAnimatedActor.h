#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "ManagedSignificanceAnimatedActor.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class TBL_API AManagedSignificanceAnimatedActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> ComponentClassesToManage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeComponentsOfChildClasses;
    
public:
    AManagedSignificanceAnimatedActor();
};

