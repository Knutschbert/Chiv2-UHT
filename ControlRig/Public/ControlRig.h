#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NodeMappingProviderInterface -FallbackName=NodeMappingProviderInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=PropertyPath -ObjectName=CachedPropertyPath -FallbackName=CachedPropertyPath
#include "ControlRigDrawContainer.h"
#include "ControlRigManipulatable.h"
#include "ERigExecutionType.h"
#include "RigHierarchyContainer.h"
#include "ControlRig.generated.h"

class UAnimationDataSourceRegistry;
class UControlRigGizmoLibrary;
class URigVM;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CONTROLRIG_API UControlRig : public UObject, public INodeMappingProviderInterface, public IControlRigManipulatable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERigExecutionType ExecutionType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVM* VM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigHierarchyContainer Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> InputProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCachedPropertyPath> OutputProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigDrawContainer DrawContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationDataSourceRegistry* DataSourceRegistry;
    
public:
    UControlRig();
    
    // Fix for true pure virtual functions not being implemented
};

