#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "NavBlockingVolume.generated.h"

class UTBLNavModifierComponent;

UCLASS(Blueprintable)
class ANavBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLNavModifierComponent* NavModifier;
    
    ANavBlockingVolume();
};

