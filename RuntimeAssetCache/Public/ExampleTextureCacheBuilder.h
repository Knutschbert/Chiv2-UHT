#pragma once
#include "CoreMinimal.h"
#include "RuntimeAssetCacheBuilder_ObjectBase.h"
#include "ExampleTextureCacheBuilder.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UExampleTextureCacheBuilder : public URuntimeAssetCacheBuilder_ObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UExampleTextureCacheBuilder();
};

