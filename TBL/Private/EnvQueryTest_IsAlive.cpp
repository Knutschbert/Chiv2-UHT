#include "EnvQueryTest_IsAlive.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_IsAlive::UEnvQueryTest_IsAlive() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

