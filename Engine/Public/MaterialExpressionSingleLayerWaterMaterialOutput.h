#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCustomOutput.h"
#include "MaterialExpressionSingleLayerWaterMaterialOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ScatteringCoefficients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput AbsorptionCoefficients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput PhaseG;
    
    UMaterialExpressionSingleLayerWaterMaterialOutput();
};

