#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInputPriority.h"
#include "EWeaponAbilitySlotKey.h"
#include "InputRequest.h"
#include "AIControlHandler.generated.h"

class APawn;
class ATBLCharacter;
class UInventory;

UCLASS(Blueprintable)
class TBL_API UAIControlHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputRequest> InputRequestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UObject>> SprintRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponAbilitySlotKey CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
public:
    UAIControlHandler();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSprint();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAction();
    
    UFUNCTION(BlueprintCallable)
    bool StopAction(EWeaponAbilitySlotKey Action);
    
    UFUNCTION(BlueprintCallable)
    bool StartAction(EWeaponAbilitySlotKey Action);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RevokeSprint(UObject* RequestedBy);
    
    UFUNCTION(BlueprintCallable)
    void RevokeAllActionsFromObject(UObject* RequestedBy);
    
    UFUNCTION(BlueprintCallable)
    bool RevokeAction(EWeaponAbilitySlotKey Action, UObject* RequestedBy, EInputPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSprint(UObject* RequestedBy);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAction(EWeaponAbilitySlotKey Action, UObject* RequestedBy, EInputPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void OnPossess(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponAbilitySlotKey GetWeaponAbilitySlotKey(const FName& Name) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSprint();
    
    UFUNCTION(BlueprintCallable)
    void ClearActions();
    
};

