#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ControlRigSignatureDelegate.h"
#include "ControlRigComponent.generated.h"

class UControlRig;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONTROLRIG_API UControlRigComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSignature OnPreInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSignature OnPostInitializeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSignature OnPreEvaluateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSignature OnPostEvaluateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlRig* ControlRig;
    
    UControlRigComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreEvaluate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostEvaluate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UControlRig* BP_GetControlRig() const;
    
};

