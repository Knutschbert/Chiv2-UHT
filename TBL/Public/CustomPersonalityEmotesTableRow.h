#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EAudioPersonalityType.h"
#include "EAudioVOType.h"
#include "PersonalityEmoteTableRow.h"
#include "CustomPersonalityEmotesTableRow.generated.h"

USTRUCT(BlueprintType)
struct FCustomPersonalityEmotesTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioPersonalityType::Type> PersonalityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAudioVOType::Type> AudioEmoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AudioEmoteVOString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonalityEmoteTableRow PersonalityEmote;
    
    TBL_API FCustomPersonalityEmotesTableRow();
};

