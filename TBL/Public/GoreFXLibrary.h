#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WeaponGoreSlot.h"
#include "GoreFXLibrary.generated.h"

class ACharacter;
class AInventoryItem;
class ATBLCharacter;
class UBoneList;
class USkeletalMeshComponent;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class UGoreFXLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGoreFXLibrary();
    UFUNCTION(BlueprintCallable)
    static USkeletalMeshComponent* KnockoffHelmet(ATBLCharacter* Char);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGoreActionFromAttack(const AInventoryItem* InIventoryItem, FName InAttackName, FWeaponGoreSlot& GoreAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindClosestBoneFromGiven(const USkinnedMeshComponent* InSkinnedMesh, const UBoneList* InBreakableBones, const FVector& InTestLocation, FVector& OutBoneLocation, float& OutClosestDistance);
    
    UFUNCTION(BlueprintCallable)
    static void FillUpComponentSpaceTransformsRefPose(const USkeletalMeshComponent* SKM, TArray<FTransform>& ComponentSpaceTransforms);
    
    UFUNCTION(BlueprintCallable)
    static bool BreakAtBone(ACharacter* Char, FName BoneName, const FVector& Impulse, const FVector& HitLocation, bool bSpawnedItem);
    
};

