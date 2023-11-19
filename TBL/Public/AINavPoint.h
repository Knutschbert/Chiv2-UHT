#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationObjectBase -FallbackName=NavigationObjectBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EFaction.h"
#include "AINavPoint.generated.h"

class UBillboardComponent;

UCLASS(Abstract, Blueprintable)
class AAINavPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TagsToAddWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AITagsToAddWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    AAINavPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBillboardComponent* K2_GetGoodSprite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBillboardComponent* K2_GetBadSprite() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Activate();
    
};

