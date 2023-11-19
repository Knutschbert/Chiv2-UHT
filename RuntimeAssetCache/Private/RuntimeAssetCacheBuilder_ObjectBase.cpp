#include "RuntimeAssetCacheBuilder_ObjectBase.h"

void URuntimeAssetCacheBuilder_ObjectBase::SaveNewAssetToCache(UObject* NewAsset) {
}

void URuntimeAssetCacheBuilder_ObjectBase::OnAssetCacheMiss_Implementation() {
}

void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsyncComplete(int32 Handle, FVoidPtrParam DataPtr) {
}

void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsync(const FOnAssetCacheComplete& OnComplete) {
}

URuntimeAssetCacheBuilder_ObjectBase::URuntimeAssetCacheBuilder_ObjectBase() {
    this->AssetVersion = 0;
}

