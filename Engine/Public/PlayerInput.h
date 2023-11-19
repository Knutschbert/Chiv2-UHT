#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EInputEvent.h"
#include "KeyBind.h"
#include "PlayerInput.generated.h"

UCLASS(Blueprintable, Transient, Config=Input, Within=PlayerController)
class ENGINE_API UPlayerInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyBind> DebugExecBindings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InvertedAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeCurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, TEnumAsByte<EInputEvent>> ConsumedInputKeys;
    
    UPlayerInput();
    UFUNCTION(BlueprintCallable, Exec)
    void SetMouseSensitivity(const float Sensitivity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBind(FName BindName, const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertAxisKey(const FKey AxisKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertAxis(const FName AxisName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSmoothing();
    
};

