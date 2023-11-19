#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "TBLGameViewportClient.generated.h"

class ULoadingScreenPanelWidget;

UCLASS(Blueprintable, NonTransient)
class UTBLGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsListeningForKeybinding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDemoDebugInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadingScreenPanelWidget* LoadingScreenPanelUserWidget;
    
public:
    UTBLGameViewportClient();
    UFUNCTION(BlueprintCallable)
    void FadeOutLoadingPanel(bool bIsInitialLoadingScreen);
    
};

