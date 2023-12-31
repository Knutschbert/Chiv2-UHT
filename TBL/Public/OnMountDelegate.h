#pragma once
#include "CoreMinimal.h"
#include "OnMountDelegate.generated.h"

class AActor;
class USiegeMountPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMount, AActor*, AttachParent, USiegeMountPoint*, MountPoint);

