#include "MaterialInterface.h"

void UMaterialInterface::SetShadingRate(TEnumAsByte<EMaterialShadingRate> NewShadingRate) {
}

void UMaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse) {
}

UPhysicalMaterialMask* UMaterialInterface::GetPhysicalMaterialMask() const {
    return NULL;
}

UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterialFromMap(int32 Index) const {
    return NULL;
}

UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial() const {
    return NULL;
}

FMaterialParameterInfo UMaterialInterface::GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) const {
    return FMaterialParameterInfo{};
}

UMaterial* UMaterialInterface::GetBaseMaterial() {
    return NULL;
}

UMaterialInterface::UMaterialInterface() {
    this->SubsurfaceProfile = NULL;
}

