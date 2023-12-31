#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimNotifyState.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, EditInlineNew)
class ENGINE_API UAnimNotifyState : public UObject {
    GENERATED_BODY()
public:
    UAnimNotifyState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNotifyName() const;
    
};

