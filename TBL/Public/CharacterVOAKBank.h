#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EAudioPersonalityType.h"
#include "CharacterVOAKBank.generated.h"

class UAkAudioBank;

UCLASS(Blueprintable)
class TBL_API UCharacterVOAKBank : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* AudioBank;
    
    UCharacterVOAKBank();
};

