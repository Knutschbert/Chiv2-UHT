#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionsListEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOptionsListEntry : public UUserWidget {
    GENERATED_BODY()
public:
    UOptionsListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelected(const TEnumAsByte<ESelectInfo::Type> SelectInfo);
    
};

