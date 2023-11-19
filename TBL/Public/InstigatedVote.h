#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InstigatedVote.generated.h"

class UVotingInstance;

USTRUCT(BlueprintType)
struct FInstigatedVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoteResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VotedFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstigationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVotingInstance> VoteClass;
    
    TBL_API FInstigatedVote();
};

