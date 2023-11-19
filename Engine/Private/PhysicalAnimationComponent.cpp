#include "PhysicalAnimationComponent.h"

void UPhysicalAnimationComponent::SetStrengthMultiplyer(float InStrengthMultiplyer) {
}

void UPhysicalAnimationComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
}

FTransform UPhysicalAnimationComponent::GetBodyTargetTransform(FName BodyName) const {
    return FTransform{};
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData) {
}

void UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound) {
}

UPhysicalAnimationComponent::UPhysicalAnimationComponent() {
    this->StrengthMultiplyer = 1.00f;
    this->SkeletalMeshComponent = NULL;
}

