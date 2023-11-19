#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TBLSocialSubScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTBLSocialSubScreen : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListRefreshInterval;
    
public:
    UTBLSocialSubScreen();
    UFUNCTION(BlueprintCallable)
    void RefreshLists();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshLists();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusOnEntry();
    
    UFUNCTION(BlueprintCallable)
    void FocusOnEntries();
    
};

