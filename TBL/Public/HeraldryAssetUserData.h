#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CanvasUVTri -FallbackName=CanvasUVTri
#include "HeraldryAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHeraldryAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCanvasUVTri> Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMeshBuffers;
    
    UHeraldryAssetUserData();
};

