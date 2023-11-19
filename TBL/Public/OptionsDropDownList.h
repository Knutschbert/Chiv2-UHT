#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnGenerateEntryDelegate.h"
#include "OptionsDropDownList.generated.h"

class UDropDownListItem;

UCLASS(Blueprintable)
class UOptionsDropDownList : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDropDownListItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateEntry OnGenerateRowEvent;
    
    UOptionsDropDownList();
    UFUNCTION(BlueprintCallable)
    void SetItemSelection(UPARAM(Ref) UDropDownListItem*& InItem, bool bSelected, TEnumAsByte<ESelectInfo::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 AddItem(FText Text, int32 Index);
    
};

