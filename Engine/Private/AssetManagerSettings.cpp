#include "AssetManagerSettings.h"

UAssetManagerSettings::UAssetManagerSettings() {
    this->PrimaryAssetTypesToScan.AddDefaulted(31);
    this->DirectoriesToExclude.AddDefaulted(2);
    this->PrimaryAssetRules.AddDefaulted(1);
    this->bOnlyCookProductionAssets = false;
    this->bShouldManagerDetermineTypeAndName = true;
    this->bShouldGuessTypeAndNameInEditor = true;
    this->bShouldAcquireMissingChunksOnLoad = false;
}

