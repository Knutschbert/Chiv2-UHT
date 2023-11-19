#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "CreditsSection.h"
#include "CreditsScrollBox.generated.h"

UCLASS(Blueprintable, Config=Game)
class TBL_API UCreditsScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsBeforeResumingScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReversePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScrollOffset;
    
    UCreditsScrollBox();
    UFUNCTION(BlueprintCallable)
    void UpdateScrolling(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreditsSection> GetCredits();
    
};

