#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HUDMarkerInterface.generated.h"

class APlayerController;

UINTERFACE(Blueprintable)
class UHUDMarkerInterface : public UInterface {
    GENERATED_BODY()
};

class IHUDMarkerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHUDMarkerProgress(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHUDMarkerLocation(APlayerController* PlayerController);
    
};

