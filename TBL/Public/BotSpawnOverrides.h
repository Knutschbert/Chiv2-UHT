#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BotSpawnOverrides.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, NotPlaceable, Config=Game)
class UBotSpawnOverrides : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UBotSpawnOverrides();
};

