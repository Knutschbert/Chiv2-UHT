#include "RuntimeAssetCacheBPHooks.h"

void URuntimeAssetCacheBPHooks::WaitAsynchronousCompletion(int32 Handle) {
}

bool URuntimeAssetCacheBPHooks::PollAsynchronousCompletion(int32 Handle) {
    return false;
}

FVoidPtrParam URuntimeAssetCacheBPHooks::GetSynchronous(TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder) {
    return FVoidPtrParam{};
}

int32 URuntimeAssetCacheBPHooks::GetCacheSize(FName Bucket) {
    return 0;
}

FVoidPtrParam URuntimeAssetCacheBPHooks::GetAsynchronousResults(int32 Handle) {
    return FVoidPtrParam{};
}

int32 URuntimeAssetCacheBPHooks::GetAsynchronous(TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder, const FOnRuntimeAssetCacheAsyncComplete& CompletionDelegate) {
    return 0;
}

bool URuntimeAssetCacheBPHooks::ClearCache(FName Bucket) {
    return false;
}

URuntimeAssetCacheBPHooks::URuntimeAssetCacheBPHooks() {
}

