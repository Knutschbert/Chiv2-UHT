#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "MultiActorHudMarkerActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMultiActorHudMarkerActor : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MarkedActor;
    
    TBL_API FMultiActorHudMarkerActor();
};

