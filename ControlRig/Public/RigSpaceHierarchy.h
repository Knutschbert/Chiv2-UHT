#pragma once
#include "CoreMinimal.h"
#include "RigSpace.h"
#include "RigSpaceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigSpaceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigSpace> Spaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NameToIndexMapping;
    
public:
    FRigSpaceHierarchy();
};

