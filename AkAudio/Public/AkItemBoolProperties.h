#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnItemBoolPropertyDragDetectedDelegate.h"
#include "OnItemBoolPropertySelectionChangedDelegate.h"
#include "AkItemBoolProperties.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkItemBoolProperties : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemBoolPropertySelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemBoolPropertyDragDetected OnPropertyDragged;
    
    UAkItemBoolProperties();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSearchText(const FString& newText);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetSelectedProperty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FString GetSearchText() const;
    
};

