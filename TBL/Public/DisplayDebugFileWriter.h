#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Canvas -FallbackName=Canvas
#include "DisplayDebugFileWriter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UDisplayDebugFileWriter : public UCanvas {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastY;
    
public:
    UDisplayDebugFileWriter();
};

