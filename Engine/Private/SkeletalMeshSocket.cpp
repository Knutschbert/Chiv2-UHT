#include "SkeletalMeshSocket.h"

void USkeletalMeshSocket::InitializeSocketFromLocation(const USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal) {
}

FVector USkeletalMeshSocket::GetSocketLocation(const USkeletalMeshComponent* SkelComp) const {
    return FVector{};
}

USkeletalMeshSocket::USkeletalMeshSocket() {
    this->bForceAlwaysAnimated = true;
}

