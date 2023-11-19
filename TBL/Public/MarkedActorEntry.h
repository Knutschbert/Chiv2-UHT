#pragma once
#include "CoreMinimal.h"
#include "MarkedActorEntry.generated.h"

class AActor;
class UHudMarkerDisplayComponent;
class UPrimitiveComponent;
class UWidgetVisibilityComponent;

USTRUCT(BlueprintType)
struct FMarkedActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> MarkedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CollsionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHudMarkerDisplayComponent> HUDMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetVisibilityComponent> VisibilityComponent;
    
    TBL_API FMarkedActorEntry();
};

