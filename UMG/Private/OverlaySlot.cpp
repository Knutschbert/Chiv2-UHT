#include "OverlaySlot.h"

void UOverlaySlot::SetZOrder(int32 InZOrder) {
}

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UOverlaySlot::SetPadding(FMargin InPadding) {
}

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UOverlaySlot::UOverlaySlot() {
    this->HorizontalAlignment = HAlign_Left;
    this->VerticalAlignment = VAlign_Top;
    this->ZOrder = 0;
}

