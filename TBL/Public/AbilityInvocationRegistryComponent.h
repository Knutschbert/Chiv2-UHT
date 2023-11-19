#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ETargetMethodEvent.h"
#include "Result.h"
#include "AbilityInvocationRegistryComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityInvocationRegistryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAbilityInvocationRegistryComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientTargetMethodEvent(int32 InvocationId, FName TargetMethodName, TEnumAsByte<ETargetMethodEvent::Type> Event, FVector Location, const TArray<AActor*>& HitTargets);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbilityError(int32 InvocationId, FResult Error);
    
};

