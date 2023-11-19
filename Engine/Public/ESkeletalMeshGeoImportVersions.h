#pragma once
#include "CoreMinimal.h"
#include "ESkeletalMeshGeoImportVersions.generated.h"

UENUM(BlueprintType)
enum class ESkeletalMeshGeoImportVersions : uint8 {
    Before_Versionning,
    SkeletalMeshBuildRefactor,
    VersionPlusOne,
    LatestVersion = 0x1,
};

