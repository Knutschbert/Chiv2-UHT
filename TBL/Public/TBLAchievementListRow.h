#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "TBLAchievementListRow.generated.h"

class UTBLAchievementTask;

USTRUCT(BlueprintType)
struct FTBLAchievementListRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTBLAchievementTask* SingleTask;
    
    TBL_API FTBLAchievementListRow();
};

