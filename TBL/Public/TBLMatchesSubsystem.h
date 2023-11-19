#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "TBLMatchesSubsystem.generated.h"

class AGameStateBase;
class UWorld;

UCLASS(Blueprintable)
class UTBLMatchesSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTBLMatchesSubsystem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPS5MatchResponsiblePlayerUpdated(FUniqueNetIdRepl Player);
    
    UFUNCTION(BlueprintCallable)
    void OnPS5MatchIdChanged(const FString& MatchID);
    
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* LoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStateChanged(FName NewMatchState);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSetEvent(AGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable)
    void MatchUpdate();
    
};

