#pragma once
#include "CoreMinimal.h"
#include "BeamModifierOptions.generated.h"

USTRUCT(BlueprintType)
struct FBeamModifierOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bModify: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLock: 1;
    
    ENGINE_API FBeamModifierOptions();
};

