#pragma once
#include "CoreMinimal.h"
#include "VoidPtrParam.h"
#include "OnRuntimeAssetCacheAsyncCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRuntimeAssetCacheAsyncComplete, int32, Handle, FVoidPtrParam, Data);

