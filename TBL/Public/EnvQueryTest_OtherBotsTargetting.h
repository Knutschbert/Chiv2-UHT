#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_OtherBotsTargetting.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_OtherBotsTargetting : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSameTeamAsQuerier;
    
    UEnvQueryTest_OtherBotsTargetting();
};

