#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionLightmassReplace.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionLightmassReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Realtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Lightmass;
    
    UMaterialExpressionLightmassReplace();
};

