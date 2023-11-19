#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CommunityServerLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UCommunityServerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCommunityServerLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetStageTimeOverride(UObject* WorldContextObject, int32 StageId, int32& StageTimeOverride);
    
};

