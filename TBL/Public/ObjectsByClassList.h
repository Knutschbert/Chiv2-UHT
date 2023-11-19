#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ESelectionMode -FallbackName=ESelectionMode
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnGenerateRowObjectByClassDelegate.h"
#include "ObjectsByClassList.generated.h"

UCLASS(Blueprintable)
class UObjectsByClassList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassToList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRowObjectByClass OnGenerateRowEvent;
    
    UObjectsByClassList();
    UFUNCTION(BlueprintCallable)
    void RefreshList();
    
};

