#include "ControlRigComponent.h"

void UControlRigComponent::OnPreInitialize_Implementation() {
}

void UControlRigComponent::OnPreEvaluate_Implementation() {
}

void UControlRigComponent::OnPostInitialize_Implementation() {
}

void UControlRigComponent::OnPostEvaluate_Implementation() {
}

UControlRig* UControlRigComponent::BP_GetControlRig() const {
    return NULL;
}

UControlRigComponent::UControlRigComponent() {
    this->ControlRig = NULL;
}

