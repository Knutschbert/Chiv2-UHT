#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_TimesTargettedBy.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_TimesTargettedBy : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TargettedBy;
    
    UEnvQueryTest_TimesTargettedBy();
};

