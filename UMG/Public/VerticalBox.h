#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "VerticalBox.generated.h"

class UVerticalBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UVerticalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UVerticalBox();
    UFUNCTION(BlueprintCallable)
    UVerticalBoxSlot* InsertChildIntoVerticalBox(int32 Index, UWidget* Content);
    
    UFUNCTION(BlueprintCallable)
    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
    
};

