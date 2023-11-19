#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterTypeToCharacterAsset.h"
#include "EAudioClassType.h"
#include "PlayerClassData.generated.h"

UCLASS(Blueprintable)
class UPlayerClassData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterTypeToCharacterAsset> CharacterTypeToCharacterAssetMap;
    
    UPlayerClassData();
    UFUNCTION(BlueprintCallable)
    static int32 GetCustomizationClassIndexFromClassEnum(TEnumAsByte<EAudioClassType::Type> ClassType);
    
};

