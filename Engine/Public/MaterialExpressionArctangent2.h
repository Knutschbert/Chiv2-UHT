#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionArctangent2.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionArctangent2 : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput X;
    
    UMaterialExpressionArctangent2();
};

