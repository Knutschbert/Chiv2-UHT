#include "LevelStreaming.h"

bool ULevelStreaming::ShouldBeLoaded() const {
    return false;
}

void ULevelStreaming::SetShouldBeVisible(bool bInShouldBeVisible) {
}

void ULevelStreaming::SetShouldBeLoaded(bool bInShouldBeLoaded) {
}

void ULevelStreaming::SetPriority(int32 NewPriority) {
}

void ULevelStreaming::SetLevelLODIndex(int32 LODIndex) {
}

bool ULevelStreaming::IsStreamingStatePending() const {
    return false;
}

bool ULevelStreaming::IsLevelVisible() const {
    return false;
}

bool ULevelStreaming::IsLevelLoaded() const {
    return false;
}

FName ULevelStreaming::GetWorldAssetPackageFName() const {
    return NAME_None;
}

ULevel* ULevelStreaming::GetLoadedLevel() const {
    return NULL;
}

ALevelScriptActor* ULevelStreaming::GetLevelScriptActor() {
    return NULL;
}

ULevelStreaming* ULevelStreaming::CreateInstance(const FString& UniqueInstanceName) {
    return NULL;
}

ULevelStreaming::ULevelStreaming() {
    this->LevelLODIndex = -1;
    this->StreamingPriority = 0;
    this->bShouldBeVisible = false;
    this->bShouldBeLoaded = false;
    this->Blocked = false;
    this->bIsStatic = false;
    this->bShouldBlockOnLoad = false;
    this->bShouldBlockOnUnload = false;
    this->bDisableDistanceStreaming = false;
    this->bDrawOnLevelStatusMap = true;
    this->MinTimeBetweenVolumeUnloadRequests = 2.00f;
    this->LoadedLevel = NULL;
    this->PendingUnloadLevel = NULL;
}

