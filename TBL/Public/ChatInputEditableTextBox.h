#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "ChatInputEditableTextBox.generated.h"

UCLASS(Blueprintable)
class UChatInputEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UChatInputEditableTextBox();
};

