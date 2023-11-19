#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DeathDamageTakenEvent.h"
#include "ProjectileOverlapEventInterface.h"
#include "TBLActor.h"
#include "WaterActor.generated.h"

class AActor;
class ATBLCharacter;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AWaterActor : public ATBLActor, public IProjectileOverlapEventInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZPlanExtent;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> OverlappedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATBLCharacter*> DeadCharacters;
    
public:
    AWaterActor();
private:
    UFUNCTION(BlueprintCallable)
    void PerformDeadCharactersIteration();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaterOverlapEvent(AActor* Actor, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnWaterMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(const FDeathDamageTakenEvent Event);
    
    
    // Fix for true pure virtual functions not being implemented
};

