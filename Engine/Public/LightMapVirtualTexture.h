#pragma once
#include "CoreMinimal.h"
#include "VirtualTexture.h"
#include "LightMapVirtualTexture.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ULightMapVirtualTexture : public UVirtualTexture {
    GENERATED_BODY()
public:
    ULightMapVirtualTexture();
};

