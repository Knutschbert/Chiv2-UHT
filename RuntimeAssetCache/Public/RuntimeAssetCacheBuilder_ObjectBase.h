#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnAssetCacheCompleteDelegate.h"
#include "RuntimeAssetCacheBuilder.h"
#include "VoidPtrParam.h"
#include "RuntimeAssetCacheBuilder_ObjectBase.generated.h"

UCLASS(Blueprintable)
class RUNTIMEASSETCACHE_API URuntimeAssetCacheBuilder_ObjectBase : public UObject, public IRuntimeAssetCacheBuilder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    URuntimeAssetCacheBuilder_ObjectBase();
    UFUNCTION(BlueprintCallable)
    void SaveNewAssetToCache(UObject* NewAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAssetCacheMiss();
    
    UFUNCTION(BlueprintCallable)
    void GetFromCacheAsyncComplete(int32 Handle, FVoidPtrParam DataPtr);
    
    UFUNCTION(BlueprintCallable)
    void GetFromCacheAsync(const FOnAssetCacheComplete& OnComplete);
    
    
    // Fix for true pure virtual functions not being implemented
};

