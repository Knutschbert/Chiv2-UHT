#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserListEntry -FallbackName=UserListEntry
#include "BlueprintOnlineUser.h"
#include "BlueprintOnlineUserListEntry.generated.h"

UINTERFACE()
class UBlueprintOnlineUserListEntry : public UUserListEntry {
    GENERATED_BODY()
};

class IBlueprintOnlineUserListEntry : public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemSet(const FBlueprintOnlineUser& ListItemObject);
    
};

