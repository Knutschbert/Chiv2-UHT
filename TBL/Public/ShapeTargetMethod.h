#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AbilityTargetMethod.h"
#include "ShapeTargetMethod.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UShapeTargetMethod : public UAbilityTargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> TargetObjectTypes;
    
    UShapeTargetMethod();
};

