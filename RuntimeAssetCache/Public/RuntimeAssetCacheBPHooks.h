#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnRuntimeAssetCacheAsyncCompleteDelegate.h"
#include "VoidPtrParam.h"
#include "RuntimeAssetCacheBPHooks.generated.h"

class IRuntimeAssetCacheBuilder;
class URuntimeAssetCacheBuilder;

UCLASS(Blueprintable)
class RUNTIMEASSETCACHE_API URuntimeAssetCacheBPHooks : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeAssetCacheBPHooks();
    UFUNCTION(BlueprintCallable)
    static void WaitAsynchronousCompletion(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool PollAsynchronousCompletion(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static FVoidPtrParam GetSynchronous(TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCacheSize(FName Bucket);
    
    UFUNCTION(BlueprintCallable)
    static FVoidPtrParam GetAsynchronousResults(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAsynchronous(TScriptInterface<IRuntimeAssetCacheBuilder> CacheBuilder, const FOnRuntimeAssetCacheAsyncComplete& CompletionDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearCache(FName Bucket);
    
};

