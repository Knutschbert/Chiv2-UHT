#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFaction.h"
#include "Templates/SubclassOf.h"
#include "TBLAILibrary.generated.h"

class AAIController;
class AActor;
class ATBLAIController;
class ATBLCharacter;
class UBehaviorTree;
class UI_Influence;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UTBLAILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTBLAILibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATBLCharacter* SpawnTBLAIFromClass(UObject* WorldContextObject, TSubclassOf<ATBLCharacter> CharacterClass, EFaction Faction, TSubclassOf<ATBLAIController> ControllerClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATBLAIController* SpawnTBLAIControllerFromClass(UObject* WorldContextObject, EFaction Faction, TSubclassOf<ATBLAIController> ControllerClass, TSubclassOf<ATBLCharacter> NextSpawnCharacterClass, UBehaviorTree* BehaviorTree, bool IsPlayerBot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAvoidanceArea(UObject* WorldContextObject, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEmote(ATBLCharacter* Character, FName EmoteName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InfluenceAtLocation(TSubclassOf<UI_Influence> InfluenceInput, AAIController* Controller, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPerceivedLocationOfActor(AAIController* Controller, AActor* Actor, FVector& OutVector);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<AActor*> GetActorsByAITag(UObject* WorldContextObject, FGameplayTag Tag, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetActorAITags(AActor* Actor, EFaction Faction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateAvoidanceArea(UObject* WorldContextObject, UObject* Instigator, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllAITagsForFaction(UObject* WorldContextObject, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static void AIUntagManyActors(TArray<AActor*> Actor, FGameplayTagContainer TagsToRemove, EFaction Faction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AIUntagAllActorsForFaction(UObject* WorldContextObject, FGameplayTagContainer TagsToRemove, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static void AIUntagActor(AActor* Actor, FGameplayTagContainer TagsToRemove, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static void AITagManyActors(TArray<AActor*> Actors, FGameplayTagContainer TagsToAdd, EFaction Faction, bool bUntagWhenActorDies);
    
    UFUNCTION(BlueprintCallable)
    static void AITagActor(AActor* Actor, FGameplayTagContainer TagsToAdd, EFaction Faction, bool bUntagWhenActorDies);
    
};

