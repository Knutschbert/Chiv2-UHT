#pragma once
#include "CoreMinimal.h"
#include "UserActivity.generated.h"

USTRUCT(BlueprintType)
struct FUserActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    ENGINE_API FUserActivity();
};

