#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "TextureAtlasEntryInfo.h"
#include "TextureAtlasInfo.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UTextureAtlasInfo : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureAtlasEntryInfo> Data;
    
public:
    UTextureAtlasInfo();
};

