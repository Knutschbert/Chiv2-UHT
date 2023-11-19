#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FireSourceComponent.generated.h"

class ATBLCharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class TBL_API UFireSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionComponents;
    
    UFireSourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLookAtFireSource(ATBLCharacter* Character);
    
};

