#include "EnvQueryTest_InCombatArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_InCombatArea::UEnvQueryTest_InCombatArea() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

