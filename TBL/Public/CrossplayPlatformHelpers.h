#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ECrossplayPlatform.h"
#include "CrossplayPlatformHelpers.generated.h"

UCLASS(Blueprintable)
class UCrossplayPlatformHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCrossplayPlatformHelpers();
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform StringToPlatform(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static FString PlatformToString(ECrossplayPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform GetPlatform();
    
};

