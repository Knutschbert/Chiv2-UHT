#include "NavModifierComponent.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

void UNavModifierComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

UNavModifierComponent::UNavModifierComponent() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bIncludeAgentHeight = true;
}

