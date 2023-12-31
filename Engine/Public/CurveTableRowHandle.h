#pragma once
#include "CoreMinimal.h"
#include "CurveTableRowHandle.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct ENGINE_API FCurveTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FCurveTableRowHandle();
};

