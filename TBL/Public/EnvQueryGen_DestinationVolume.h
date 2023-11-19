#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderIntValue -FallbackName=AIDataProviderIntValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator_ProjectedPoints -FallbackName=EnvQueryGenerator_ProjectedPoints
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "EnvQueryGen_DestinationVolume.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class TBL_API UEnvQueryGen_DestinationVolume : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue GridDistance;
    
    UEnvQueryGen_DestinationVolume();
};

