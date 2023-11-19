#include "AndroidPermissionFunctionLibrary.h"

bool UAndroidPermissionFunctionLibrary::CheckPermission(const FString& permission) {
    return false;
}

UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(const TArray<FString>& Permissions) {
    return NULL;
}

UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary() {
}

