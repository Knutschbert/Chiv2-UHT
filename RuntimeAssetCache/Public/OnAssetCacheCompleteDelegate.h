#pragma once
#include "CoreMinimal.h"
#include "OnAssetCacheCompleteDelegate.generated.h"

class URuntimeAssetCacheBuilder_ObjectBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase*, CachedAssetBuilder, bool, Success);

