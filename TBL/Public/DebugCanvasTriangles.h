#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CanvasUVTri -FallbackName=CanvasUVTri
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DebugCanvasTriangles.generated.h"

UCLASS(Blueprintable)
class UDebugCanvasTriangles : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCanvasUVTri> DebugTriangles;
    
    UDebugCanvasTriangles();
};

