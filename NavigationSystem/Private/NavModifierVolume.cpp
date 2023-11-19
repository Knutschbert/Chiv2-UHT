#include "NavModifierVolume.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

void ANavModifierVolume::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

ANavModifierVolume::ANavModifierVolume() {
    this->AreaClass = UNavArea_Null::StaticClass();
}

